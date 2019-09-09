class Solution
{
private:
	int hash[256];
	int index;
public:
	Solution():index(0)
	{
		for(int i=0;i<256;i++)
			hash[i]=-1;
	}
  //Insert one char from stringstream
    void Insert(char ch)
    {
    	if(hash[ch]==-1)
    		hash[ch]=index;
    	else if(hash[ch]>=0)
    		hash[ch]=-2;
    	index++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
    	char ch='#';
    	int min=index;
    	for(int i=0;i<256;i++)
    		if(hash[i]>=0&&hash[i]<min)
    		{
    			ch=(char)i;
    			min=hash[i];
    		}
    	return ch;
    }

};