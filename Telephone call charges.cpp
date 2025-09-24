#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y) {
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}
void clrscr() {
    system("cls");
}
int main() {
    int cda, tc, duration;
    float rate = 0, total = 0;
	gotoxy(35,0);cout<<"Good Day!";
	gotoxy(7,1);cout<<"Call Duration";
	gotoxy(7,2);cout<<"1 minutes for 2.00 pesos";
	gotoxy(7,3);cout<<"2 minutes for 4.00 pesos";
	gotoxy(7,4);cout<<"3 minutes for 6.00 pesos";
	gotoxy(7,5);cout<<"4 minutes for 8.00 pesos";
	gotoxy(7,6);cout<<"5 minutes for 10.00 pesos";
	gotoxy(3,8);cout<<"=======================================================";
	gotoxy(42,10);cout<<"Time Code";
	gotoxy(7,11);cout<<"CDA\tDescription\tOff-Peak Rate   Peak Rate";
	gotoxy(7,12);cout<<"1\tSame Network\tP 8.00\t\tP 3.00";
	gotoxy(7,13);cout<<"2\tOther Network\tP 8.00\t\tP 4.00";
	gotoxy(7,14);cout<<"3\tLandline\tP 8.00\t\tP 4.00";
	gotoxy(7,15);cout<<"4\tInternational\tP 10.00\t\tP 6.00";
	gotoxy(7,16);cout<<"5\tOuter Space\tP 15.00\t\tP 10.00";
	gotoxy(3,18);cout<<"=======================================================";
    gotoxy(5,20);cout<<"Enter Call Destination Code (1-5): ";cin>>cda;
    gotoxy(5,21);cout<<"Enter Time Code (1 = Off-Peak, 2 = Peak): ";cin>>tc;
    gotoxy(5,22);cout<<"Enter Duration (in minutes): ";cin>>duration;
	gotoxy(3,24);cout<<"======================================================";
    if(cda==1) {
        rate=(tc==1)?8:3;
    } else if(cda==2) {
        rate=(tc==1)?8:4;
    } else if(cda==3) {
        rate=(tc==1)?8:4;
    } else if(cda==4) {
        rate=(tc==1)?10:6;
    } else if(cda==5) {
        rate=(tc==1)?15:10;
    } else {
    gotoxy(5,26);cout << "Invalid Call Destination Code!" << endl;
        getch();
        return 0;
    }
    total=rate*duration;
    gotoxy(5,26);cout<<"Total Call Charge: "<<total<<" pesos"<<endl;
    getch();
    return 0;
}

