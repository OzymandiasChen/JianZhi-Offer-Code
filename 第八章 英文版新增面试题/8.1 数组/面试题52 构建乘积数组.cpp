class Solution {
public:
    vector<int> multiply(const vector<int>& A) 
    {
    	vector<int> ret;
    	int i;
    	int tmp=1;
    	int size=A.size();
    	ret.push_back(1);
    	for(i=1;i<size;i++)
    		ret.push_back(ret[i-1]*A[i-1]);
    	for(i=size-2;i>=0;i--)
    	{
    		tmp*=A[i+1];
    		ret[i]*=tmp;
    	}
    	return ret;
    }
};