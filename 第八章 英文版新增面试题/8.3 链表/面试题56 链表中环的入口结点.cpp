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
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
    	if(!pHead||!pHead->next)
    		return NULL;
    	ListNode *p1,*p2;
    	int cnt=1;
    	int i;
    	p1=pHead;
    	p2=pHead;
    	p2=p2->next;
    	while(p1&&p2)
    	{
    		if(p1==p2)
    			break;
    		p1=p1->next;
    		p2=p2->next;
    		if(p2->next)
    			p2=p2->next;
    	}
    	p2=p1->next;
    	while(p2!=p1)
    	{
    		p2=p2->next;
    		cnt++;
    	}
    	p1=pHead;
    	p2=pHead;
    	for(i=0;i<cnt;i++)
    		p2=p2->next;
    	while(p1!=p2)
    	{
    		p1=p1->next;
    		p2=p2->next;
    	}
    	return p1;
    }
};