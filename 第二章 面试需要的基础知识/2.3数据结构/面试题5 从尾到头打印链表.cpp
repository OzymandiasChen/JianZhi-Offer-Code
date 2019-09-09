/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head)
	{
		std::stack<ListNode* > nodes;
        std::vector<int> ans;
		ListNode* p=head;
        ans.clear();
		if(head==NULL)
			return ans;
		while(p!=NULL)
		{
			nodes.push(p);
			p=p->next;
		}
		while(!nodes.empty())
		{
			p=nodes.top();
			nodes.pop();
			ans.push_back(p->val);
		}
        return ans;
    }
};