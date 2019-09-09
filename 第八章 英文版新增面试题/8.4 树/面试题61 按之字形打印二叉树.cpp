/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
不能使用reverse，海量数据架不住
*/
class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) 
    {
    	int now=0,next=1,tmp;///0为奇数，
    	TreeNode* node;
    	vector<int> ans;
    	vector<vector<int> >ret;
    	stack<TreeNode*> s[2];
    	if(pRoot==NULL)
    		return ret;
    	s[now].push(pRoot);
    	while(!s[1].empty()||!s[0].empty())
    	{
    		node=s[now].top();
    		s[now].pop();
    		ans.push_back(node->val);
    		if(now==0)///下一层是偶数，从左往右压，才能从右往左输出
    		{
    			if(node->left)
    				s[next].push(node->left);
    			if(node->right)
    				s[next].push(node->right);
    		}
    		else
    		{
    			if(node->right)
    				s[next].push(node->right);
    			if(node->left)
    				s[next].push(node->left);
    		}
    		if(s[now].empty())
    		{
    			ret.push_back(ans);
    			ans.clear();
    			tmp=now;
    			now=next;
    			next=tmp;
    		}
    	}
    	return ret;
    }  
};