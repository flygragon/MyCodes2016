/// ��̨�����Ȿ������쳲��������еĵ�n+1��ֵ
/// ��n��̨�ױ�Ȼ�ɵ�n-1������n-2��̨������������
/// n��̨�׵�����������n-1��̨�׺�n-2��̨��������֮�͵õ�
//
//
class Solution {
public:
    int jumpFloor(int number) {
        if (number ==1) return 1;
        if (number ==2) return 2;
        int count =2,temp,temp1 =1,temp2 =2;
        while (count <number) {  /// Fibonacci�������number+1�����е�ֵ
            temp =temp2;
            temp2 +=temp1;
            temp1 =temp;
            count ++;
        }
        return temp2;
    }
};