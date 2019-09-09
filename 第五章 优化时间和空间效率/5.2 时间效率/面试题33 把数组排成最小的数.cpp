class Solution {
public:
    static bool cmp(int a,int b)
    {
        string A="",B="";
        A=A+to_string(a)+to_string(b);
        B=B+to_string(b)+to_string(a);
        return A<B;
    }
    string PrintMinNumber(vector<int> numbers) 
    {
        int size=numbers.size();
        string ans="";
        sort(numbers.begin(),numbers.end(),cmp);
        for(int i=0;i<size;i++)
            ans+=to_string(numbers[i]);
        return ans;
    }
};