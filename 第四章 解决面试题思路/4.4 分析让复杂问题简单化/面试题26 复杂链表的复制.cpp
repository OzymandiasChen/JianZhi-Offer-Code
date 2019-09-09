/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        RandomListNode *head,*p,*q,*pNew,*k,*pre;
        if(!pHead)
        	return NULL;
        p=pHead;
        while(p)
        {
        	pNew=new RandomListNode(p->label);
        	pNew->next=p->next;
        	p->next=pNew;
        	p=p->next->next;
        }
        p=pHead;
        while(p)
        {
        	q=p->random;
        	if(q)
        		p->next->random=q->next;
        	p=p->next->next;
        }
        p=pHead;
        q=pHead->next;
        head=pHead->next;
        k=pHead->next->next;
        while(k)
        {
        	pre=k;
        	k=k->next;
        	p->next=pre;
        	p=pre;
        	pre=k;
        	k=k->next;
        	q->next=pre;
        	q=pre;
        }
        p->next=NULL;
        return head;
    }
};