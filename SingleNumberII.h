class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bit[32],result =0,len =nums.size();
        for (int i =0;i <32;bit[i] =0,i ++) {}	/// 32位数组初始化
        for (int i =0,j =0;j <len;i =0,j ++)	///	统计各位中1的个数总和
        while (nums[j] && i <32) {
            bit[i ++] +=(nums[j]&1);			///	如果该位为1,则该位1的个数+1
            nums[j] =nums[j] >>1;				///	每个数都右位移1位
        }
        for (int i =0,count =1;i <32;result +=(bit[i ++]%3)*count,count *=2){}	/// 各位%3即为Single Number在该位的值
        return result;
    }
};