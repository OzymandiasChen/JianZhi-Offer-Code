class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
    	int i,cnt=0;
    	int c=0,b=0,a=0;
    	for(i=1;i<=n;i*=10)
    	{
    		a=n%i;
    		b=n/(i*10);
    		c=(n/i)%10;
    		if(c==0)
    			cnt+=b*i;
    		else if(c==1)
    			cnt+=(b*i+a+1);
    		else
    			cnt+=(b+1)*i;
    	}
    	return cnt;
    }
};