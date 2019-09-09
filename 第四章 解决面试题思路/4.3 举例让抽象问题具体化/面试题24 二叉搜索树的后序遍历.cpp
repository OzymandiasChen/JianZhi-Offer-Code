class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) 
    {
        int m=sequence.size();
        if(m==0)
            return false;
		return judge(&sequence[0],0,m-1);
    }
    bool judge(int A[],int b,int e)
    {
    	int root;
    	int m,i,j;
    	bool l=true,r=true;
    	if(b==e)
    		return true;
    	root=A[e];
    	i=b;
    	while(A[i]<root&&i<e)
    		i++;
    	m=i;
    	while(A[i]>root&&i<e)
    		i++;
    	if(i!=e)
    		return false;
    	if(m>b)
    		l=judge(A,b,m-1);
    	if(m<e)
    		r=judge(A,m,e-1);
    	return l&&r;
    }
};