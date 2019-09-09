class Solution {
public:
    int InversePairs(vector<int> data) 
    {
        int cnt=0;
        int i;
        int size=data.size();
        if(size==0)
        	return cnt;
        vector<int> ans(size);
        cnt=MergeSort(data,ans,0,size-1);
        return cnt;
    }
    int MergeSort(vector<int> &data,vector<int> &ans,int beg,int end)
    {
    	if(beg==end)
            return 0;
    	int mid=(beg+end)/2;
    	int left,right;
    	int i,j,k;
    	int cnt=0;
    	left=MergeSort(data,ans,beg,mid);
    	right=MergeSort(data,ans,mid+1,end);
    	i=mid;
    	j=end;
    	k=end;
    	while(i>=beg&&j>=mid+1)
    	{
    		if(data[i]>data[j])
    		{
    			ans[k--]=data[i--];
    			cnt+=(j-mid);
    			cnt=cnt%1000000007;
    		}
    		else
    			ans[k--]=data[j--];
    	}
    	for(;i>=beg;i--)
    		ans[k--]=data[i];
    	for(;j>=mid+1;j--)
    		ans[k--]=data[j];
    	for(i=beg;i<=end;i++)
    		data[i]=ans[i];
    	return (cnt+left+right)%1000000007;
    }
};