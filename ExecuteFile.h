#include<iostream>
#include<vector>
#include"FindClass.h"
using namespace std;
class Execute{
public:
int m,n;
vector<vector<int>> nums;
void Input(){
	cout <<"Please Input the Size of the Arrsy:"<<endl;
	cin >>m>>n;
}
void ArrayInput() {
	nums.resize(m);
	for (int i =0;i <m;i ++)
	{
	nums[i].resize(n);
	for (int j =0;j <n;j ++)
		cin >>nums[i][j];
	}
}
void FindValue() {
	Solution f;
	int k;
	cin >>k;
	if (f.Find(nums,k))
		cout <<"Value Found"<<endl;
	else cout <<"Value Not Found"<<endl;
}
};