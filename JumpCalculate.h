/// 跳台阶问题本质是求斐波拉契数列的第n+1项值
/// 第n级台阶必然由第n-1级或者n-2级台阶往上跳到达
/// n级台阶的跳法数可由n-1级台阶和n-2级台阶跳法数之和得到
//
//
class Solution {
public:
    int jumpFloor(int number) {
        if (number ==1) return 1;
        if (number ==2) return 2;
        int count =2,temp,temp1 =1,temp2 =2;
        while (count <number) {  /// Fibonacci数列求第number+1项数列的值
            temp =temp2;
            temp2 +=temp1;
            temp1 =temp;
            count ++;
        }
        return temp2;
    }
};