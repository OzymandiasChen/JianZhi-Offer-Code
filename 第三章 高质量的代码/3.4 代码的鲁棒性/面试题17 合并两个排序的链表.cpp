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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
    	ListNode *pMergeHead;
    	if(pHead1==NULL)
    		return pHead2;
    	if(pHead2==NULL)
    		return pHead1;
    	pMergeHead=NULL;
    	if(pHead1->val<pHead2->val)
    	{
    		pMergeHead=pHead1;
    		pHead1->next=Merge(pHead1->next,pHead2);
    	}
    	else
    	{
    		pMergeHead=pHead2;
    		pHead2->next=Merge(pHead2->next,pHead1);
    	}
        return pMergeHead;
    }
};