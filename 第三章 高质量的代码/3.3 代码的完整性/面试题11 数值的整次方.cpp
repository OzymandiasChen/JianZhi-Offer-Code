class Solution {
public:
    double Power(double base, int exponent) 
    {
    	int exp;
    	double q=base,ans=1.0;
    	if((base-0.0)<0.0000001&&(base-0.0)>-0.0000001&&exponent<0)///指数小于0且。。
    		return 0.0;
    	if(exponent==0)///指数等于0
    		return 1;
    	if(exponent<0)
    		exp=exponent*(-1);
    	else
    		exp=exponent;
    	while(exp)
    	{
    		if(exp&1)
    			ans*=q;
    		q*=q;
    		exp=exp>>1;
    	}
    	return exponent>0?ans:1/ans;
    }
};