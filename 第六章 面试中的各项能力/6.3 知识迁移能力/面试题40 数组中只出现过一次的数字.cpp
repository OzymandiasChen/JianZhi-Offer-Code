class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) 
    {
        int size=data.size();
        int i;
        int q;
        int tmp;
        if(size<2)
            return ;
        tmp=data[0];
        for(i=1;i<size;i++)
            tmp^=data[i];
        if(tmp==0)
            return ;
        q=1;
        while(1)
        {
            if((tmp/q)%2==1)
                break;
            q*=2;
        }
        *num1=0;
        *num2=0;
        for(i=0;i<size;i++)
            if(data[i]&q)
                *num1^=data[i];
            else
                *num2^=data[i];
    }
};