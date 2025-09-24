#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>

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

// Function prototypes (NO default values now)
int add(int p1, int p2, int p3);
void sub(int p1, int p2, int p3);
int mul(int p1, int p2);
void quo(int p1, int p2);

int main()
 {
    add(0, 0, 0);
    sub(0, 0, 0);
    mul(0, 0);
    quo(0, 0);

    // date/time based on current system
    time_t now=time(0);
    char*dt=ctime(&now);

    ofstream receipt;
    receipt.open("wompwompwp");

    getch();
    return 0;
}

int add(int p1, int p2, int p3) 
{
    int fn, sn, tn, S;

    cout<<"\nEnter First Number: ";cin>>fn;
    cout<<"Enter Second Number: ";cin>>sn;
    cout<<"Enter Third Number: ";cin>>tn;
    S = fn + sn + tn;
    cout<<"\nThe Sum is = "<<S;

    return S;
}

void sub(int p1, int p2, int p3) 
{
    int fn, sn, tn, D;

    cout<<"\n\nEnter First Number: ";cin>>fn;
    cout<<"Enter Second Number: ";cin>>sn;
    cout<<"Enter Third Number: ";cin>>tn;
    D=fn-sn-tn;
    cout<<"\nThe Difference is = "<<D;
}

int mul(int p1, int p2) 
{
    int fn, sn, P;

    cout<<"\n\nEnter First Number: ";cin>>fn;
    cout<<"Enter Second Number: ";cin>>sn;
    P=fn*sn;
    cout<<"\nThe Product is = "<<P;

    return P;
}

void quo(int p1, int p2) 
{
    int fn, sn, Q, R;

    cout << "\n\nEnter First Number: "; cin >> fn;
    cout << "Enter Second Number: ";  cin >> sn;

    if(sn!=0) 
	{
        Q=fn/sn;   // integer division
        R=fn%sn;   // remainder
        cout<<"\nThe Quotient is = "<<Q;
        cout<<"\nThe Remainder is = "<<R;
    } else 
	{
        cout<<"\nSyntax Error!";
    }
}



