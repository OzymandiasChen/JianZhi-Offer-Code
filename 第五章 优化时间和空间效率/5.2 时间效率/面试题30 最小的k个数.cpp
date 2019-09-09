class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
    {
    	int size=input.size();
    	if(k<1||size<k)
    		return vector<int>();
    	multiset<int,greater<int> > tr;
    	vector<int>::iterator vec_it=input.begin();
    	for(;vec_it!=input.end();vec_it++)
    		if(tr.size()<k)
    			tr.insert(*vec_it);
    		else
    			if(*vec_it<*(tr.begin()))
    			{
    				tr.erase(tr.begin());
    				tr.insert(*vec_it);
    			}
    	return vector<int>(tr.begin(),tr.end());	
    }
};