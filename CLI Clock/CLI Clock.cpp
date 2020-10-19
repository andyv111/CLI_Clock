// CLI Clock.cpp

#include <conio.h>
#include <windows.h>
#include <iostream>

#define Q_KEY 81
#define Q_KEYLOWERCASE 113

using namespace std;

char digit1[][] = {{"", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", ""}}; // each digit is an array of characters and spaces, 6 rows by 8 columns

//string user_input;
int keyPressed;

int main()
{
	cout << "testing... press 'q' to quit." << endl;


	while (true) {
		keyPressed = _getch();
		if (keyPressed == Q_KEY || keyPressed == Q_KEYLOWERCASE) {
			//uncomment the next line to see the pressed key value
			// cout << keyPressed; 
			Sleep(1000);
			return 0;
		}

		
	}
	return 0;
}
