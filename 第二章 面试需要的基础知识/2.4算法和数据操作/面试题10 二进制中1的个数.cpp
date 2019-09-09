class Solution {
public:
     int  NumberOf1(int n) 
     {
     	int cnt=0;
     	unsigned int flag=1;
     	while(flag) 
     	{
     		if(flag&n)
     			cnt++;
     		flag=flag<<1;
        }
        return cnt;  
     }
}; 