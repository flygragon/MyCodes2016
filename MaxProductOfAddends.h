/// ��2�Ժ���������ļ����ĳ˻������ֵ
///	2 =1+1,3 =1+2,4 =2+2,5 =3+2,6 =3+3,7 =3+2+2
///	��ÿһ������������4�ļ�����ֳɾ����ܶ��3���
///	ʣ�µ���Ϊ2���2��Ϊ3���3��Ϊ4���4=2*2

class Solution {
public:
    int integerBreak(int n) {
        if (n ==2) return 1;
        if (n ==3) return 2;
        int result =1,m =n/3,mod =n%3;	///	��ʼ��resultΪ1,n��3ȡ��ȡ��
        for (int i =1;i <m;i ++)
        result *=3;
        if (mod ==0) result *=3;		///	���ʣ�µ���Ϊ3�������3
        if (mod ==1) result *=4;		///	���ʣ�µ���Ϊ4�������4
        if (mod ==2) result *=6;		///	���ʣ�µ���Ϊ5�������6=2*3
        return result;
    }
};