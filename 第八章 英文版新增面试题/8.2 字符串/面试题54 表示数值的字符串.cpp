class Solution {
public:
    bool isNumeric(char* str)
    {
    	int i=0;
    	int loc;
    	bool ret;
    	if(*str=='\0')
			return false;
		if(str[i]=='+'||str[i]=='-')
			i++;

		ScanDigit(str,i);

		if(str[i]=='.')
        {
        	i++;

            ScanDigit(str,i);

        }
			
		if(str[i]=='e'||str[i]=='E')
		{
			i++;
			if(str[i]=='+'||str[i]=='-')
				i++;
			loc=i;
			ScanDigit(str,i);	
			if(i==loc)
				return false;
		}
		if(str[i]!='\0')
			return false;
		return true;
    }
    void ScanDigit(char *str,int &i)
    {
    	while(str[i]<='9'&&str[i]>='0')
    		i++;
    }
};