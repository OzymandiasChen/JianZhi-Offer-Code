class Solution {
public:
	priority_queue<int, vector<int>, less<int> > p;///最大堆,下边
	priority_queue<int, vector<int>, greater<int> > q;///最小堆，上边
    void Insert(int num)
    {
        if(p.size()==0||num<=p.top()) p.push(num);
        else q.push(num);
        if(q.size()==p.size()+2) p.push(q.top()),q.pop();
        if(q.size()<p.size()) q.push(p.top()),p.pop();
    }
    double GetMedian()
    { 
    	return q.size()==p.size()?(q.top()+p.top())/2.0:q.top();
    }

};