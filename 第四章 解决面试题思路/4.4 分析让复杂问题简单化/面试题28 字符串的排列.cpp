class Solution {
public:
    vector<string> Permutation(string str) 
    {
    	vector<string> S;
        if(str.size()==0)
			return S;
    	bl(S,str,0);
    	return S;
    }
    void bl(vector<string> &S,string str,int loc)
    {
    	char tmp;
    	int i;
    	if(str[loc]=='\0')
    		S.push_back(str);
    	sort(str.begin()+loc,str.end());
    	for(i=loc;i<str.size();i++)
    	{
    		if(i!=loc&&str[i]==str[loc])
    			continue;
    		tmp=str[i];
    		str[i]=str[loc];
    		str[loc]=tmp;
    		bl(S,str,loc+1);
			tmp=str[i];
    		str[i]=str[loc];
    		str[loc]=tmp;    		
    	}
    }
};