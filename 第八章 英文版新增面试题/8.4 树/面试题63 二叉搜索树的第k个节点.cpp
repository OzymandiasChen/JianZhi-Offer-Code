/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
	int cnt=0;
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
    	TreeNode *ret;
    	if(pRoot)
    	{
    		ret=KthNode(pRoot->left,k);
            if(ret) return ret;
    		if(++cnt==k) return pRoot;
    		ret=KthNode(pRoot->right,k);
            if(ret) return ret;
    	}
    	return NULL;   
    }
};