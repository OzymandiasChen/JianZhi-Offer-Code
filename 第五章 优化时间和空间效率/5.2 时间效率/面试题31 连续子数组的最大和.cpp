class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) 
    {
    	int i;
    	int tmp,ans;
    	int size=array.size();
    	if(size==0)
    		return 0;
    	tmp=array[0];
    	ans=tmp;
    	for(i=1;i<size;i++)
    	{
    		tmp=tmp+array[i]>array[i]?tmp+array[i]:array[i];
    		ans=tmp>ans?tmp:ans;
    	}
    	return ans;
    }
};