class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) 
    {
    	stack<int> S;
    	int i=0,j=0;
    	bool ret=false;
        int m=pushV.size(),n=popV.size();
        if(m==0||n==0||m!=n)
        	return ret;
        for(i=0,j=0;i<m;)
        {
        	S.push(pushV[i++]);
        	while(j<m&&!S.empty()&&S.top()==popV[j])
        	{
        		j++;
        		S.pop();
        	}
        }
        if(S.empty())
        	ret=true;
        return ret;
    }
};