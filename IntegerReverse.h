///������ת
///����������

class Solution {
public:
    int reverse(int x) {
        int result =0;
        while (x) {
            if ((result*10+x%10-x%10)/10 !=result)  /// ����Ƿ����
            return 0;
            result =result *10 +x%10;
            x /=10;
        }
        return result;
    }
};