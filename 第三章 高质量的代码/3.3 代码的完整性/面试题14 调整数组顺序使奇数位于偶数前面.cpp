class Solution {
public:
    void reOrderArray(vector<int> &array) //是引用好伐
    {
    	vector<int> ans;
    	int size=array.size();
    	int i;
        if(size==0)
            return;
    	for(i=0;i<size;i++)
    		if(array[i]%2==1)
    			ans.push_back(array[i]);
    	for(i=0;i<size;i++)
    		if(array[i]%2==0)
    			ans.push_back(array[i]);
            array.clear();
        for(i=0;i<size;i++)
        {
            array.push_back(ans[i]);

        }

    }
};