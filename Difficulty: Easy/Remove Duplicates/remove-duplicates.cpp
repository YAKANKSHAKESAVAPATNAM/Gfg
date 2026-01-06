// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
          int n=s.size();
        string result="";
        map<char,int> ans;
        for(int i=0;i<n;i++){
            if(ans[s[i]]==0){
                ans[s[i]]++;
                result+=s[i];
            }
        }
        return result;
    }
};