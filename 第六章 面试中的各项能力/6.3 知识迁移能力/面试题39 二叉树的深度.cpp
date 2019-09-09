/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(pRoot==NULL)
            return 0;
        int left=TreeDepth(pRoot->left);
        int right=TreeDepth(pRoot->right);
    	return left>right?left+1:right+1;
    }
};






class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) 
    {
    	int depth=0;
    	return judge(pRoot,depth);
    }
    bool judge(TreeNode* pRoot,int &depth)
    {
    	if(pRoot==NULL)
    	{
    		depth=0;
    		return true;
    	}
    	int left,right;
    	int dif;
    	if(judge(pRoot->left,left)&&judge(pRoot->right,right))
    	{
    		dif=left-right;
    		if(dif<=1&&dif>=-1)
    		{
    			depth=1+(left>right?left:right);
    			return true;
    		}
    	}
    	return false;
    }
};