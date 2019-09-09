/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
/////中序遍历的改版
class Solution {
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
    	TreeNode *last=NULL;
        if(!pRootOfTree)
            return NULL;
    	zxbl(pRootOfTree,last);
    	while(last->left)
    		last=last->left;
    	return last;
    }
    void zxbl(TreeNode* p,TreeNode* &last)
    {
    	if(p==NULL)
    		return ;
    	zxbl(p->left,last);
    	p->left=last;
    	if(last)
    		last->right=p;
    	last=p;
    	zxbl(p->right,last);
    }
};