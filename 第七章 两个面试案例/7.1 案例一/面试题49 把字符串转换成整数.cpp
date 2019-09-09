class Solution {
public:
    int StrToInt(string str) 
    {
    	bool flag=false,minus=false;
    	long long num=0;
    	int i=0;
        if(str=="")
        	return (int)num;
        if(str[i]=='+')
        	i++;
        if(str[i]=='-')
        {
        	minus=true;
        	i++;
        }
        while(str[i]!='\0')
        {
        	if(str[i]>='0'&&str[i]<='9')
        		num=num*10+str[i]-'0';
        	else
            {
                flag=false;
                return 0;
            }
        		
        	i++;
        }
        if(minus)
        	num*=-1;

        return (int)num;
    }
};