class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i =0,len =nums.size();
        while (i <len && nums[i] <target) i++;		/// �ƶ���ֵ>=target���±괦
        return i;									/// �������Ϊ���ҵ����±�ֵ����������Ϊ�������±�ֵ
    }
};