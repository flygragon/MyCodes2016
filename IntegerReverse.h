///整数反转
///检测整数溢出

class Solution {
public:
    int reverse(int x) {
        int result =0;
        while (x) {
            if ((result*10+x%10-x%10)/10 !=result)  /// 检测是否溢出
            return 0;
            result =result *10 +x%10;
            x /=10;
        }
        return result;
    }
};