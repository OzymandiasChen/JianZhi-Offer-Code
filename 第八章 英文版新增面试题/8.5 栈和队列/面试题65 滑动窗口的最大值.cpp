class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
    	vector<int> ret;
    	deque<int> s;
    	int i;
    	for(i=0;i<num.size();i++)
    	{
    		while(s.size()&&num[i]>=num[s.back()])
    			s.pop_back();
    		while(s.size()&&(s.front()+size-1)<i)
    			s.pop_front();
    		s.push_back(i);
    		if(size&&i+1>=size)
    			ret.push_back(num[s.front()]);
    	}
        return ret;
    }
};