class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) 
    {
    	int b,e,m;
        if(rotateArray.size()==0)
        	return -1;
        b=0;
        e=rotateArray.size()-1;
        m=0;/////0翻转的情况
        while(rotateArray[b]>=rotateArray[e])
        {
        	m=(b+e)/2;
        	if(e-b==1)
        	{
        		m=e;
        		break;
        	}
        	if(rotateArray[b]==rotateArray[e]&&rotateArray[(e+b)/2]==rotateArray[e])
        	{
        		m=b;
        		for(b=m+1;b<=e;b++)
        			if(rotateArray[b]<rotateArray[m])
        				m=b;
        		break;
        	}
        	if(rotateArray[m]>=rotateArray[b])
        		b=m;
        	if(rotateArray[m]<=rotateArray[e])
        		e=m;
        }
        return rotateArray[m];
    }
};