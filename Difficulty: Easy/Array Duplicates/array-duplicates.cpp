class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n=arr.size();
        int k=n+1;
        for(int i=0;i<n;i++)
        {
            int curr=arr[i]%k;
            arr[curr-1]+=k;
        }
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            int freq=arr[i]/k;
            if(freq==2)
            res.push_back(i+1);
        }
        return res;
    }
};