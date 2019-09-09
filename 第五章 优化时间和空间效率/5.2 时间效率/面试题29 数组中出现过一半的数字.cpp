class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) 
    {
    	if(numbers.size()==0)
    		return 0;
    	int i;
    	int cnt=1;
    	int ans=numbers[0];
    	for(i=1;i<numbers.size();i++)
    	{
    		if(cnt==0)
    		{
    			ans=numbers[i];
    			cnt=1;
    		}
    		else if(ans==numbers[i])
    			cnt++;
    		else
    			cnt--;
    	}
    	cnt=0;
    	for(i=0;i<numbers.size();i++)
    		if(ans==numbers[i])
    			cnt++;
    	return cnt*2<=numbers.size()?0:ans;
    }
};