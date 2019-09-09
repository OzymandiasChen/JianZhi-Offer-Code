////////法一，从右上开始
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
    	int m,n,x,y,tmp;
    	bool flag=false;
    	m=array.size();
    	n=array[0].size();
    	x=0;
    	y=n-1;
    	while(x<m&&y>=0)
    	{
    		tmp=array[x][y];
    		if(tmp==target)
    		{
    			flag=true;
    			break;
    		}
    		else if(tmp<target)
    			x++;
    		else
    			y--;
    	}
        return flag;
    }
};



////////法二，从左下开始
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
    	int m,n,x,y,tmp;
    	bool flag=false;
    	m=array.size();
    	n=array[0].size();
    	x=m-1;
    	y=0;
    	while(y<n&&x>=0)
    	{
    		tmp=array[x][y];
    		if(tmp==target)
    		{
    			flag=true;
    			break;
    		}
    		else if(tmp>target)
    			x--;
    		else
    			y++;
    	}
        return flag;
    }
};