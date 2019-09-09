class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
    	if(matrix==NULL||rows<1||cols<1||str==NULL)
    		return false;
    	bool *visited=new bool[rows*cols];
    	int i,j;
    	bool ret=false;
    	memset(visited,0,rows*cols);
    	int loc=0;
    	for(i=0;i<rows;i++)
    		for(j=0;j<cols;j++)
    		{
    			ret=BFS(matrix,rows,cols,str,visited,loc,i,j);
    			if(ret)
    				return ret;
    		}
    	return ret;
    }

    bool BFS(char* matrix, int rows, int cols, char* str,bool *visited,int loc,int i,int j)
    {
    	bool ret=false;
    	if(str[loc]=='\0')
    		return true;
    	if(i>=0&&j>=0&&i<rows&&j<cols&&str[loc]==matrix[i*cols+j]&&!visited[i*cols+j])
    	{
    		loc++;
    		visited[i*cols+j]=1;
    		ret=BFS(matrix,rows,cols,str,visited,loc,i+1,j)||BFS(matrix,rows,cols,str,visited,loc,i,j+1)||BFS(matrix,rows,cols,str,visited,loc,i,j-1)||BFS(matrix,rows,cols,str,visited,loc,i-1,j);
            if(!ret)
            {
            	loc--;
            	visited[i*cols+j]=0;
            }
    	}
    	return ret;
    }
};