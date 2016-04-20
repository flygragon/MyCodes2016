/// 初始所有灯泡全部关闭
/// [off,off,off,off,off,...,off]
/// 第i轮转换第i*j个灯泡状态
/// 最后第i个灯泡的状态取决于i的约数的个数COD
/// 如果COD为奇数则为on,否则为off
/// 只有平方数才有奇数个约数

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);    ///	n之前有奇数个约数的数为n的平方根
    }					   ///	1*1,2*2,3*3,...,k*k <=n,k ==sqrt(n)
};