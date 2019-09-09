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
    vector<int> PrintFromTopToBottom(TreeNode* root) 
    {
    	vector<int> ret;
    	queue<TreeNode*> Q;
    	TreeNode *p;
    	if(root==NULL)
    		return ret;
    	Q.push(root);
    	while(!Q.empty())
    	{
    		p=Q.front();
    		ret.push_back(p->val);
    		Q.pop();
    		if(p->left)
    			Q.push(p->left);
    		if(p->right)
    			Q.push(p->right);
    	}
    	return ret;
    }
};