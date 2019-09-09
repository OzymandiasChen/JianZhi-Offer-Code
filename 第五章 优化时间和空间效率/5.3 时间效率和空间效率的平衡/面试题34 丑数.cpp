class Solution {
public:
    int GetUglyNumber_Solution(int index) 
    {
    	int tmp;
    	int t2=0,t3=0,t5=0;
    	if(index<7)
    		return index;
    	vector<int> ans(index);
    	ans[0]=1;
    	for(int i=1;i<index;i++)
    	{
    		tmp=std::min(ans[t2]*2,std::min(ans[t3]*3,ans[t5]*5));
            ans[i]=tmp;
    		if(tmp==ans[t2]*2) t2++;
    		if(tmp==ans[t3]*3) t3++;
    		if(tmp==ans[t5]*5) t5++;
    	}
    	return ans[index-1];
    }
};