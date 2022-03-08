class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> t;
        for(int i=0;i<arr.size();i++)
        {
            int bit=0;
            int temp=arr[i];
            while(temp>0)
            {
                bit+=temp%2;
                temp/=2;
            }
            t.push_back({bit,arr[i]});  //push the bits and the element in the array
        }
        sort(t.begin(),t.end());  //sort them bit wise 
        vector<int> res;
        for(auto i:t)
            res.push_back(i.second);  
        return res;
    }
};