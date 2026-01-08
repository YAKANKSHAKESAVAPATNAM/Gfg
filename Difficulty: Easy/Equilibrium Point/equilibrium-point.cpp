class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
         int total=0;
        for(auto x:arr){
            total+=x;
        }
        int lsum=0,rsum=0;
        for(int i=0;i<arr.size();i++){
            rsum=total-lsum-arr[i];
            if(lsum==rsum)return i;
            else{
                lsum+=arr[i];
            }
        }
        return -1;
    }
};