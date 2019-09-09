/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) 
    {
    	int m,n;
    	m=pre.size();
    	n=vin.size();
    	if(m<=0||n<=0||m!=n)
    		return NULL;
    	else
    		return Build(&pre[0],0,m-1,&vin[0],0,n-1);
    }
    TreeNode* Build(int pre[],int s1,int e1,int vin[],int s2,int e2)
    {
        int i,loc;
    	TreeNode* root=new TreeNode(pre[s1]);
        if(s1==e1)
            if(s2==e2&&pre[s1]==vin[s2])////每一个节点都检查是不是一个！！
                return root;
            else
                return NULL;
        loc=-1;
        for(i=s2;i<=e2;i++)
            if(vin[i]==pre[s1])
            {
                loc=i;
                break;
            }
        if(loc==-1)
            return NULL;
        if(loc>s2)///左子树存在
            root->left=Build(pre,s1+1,s1+loc-s2,vin,s2,loc-1);
        if(loc<e2)
            root->right=Build(pre,s1+loc-s2+1,e1,vin,loc+1,e2);
        return root;
    }
};