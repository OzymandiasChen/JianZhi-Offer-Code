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
    char* Serialize(TreeNode *root) 
    { 
        string str;
        int loc=0;
        cts(root,str);
        return (char*)str;
    }
    void cts(TreeNode *root,string &str)
    {
        if(root==NULL)
        {
            str+='#';
            return ;
        }
        str+=root->val;
        cts(root->left,str);
        cts(root->right,str);
    }
    TreeNode* Deserialize(char *str) 
    {
        TreeNode *root,*p;
        root=NULL;
        int loc=0;
        if(str[loc]=='\0')
            return NULL;
        p=new TreeNode(str[loc]);
        loc++;
        stc(str,loc,p->left);
        stc(str,loc,p->right);
        return p;
    }
    void stc(char *str,int &loc,TreeNode* p)
    {
        if(str[loc]=='\0')
            return ;
        if(str[loc]=='#')
        {
            loc++;
            p=NULL;
            return ;
        }
        p=new TreeNode(str[loc]);
        loc++;
        stc(str,loc,p->left);
        stc(str,loc,p->right);
    }
};