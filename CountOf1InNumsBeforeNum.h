/// 每一个二进制数的1的个数等于比他低一位的二进制数的1的个数加1
/

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result(num+1);
        result[0] =0;
        for (int i =1,temp =i;i <=num;temp =i)
        for (int j =0;j <temp && i <=num;j ++)    ///i之后的二进制数1的个数等于之前的二进制数1的个数加1
        result[i++] =result[j] +1;
        return result;
    }
};