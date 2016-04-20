#include<vector>
using namespace std;
class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
       for (int i =0;i <array.size();i ++) {
           if (target <=array[i][array[i].size()-1] && target >=array[i][0])
           for (int j =0;j <array[i].size();j ++) {
           if (array[i][j] ==target)
           return true;
           }
               }
           return false;
    }
};