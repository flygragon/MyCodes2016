/// 求2以后的正整数的加数的乘积的最大值
///	2 =1+1,3 =1+2,4 =2+2,5 =3+2,6 =3+3,7 =3+2+2
///	对每一个数，将大于4的加数拆分成尽可能多的3相加
///	剩下的数为2则乘2，为3则乘3，为4则乘4=2*2

class Solution {
public:
    int integerBreak(int n) {
        if (n ==2) return 1;
        if (n ==3) return 2;
        int result =1,m =n/3,mod =n%3;	///	初始化result为1,n对3取商取余
        for (int i =1;i <m;i ++)
        result *=3;
        if (mod ==0) result *=3;		///	最后剩下的数为3，则乘以3
        if (mod ==1) result *=4;		///	最后剩下的数为4，则乘以4
        if (mod ==2) result *=6;		///	最后剩下的数为5，则乘以6=2*3
        return result;
    }
};