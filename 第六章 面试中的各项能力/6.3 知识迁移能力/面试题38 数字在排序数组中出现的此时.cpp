class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) 
    {
    	int size=data.size();
    	int cnt=0;
    	int beg,end;
    	if(size==0)
    		return 0;
    	beg=GetFirst(data,k,0,size-1);
    	end=GetLast(data,k,0,size-1);
        return (beg!=-1&&end!=-1)?end-beg+1:0;
    }
    int GetFirst(vector<int> &data,int k,int beg,int end)
    {
        int ans=-1;
    	if(beg>end)
    		return -1;
    	int mid=(beg+end)/2;
    	if(data[mid]>k)
    		ans=GetFirst(data,k,beg,mid-1);
    	else if(data[mid]<k)
    		ans=GetFirst(data,k,mid+1,end);
    	else if(mid>0&&data[mid-1]!=k||mid==0)
    		ans=mid;
    	else
    		ans=GetFirst(data,k,beg,mid-1);
        return ans;
    }
    int GetLast(vector<int> &data,int k,int beg,int end)
    {
    	int mid;
    	while(beg<=end)
    	{
    		mid=(beg+end)/2;
    		if(data[mid]>k)
    			end=mid-1;
    		else if(data[mid]<k)
    			beg=mid+1;
    		else if(mid<end&&data[mid+1]!=k||mid==end)
    			return mid;
    		else
    			beg=mid+1;
    	}
    	return -1;
    }
};