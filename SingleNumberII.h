class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bit[32],result =0,len =nums.size();
        for (int i =0;i <32;bit[i] =0,i ++) {}	/// 32λ�����ʼ��
        for (int i =0,j =0;j <len;i =0,j ++)	///	ͳ�Ƹ�λ��1�ĸ����ܺ�
        while (nums[j] && i <32) {
            bit[i ++] +=(nums[j]&1);			///	�����λΪ1,���λ1�ĸ���+1
            nums[j] =nums[j] >>1;				///	ÿ��������λ��1λ
        }
        for (int i =0,count =1;i <32;result +=(bit[i ++]%3)*count,count *=2){}	/// ��λ%3��ΪSingle Number�ڸ�λ��ֵ
        return result;
    }
};