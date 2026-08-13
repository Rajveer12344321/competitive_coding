class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0;
        int w=0;
        int b=0;
        for(int n:nums){
            if(n==0) r++;
            else if(n==1) w++;
            else if(n==2) b++;
        }
        int i=0;
        while(r--) nums[i++]=0;
        while(w--) nums[i++]=1;
        while(b--) nums[i++]=2;
    }
};