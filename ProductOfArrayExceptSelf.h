/// �������ÿһ��Ԫ��,���Ԫ�����������Ԫ�صĳ˻�Product[i]
/// ��ÿ��Ԫ��֮ǰ������Ԫ�صĳ˻�pre_Product[i]�͸�Ԫ��֮�������Ԫ�صĳ˻�after_Product[i]
/// Product[i] =pre_Product[i]*after_Product[i]

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int k =nums.size();
        vector<int> result(k,1);
        for (int i =1;i <k;i ++)				/// �����i��Ԫ��֮ǰ����Ԫ�صĳ˻�
        result[i] =result[i-1]*nums[i-1];
        for (int i =k-2,temp =1;i >=0;i --) {
            temp *=nums[i+1];					/// �����i��Ԫ��֮������Ԫ�صĳ˻�
            result[i] *=temp;					/// �����i��Ԫ����������Ԫ�صĳ˻�
        }
        return result;
    }
};