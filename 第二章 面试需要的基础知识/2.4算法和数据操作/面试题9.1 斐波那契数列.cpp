class Solution {
public:
    int Fibonacci(int n) 
    {
    	int i;
    	long long F[40];
    	F[0]=0;
    	F[1]=1;
    	for(i=2;i<=n;i++)
    		F[i]=F[i-1]+F[i-2];
    	return F[n];
    }
};