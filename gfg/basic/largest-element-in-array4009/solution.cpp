class Solution {
  public:
    int largest(vector<int> &arr) {
        int max=arr[0];
        int min;
        int length=arr.size();
        for(int i=1;i<length;i++){
            if(arr[i]>max){
                min=max;
                max=arr[i];
            }
        }return max;
    }
};
