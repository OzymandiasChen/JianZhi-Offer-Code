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
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) 
    {
    	vector<vector<int> > A;
    	vector<int> tmp;
    	if(root)
    		Find(root,expectNumber,A,tmp,0);
    	return A;
    }
    void Find(TreeNode* node,int exp,vector<vector<int> > &A,vector<int> &tmp,int num)
    {
    	num+=node->val;
    	tmp.push_back(node->val);
    	if(!node->left&&!node->right)////到根了的话
    	{
    		if(num==exp)
    			A.push_back(tmp);
            tmp.pop_back();
    		return ;
    	}
    	if(node->left)
    		Find(node->left,exp,A,tmp,num);
    	if(node->right)
    		Find(node->right,exp,A,tmp,num);
    	tmp.pop_back();
    }
};