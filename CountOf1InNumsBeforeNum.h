/// ÿһ������������1�ĸ������ڱ�����һλ�Ķ���������1�ĸ�����1
/

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result(num+1);
        result[0] =0;
        for (int i =1,temp =i;i <=num;temp =i)
        for (int j =0;j <temp && i <=num;j ++)    ///i֮��Ķ�������1�ĸ�������֮ǰ�Ķ�������1�ĸ�����1
        result[i++] =result[j] +1;
        return result;
    }
};