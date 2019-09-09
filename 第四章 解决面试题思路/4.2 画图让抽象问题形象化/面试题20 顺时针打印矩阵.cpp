class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) 
    {
    	vector<int> rec;
    	int i;
    	int r=matrix.size(),c=matrix[0].size();
    	int x,y,ex,ey;
    	int cir;
    	cir=(r+1)/2<(c+1)/2?(r+1)/2:(c+1)/2;
    	for(i=0;i<cir;i++)
    	{
    		ex=r-i-1;
    		ey=c-i-1;
    		for(x=i,y=i;y<=ey;y++)
    			rec.push_back(matrix[x][y]);
    		for(x=i+1,y=ey;x<=ex;x++)//初始值就避免了只有一行的情况
    			rec.push_back(matrix[x][y]);
    		if(ex>i&&ey-1>=i)
    			for(x=ex,y=ey-1;y>=i;y--)
    				rec.push_back(matrix[x][y]);
    		if(ex-1>i&&ey-1>=i)
    			for(x=ex-1,y=i;x>i;x--)
    				rec.push_back(matrix[x][y]);
    	}
    	return rec;

    }
};