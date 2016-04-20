// ClockwisePrintMatrix.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"CreateNewMatrix.h"
#include"ClockwisePrintMatrix.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<vector<int>> p;
	matrix M;
	MatrixPrint MPrint;
	while (p.size() ==0) {
	p =M.CreateMatrix();
	}
	MPrint.Print(p);
	vector<int> temp;
	temp =MPrint.PushIntoVector(p);
	for (int i =0;i <temp.size();i ++)
		cout <<temp[i] <<" ";
	cout <<endl;
	/*for (int i =0;i <5;i ++) {
		p.resize(i+1);
		for (int j =0;j <4;j ++)
			p[i].push_back(i*j);
	}
	for (int i =0;i <5;i ++) {
		for (int j =0;j <4;j ++)
			cout <<p[i][j] <<" ";
			cout <<endl;
		}*/
	return 0;
}

