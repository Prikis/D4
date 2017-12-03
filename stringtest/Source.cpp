#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h> // <----del spalvu
//#include "conmanip.h" <-------- please do
void Looper(int& a);
using namespace std;
int main()
{
	HANDLE  hConsole; // < ----- del spalvu
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // <--- del spalvu
	 SetConsoleTextAttribute(hConsole, 10);
	// https://stackoverflow.com/questions/4053837/colorizing-text-in-the-console-with-c
	//conout.settitle("cppconlib"); <------ this too
	int a=0;
	char control1[] = "AU7HORIZ4T10N: ";
	char Content[] = "C0N73N7: ";
	char answer1 [80];
	char ConSelect [80];
	cout << control1;
	cin >> answer1;
	if (strcmp(answer1,"D48")==0)
	{	
		cout <<"*C0NF1RM3D*" << endl;
		a=1;
	}
	if (strcmp(answer1,"D48")!=0)
	{
		cout << "*ACC355 D3N13D*" << endl;
	}
	if(a==0)
	{
		cout << "*SHU1771NG D0WN*" << endl;
	}
	if(a==1)
	{
		cout <<"*ACC355 GR4N73D*"<< endl;
	}
	while(a==1)
	{
			cout << Content<<endl;
			cout << "LOL      - LOL" <<endl;
			cout << "Steam    - STM" <<endl;
			cout << "Smite    - SMT" <<endl;
			cout << "Workmail - GML" <<endl;
			cout << "GyMail   - GYM" <<endl;
			cout << "Mdien    - MDN" <<endl;
			cout << "Redd     - RDT" <<endl;
			cout << "Discord  - DSC" <<endl;
			cout <<"S3L3C710N: ";
			cin >> ConSelect;
		if (strcmp(ConSelect,"SMT")==0)
		{
			cout <<"UsrN - "<< "standard0000" <<endl;
			cout <<"PsW  - "<< "standard" <<endl;

		}
		if (strcmp(ConSelect,"GYM")==0)
		{
			cout <<"UsrN - "<< "standardgmail" <<endl;
			cout <<"PsW  - "<< "standard" <<endl;

		}
		if (strcmp(ConSelect,"GML")==0)
		{
			cout <<"UsrN - "<< "primegmail" <<endl;
			cout <<"PsW  - "<< "basketballamerican" <<endl;

		}
		if (strcmp(ConSelect,"LOL")==0)
		{
			cout <<"UsrN - "<< "Mike wazowski + Shrek shrekowski" <<endl;
			cout <<"PsW  - "<< "standard0000" <<endl;

		}
		if (strcmp(ConSelect,"MDN")==0)
		{
			cout <<"UsrN - "<< "No clue" <<endl;
			cout <<"PsW  - "<< "No clue" <<endl;

		}
		if (strcmp(ConSelect,"DSC")==0)
		{
			cout <<"UsrN - "<< "primegmail" <<endl;
			cout <<"PsW  - "<< "standard0000" <<endl;

		}
		Looper(a);
	}
}



void Looper(int& a)
{
	char LoopQ[] = "C0N71NU3 : ";
	char Loop[80];
	cout << LoopQ;
	cin >> Loop;
	if (strcmp(Loop,"Yes")==0 || strcmp(Loop,"yes")==0 || strcmp(Loop,"ye")==0 || strcmp(Loop,"sure")==0 || strcmp(Loop,"YES")==0)
	{
		a=1;
	}
	else a=0;
	system("cls");
}