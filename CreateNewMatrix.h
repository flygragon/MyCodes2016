#include<iostream>
#include<vector>
using namespace std;

class matrix {
public:
	vector<vector<int>> CreateMatrix() {
		vector<vector<int>> result;
		int line,row;
		cout <<"Please Input the Line and Row of Matrix:" <<endl;
		cin >>line >>row;
		if (line <=0 || row <=0)
		{
		cout <<"Size Input Error!"<<endl;
		return result;
		}	
		int m;
		for (int i=0;i <line;i ++) {
			result.resize(i+1);    /// ������ǰ�У�
			for (int j =0;j <row;j ++)
				{
					cin >>m;
					result[i].push_back(m); /// ������ǰ�еĵ�ǰ�У�
				}
		}
		return result;
	}
};