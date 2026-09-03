class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr(2);
        for (int i=1;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    if(nums[i]+nums[j]==target){
                        if(i<j){
                            arr[0]=i;
                            arr[1]=j;
                        }
                        else{
                            arr[0]=j;
                            arr[1]=i;
                        }
                    return arr;
                    }
                }
            }
        }
        return{};
    }
};
