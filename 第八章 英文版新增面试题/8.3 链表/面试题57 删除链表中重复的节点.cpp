/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
    	int val;
    	ListNode *p,*pNext,*pre,*q;
    	pre=NULL;
    	p=pHead;
    	while(p)
    	{
    		pNext=p->next;
    		if(pNext&&p->val==pNext->val)
    		{
    			val=p->val;
    			while(p&&p->val==val)
    			{
    				q=p;
    				p=p->next;
    				delete q;
    			}
    			if(pre==NULL)
    				pHead=p;
    			else
    				pre->next=p;
    		}
    		else
    		{
    			pre=p;
    			p=p->next;
    		}
    	}
    	return pHead;
    }
};