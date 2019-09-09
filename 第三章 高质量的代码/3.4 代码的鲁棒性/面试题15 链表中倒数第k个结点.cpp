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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
    {
    	if(pListHead==NULL||k==0)
    		return NULL;
    	ListNode *p,*q;
        p=pListHead;
        q=pListHead;
    	int i,j;
    	for(i=1;i<k;i++)
    	{
    		p=p->next;
    		if(!p)
    			return NULL;
    	}
    	while(p->next)
    	{
    		p=p->next;
    		q=q->next;
    	}
        return q;
    }
};