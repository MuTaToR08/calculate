#include "calculate.h"
#include <iostream>

using namespace std;

void main()
{
	Calculate cl;
	setlocale(NULL,"RUSSIAN");
	cout << "������:";

	string str = "135.123     +21,5/125+    (123-125*(124/23))+.25";
	string npl;

	cout<< str<<endl;

	npl = cl.getNPL(str);
	cout <<"���:"<< npl<<endl;
	cout << "���������:" << cl.Counting(npl);
	cin.get();

	cin.get();


}