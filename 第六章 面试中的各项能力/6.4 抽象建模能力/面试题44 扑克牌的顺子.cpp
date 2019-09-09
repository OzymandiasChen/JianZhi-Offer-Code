class Solution {
public:
    bool IsContinuous( vector<int> numbers ) 
    {
        int i=0;
    	int zero=0;
        if(numbers.size()!=5)
            return false;
    	std::sort(numbers.begin(),numbers.end());
    	while(numbers[i]==0)
    	{
    		i++;
    		zero++;
    	}
        if(zero==4)
    		return true;
    	for(;i<5;i++)
    		if(i!=0&&numbers[i-1]!=0)
    		{
    			if(numbers[i]==numbers[i-1])
    				return false;
    			if(numbers[i]>=numbers[i-1]+1)
    				zero-=(numbers[i]-numbers[i-1]-1);
    		}
    	if(zero!=0)
    		return false;
    	return true;
    }
};