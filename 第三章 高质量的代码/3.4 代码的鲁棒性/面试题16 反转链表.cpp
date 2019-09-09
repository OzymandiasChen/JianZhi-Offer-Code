/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) 
    {
    	ListNode *p,*pre,*pnext,*head;
        p=pHead;
        pre=NULL;
        head=NULL;
    	while(p)
    	{
    		pnext=p->next;
    		if(pnext==NULL)
    			head=p;
    		p->next=pre;
    		pre=p;
    		p=pnext;
    	}
    	return head;
    }
};