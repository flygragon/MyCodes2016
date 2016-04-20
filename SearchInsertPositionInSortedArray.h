class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i =0,len =nums.size();
        while (i <len && nums[i] <target) i++;		/// 移动到值>=target的下标处
        return i;									/// 若相等则为查找到的下标值，若大于则为插入后的下标值
    }
};