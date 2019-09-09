class Solution {
public:
    string ReverseSentence(string str) 
    {
    	int size;
    	int beg,end;
    	int i,j;
    	if(str.size()==0)
    		return str;
    	Reverse(str,0,str.size()-1);
    	i=0;
    	beg=0;
    	end=0;
    	while(end<=str.size())
    	{
    		if(str[end]=='\0'||str[end]==' ')
    		{
    			Reverse(str,beg,end-1);
    			end++;
    			beg=end;
    		}
    		else
    			end++;
    	}
    	return str;   
    }
    void Reverse(string &str,int beg,int end)
    {
    	int i,j;
    	char tmp;
    	while(beg<end)
    	{
    		tmp=str[beg];
    		str[beg]=str[end];
    		str[end]=tmp;
    		beg++;
    		end--;
    	}
    }
};



class Solution {
public:
    string LeftRotateString(string str, int n) 
    {
    	if(str==""||n>str.size()||n<=0)
    		return str;
    	int size=str.size();
    	Reverse(str,0,n-1);
    	Reverse(str,n,size-1);
    	Reverse(str,0,size-1);
    	return str;   
    }
    void Reverse(string &str,int beg,int end)
    {
    	int i,j;
    	char tmp;
    	while(beg<end)
    	{
    		tmp=str[beg];
    		str[beg]=str[end];
    		str[end]=tmp;
    		beg++;
    		end--;
    	}
    }
}; 