class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int t=0;
        for(int i= 0; i< n; i++){
            if(nums[i] == 0){
                for(int j = i; j<n-1; j++){
                    t = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = t;
                }
            }
        }
    }
};
