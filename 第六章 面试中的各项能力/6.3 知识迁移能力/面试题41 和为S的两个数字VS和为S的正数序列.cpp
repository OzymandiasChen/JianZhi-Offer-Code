class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) 
    {
    	vector<int> ans; 
        int size=array.size();
        int i=0,j=size-1;
        int tmp;
        if(size==0)
        	return ans;
        while(i<=j)
        {
        	tmp=array[i]+array[j];
        	if(tmp<sum)
        		i++;
        	else if(tmp>sum)
        		j--;
        	else
        	{
        		if(ans.size()==0)
        		{
        			ans.push_back(array[i]);
        			ans.push_back(array[j]);
        		}
        		else if(array[i]*array[j]<ans[0]*ans[1])
        		{
        			array.clear();
        			ans.push_back(array[i]);
        			ans.push_back(array[j]);	
        		}
        		i++;
        		j--;
        	}
        }
        return ans;
    }
};





class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) 
    {
    	int i=1,j=2;
        int b;
    	int tmp=3;
    	int size=0;
    	vector<int> ans;
    	vector<vector<int> > ret;
    	while(i<=sum/2+1)
    	{
    		if(tmp==sum)
    		{
    			for(b=i;b<=j;b++)
    				ans.push_back(b);
    			ret.push_back(ans);
    			ans.clear();
    			j++;
    			tmp+=j;
    		}
    		else if(tmp<sum)
    		{
    			j++;
    			tmp+=j;
    		}
    		else
    		{
    			tmp-=i;
    			i++;
    		}
    	}
    	return ret;
    }
};