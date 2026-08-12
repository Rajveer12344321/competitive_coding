class Solution {
  public:
    void rotate(vector<int> &arr) {
        int length=arr.size();
        int last=arr[length-1];
        for(int i=length-1;i>0;i--){
            arr[i]=arr[i-1];
        }arr[0]=last;
    }
};