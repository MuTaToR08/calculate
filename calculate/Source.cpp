#include "calculate.h"
#include <iostream>

using namespace std;

void main()
{
	Calculate cl;
	setlocale(NULL,"RUSSIAN");
	cout << "строка:";

	string str = "135.123     +21,5/125+    (123-125*(124/23))+.25";
	string npl;

	cout<< str<<endl;

	npl = cl.getNPL(str);
	cout <<"ОПЗ:"<< npl<<endl;
	cout << "Результат:" << cl.Counting(npl);
	cin.get();

	cin.get();


}