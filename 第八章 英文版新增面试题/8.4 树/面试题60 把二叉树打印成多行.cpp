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
        vector<vector<int> > Print(TreeNode* pRoot) 
        {
        	vector<int> ans;
        	vector<vector<int> > ret;
        	std::queue<TreeNode*> q;
        	TreeNode *lastnode,*node;
        	lastnode=pRoot;
        	if(pRoot==NULL)
        		return ret;
        	q.push(pRoot);
        	while(!q.empty())
        	{
        		node=q.front();
        		q.pop();
        		ans.push_back(node->val);//打印
        		if(node->left)
        			q.push(node->left);
        		if(node->right)
        			q.push(node->right);//入点
        		if(node==lastnode)//到最后一个更新处理
        		{
        			lastnode=q.back();
        			ret.push_back(ans);
        			ans.clear();
        		}
        	}
        	return ret;        
        }
};