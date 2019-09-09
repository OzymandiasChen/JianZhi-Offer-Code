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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) 
    {
    	stack<ListNode*> p1;
    	stack<ListNode*> p2;
    	ListNode *ans,*p,*q;
    	ans=NULL;
    	if(!pHead1||!pHead2)
    		return NULL;
    	p=pHead1;
    	q=pHead2;
    	while(p)
    	{
    		p1.push(p);
    		p=p->next;
    	}
    	while(q)
    	{
    		p2.push(q);
    		q=q->next;
    	}
    	while(!p1.empty()&&!p2.empty())
    	{
    		p=p1.top();
    		q=p2.top();
    		if(p==q)
    		{
    			ans=p;
    			p1.pop();
    			p2.pop();
    		}
    		else
    			break;
    	}
    	return ans; 
    }
};