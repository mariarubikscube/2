#include <iostream>
#include <fstream>

#include <windows.h> //fuer stealth
#include <winuser.h> //fuer stealth
#include <WinBase.h> //fuer stealth
using namespace std;

void Stealth();

int main()
{
	
	Sleep(500);
	ifstream myfile ("RubiksSolve\\rubic_status.txt");
	Stealth(); 
	
	if( ! myfile.is_open() )
	{
		system("start /B Warte_Auf_Eingabe.exe");
	}
	else
	{
		system("start Loesung.exe");
	};


	myfile.close();
}


void Stealth()
{
HWND Stealth;
AllocConsole();
Stealth = FindWindowA("ConsoleWindowClass", NULL);
ShowWindow(Stealth,0);
}
