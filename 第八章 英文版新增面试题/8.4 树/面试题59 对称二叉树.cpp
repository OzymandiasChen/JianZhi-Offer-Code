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
    bool isSymmetrical(TreeNode* pRoot)
    {
        return isSymmetrical(pRoot,pRoot);
    }
    bool isSymmetrical(TreeNode* left,TreeNode* right)
    {
        if(left==NULL&&right==NULL)
            return true;
        if(!left||!right)
            return false;
        if(left->val!=right->val)
            return false;
        return isSymmetrical(left->left,right->right)&&isSymmetrical(left->right,right->left);
    } 
};