///	计算n个节点的二叉树有多少种不同的构型
///	对根节点的左右子树节点个数进行分组
///	n-1 =0+n-1 =1+n-2 =2+n-3 =...=n-2+1 =n-1+0

class Solution {
public:
    int numTrees(int n) {
        if (n ==0) return 0;
        int result[n+1];
        result[0] =1,result[1] =1;
        for (int i =2;i <=n;i ++) {
            result[i] =0;
        for (int j =0;j <=i-1;j ++)
        result[i] +=result[j]*result[i-1-j];
    }
    return result[n];
    }
};