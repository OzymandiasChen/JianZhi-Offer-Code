class Solution {
public:
    int FirstNotRepeatingChar(string str) 
    {
        if(str=="")
            return -1;
    	int i,loc;
    	int flag[257];
    	for(i=0;i<257;i++)
    		flag[i]=0;
        for(i=0;str[i]!='\0';i++)
        	flag[str[i]]++;
        for(i=0;str[i]!='\0';i++)
        	if(flag[str[i]]==1)
            {
                loc=i;
                break;
            }
       return loc; 		
    }
};