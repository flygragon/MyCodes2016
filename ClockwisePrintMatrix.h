#include<iostream>
#include<vector>
using namespace std;

class MatrixPrint {
public:
	void Print(vector<vector<int>> nums) {
		int line_low =0,line_high =nums.size()-1,row_low =0,row_high =nums[0].size()-1;
		while (line_low <line_high && row_low <row_high) {
		for (int i =line_low,j =row_low;j <=row_high;j ++)
			cout <<nums[i][j]<<' ';
		cout <<endl;
		line_low ++;
		for (int i =line_low,j =row_high;i <=line_high;i ++)
			cout <<nums[i][j] <<' ';
		cout <<endl;
		row_high --;
		for (int i =line_high,j =row_high;j >=row_low;j --)
			cout <<nums[i][j] <<' ';
		cout <<endl;
		line_high --;
		for (int i =line_high,j =row_low;i >=line_low;i --)
			cout <<nums[i][j]<<' ';
		cout <<endl;
		row_low ++;
		}
		 if (line_low ==line_high) {
            for (int j =row_low;j <=row_high;j ++)
            cout <<nums[line_low][j]<<' ';
			cout <<endl;
            return ;
        }            
            
        if (row_low ==row_high)
            for (int i =line_low;i <=line_high;i ++)
            cout <<nums[i][row_low]<<' ';
		cout <<endl;
	}
	vector<int> PushIntoVector(vector<vector<int>> nums) {
		vector<int> result;
		int line_low =0,line_high =nums.size()-1,row_low =0,row_high =nums[0].size()-1;
		while (line_low <line_high && row_low <row_high) {
		for (int i =line_low,j =row_low;j <=row_high;j ++)
			result.push_back(nums[i][j]);
		line_low ++;
		for (int i =line_low,j =row_high;i <=line_high;i ++)
			result.push_back(nums[i][j]);
		row_high --;
		for (int i =line_high,j =row_high;j >=row_low;j --)
			result.push_back(nums[i][j]);
		line_high --;
		for (int i =line_high,j =row_low;i >=line_low;i --)
			result.push_back(nums[i][j]);
		row_low ++;
		}
		if (line_low ==line_high) {
            for (int j =row_low;j <=row_high;j ++)
            result.push_back(nums[line_low][j]);
            return result;
        }            
            
        if (row_low ==row_high)
            for (int i =line_low;i <=line_high;i ++)
            result.push_back(nums[i][row_low]);
         return result;
	}
	};