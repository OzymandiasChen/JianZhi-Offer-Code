class Solution 
{
public:
	void replaceSpace(char *str,int length) 
	{
		int i;
		int cnt;
		int p1,p2;
		if(length<=0||str==NULL)
			return ;
		for(i=0,cnt=0;i<length;i++)
			if(str[i]==' ')
				cnt++;
		p1=i;
		p2=i+cnt*2;
		while(p1!=p2)
		{
			while(str[p1]!=' ')
				str[p2--]=str[p1--];
			str[p2--]='0';
			str[p2--]='2';
			str[p2--]='%';
			p1--;
		}
	}
};