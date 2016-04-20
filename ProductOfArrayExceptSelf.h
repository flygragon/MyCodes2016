/// 对数组的每一个元素,求该元素以外的其他元素的乘积Product[i]
/// 求每个元素之前的所有元素的乘积pre_Product[i]和该元素之后的所有元素的乘积after_Product[i]
/// Product[i] =pre_Product[i]*after_Product[i]

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int k =nums.size();
        vector<int> result(k,1);
        for (int i =1;i <k;i ++)				/// 计算第i个元素之前多有元素的乘积
        result[i] =result[i-1]*nums[i-1];
        for (int i =k-2,temp =1;i >=0;i --) {
            temp *=nums[i+1];					/// 计算第i个元素之后所有元素的乘积
            result[i] *=temp;					/// 计算第i个元素以外所有元素的乘积
        }
        return result;
    }
};