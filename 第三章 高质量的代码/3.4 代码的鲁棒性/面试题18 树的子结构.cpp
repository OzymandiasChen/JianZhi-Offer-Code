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
	bool judge(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if(!pRoot2)
			return true;
		if(!pRoot1)
			return false;
		if(pRoot1->val==pRoot2->val)
			return judge(pRoot1->left,pRoot2->left)&&judge(pRoot1->right,pRoot2->right);
		else 
			return false;
	}
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
    	bool ret;
        ret=false;
    	if(pRoot1!=NULL&&pRoot2!=NULL)
    	{
    		if(pRoot1->val==pRoot2->val)
    			ret=judge(pRoot1,pRoot2);
    		if(!ret)
    			ret=HasSubtree(pRoot1->left,pRoot2);
    		if(!ret)
    			ret=HasSubtree(pRoot1->right,pRoot2);
    	}
    	return ret;
    }
};