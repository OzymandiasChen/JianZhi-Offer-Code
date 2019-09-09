/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
    	TreeLinkNode *ret,*p;
    	ret=NULL;
    	if(pNode->right)
    	{
    		p=pNode->right;
    		while(p->left)
    			p=p->left;
    		ret=p;
    	}
    	else
    	{
    		p=pNode;
    		while(p&&p->next&&p!=p->next->left)
    			p=p->next;
            if(p->next)
    			ret=p->next;
    	}
    	return ret;
    }
};