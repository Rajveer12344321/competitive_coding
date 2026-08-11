class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest=arr[0];
        int secondlargest=-1;
        int length=arr.size();
        for(int i=1;i<length;i++){
            if(arr[i]>largest){
                secondlargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>secondlargest)
            {
                secondlargest=arr[i];
            }
        }return secondlargest;
    }
};