class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long n=arr.size()+1;
        long long expectedsum=(n*(n+1))/2;
        long long actualsum=0;
        for(int num:arr){
            actualsum+=num;
        }return expectedsum-actualsum;
    }
};