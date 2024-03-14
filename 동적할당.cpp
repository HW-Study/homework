//
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//
//
//using namespace std;
//
//char* makeStr(int n);
//char* reAssign(char*ptr,int n);
//
//int main()
//{
//	int N = 4;
//	char* name = makeStr(N);
//	char tmp[20];
//
//	cin >> tmp;
//
//	if (strlen(tmp) > N)
//		name = reAssign(name, strlen(tmp));
//
//	
//	strcpy(name, tmp);
//	cout << name;
//
//	delete[] name;
//
//	return 0;
//}
//
//char* makeStr(int n)
//{
//	char* str = new char[n];
//	memset(str, 0, n);
//
//	return str;
//}
//
//char* reAssign(char*ptr,int n)
//{
//	char* str = nullptr;
//	delete[] ptr;
//
//	ptr = nullptr;
//
//	if (ptr == nullptr)
//	{
//		str = new char[n];
//		memset(str, 0, n);
//	}
//
//	return str;
//}
