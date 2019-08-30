#include "windows.h"
#include "tchar.h"
#include <iostream>

bool g_1_1Mode;
bool g_1_2Mode;
bool g_2Mode;

using namespace std;

int main() 
{
	g_1_1Mode = GetPrivateProfileInt(_T("1Setting"),_T("1_1Mode"),1,_T("data\\profile.ini"));
	g_1_2Mode = GetPrivateProfileInt(_T("1Setting"), _T("1_2Mode"), 1, _T("data\\profile.ini"));
	g_2Mode = GetPrivateProfileInt(_T("2Setting"), _T("2Mode"), 1, _T("data\\profile.ini"));

	cout << "=============================ini file test begin=============================\n" << endl;
	if (g_1_1Mode) {
		cout <<"\t\t\t\t this is '1_1Mode'!" << endl;
	}
	if (g_1_2Mode) {
		cout << "\t\t\t\t this is '1_2Mode'!" << endl;
	}
	if (g_2Mode) {
		cout << "\t\t\t\t this is '2Mode'!" << endl;
	}
	cout << "\n=============================ini file test end===============================\n" << endl;

	system("PAUSE");
	return 0;

}

