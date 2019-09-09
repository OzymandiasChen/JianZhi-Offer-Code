class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
    	int cnt=0,i,j;
    	bool* visited=new bool[rows*cols];
    	memset(visited,0,rows*cols);
    	cnt=Search(threshold,visited,rows,cols,0,0);
        return cnt;
    }
    int Search(int threshold,bool* visited, int rows, int cols,int i,int j)
    {
    	int sum=its(i,j);
    	int cnt=0;
    	if(i>=0&&j>=0&&i<rows&&j<cols&&sum<=threshold&&!visited[i*cols+j])
    	{
    		visited[i*cols+j]=1;
    		cnt=1+Search(threshold,visited,rows,cols,i+1,j)+Search(threshold,visited,rows,cols,i,j+1)+Search(threshold,visited,rows,cols,i-1,j)+Search(threshold,visited,rows,cols,i,j-1);
    	}
    	return  cnt;
    }
    int its(int i,int j)
    {
		int sum=0;;
		do
		{
			sum+=i%10;
			i/=10;
		}while(i);
		do
		{
			sum+=j%10;
			j/=10;
		}while(j);
		return sum;
    }
};