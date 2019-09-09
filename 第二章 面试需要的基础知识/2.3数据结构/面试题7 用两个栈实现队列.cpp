class Solution
{
public:
    void push(int node) 
    {
     	stack1.push(node);   
    }

    int pop() 
    {
    	int a;
        if(stack2.size()<=0)
        	while(!stack1.empty())
        	{
        		a=stack1.top();
        		stack1.pop();
        		stack2.push(a);
        	}
        a=stack2.top();
        stack2.pop();
        return a;

    }

private:
    stack<int> stack1;
    stack<int> stack2;
};