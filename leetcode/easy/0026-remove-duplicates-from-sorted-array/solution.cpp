class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        int j=1;
        int k=0;;
        int length=nums.size();
        for(i=1;i<length;i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
        }return j;
    }
};