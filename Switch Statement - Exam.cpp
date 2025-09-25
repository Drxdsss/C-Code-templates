#include<iostream>
#include<conio.h>
#include<windows.h>
#include<process.h>
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
    char op1, op2;
    int score = 0;
    float percentage = 0;  
    // Operations
    gotoxy(5, 2); cout<<"Online Exam";
    gotoxy(10, 3); cout<<"1. Programming";
    gotoxy(10, 4); cout<<"2. Calculus";
    gotoxy(0, 6); cout<<"=======================================================";
    gotoxy(5, 8); cout<<"Choose a Topic: "; cin>>op1;
    //loop, if you put neither the two options, it will ask the same question repeatedly
    while (op1 != '1' && op1 != '2') {
        gotoxy(5, 10); cout<<"Out Of Range!";
        gotoxy(5, 11); cout<<"Please choose either 1 or 2: "; cin>>op1;
    }
    switch (op1) {
        case '1':  // Programming Topic
    		clrscr();
            gotoxy(10, 2); cout<<"Programming Quiz";
            gotoxy(0, 4); cout<<"=======================================================";
            // Question 1
            gotoxy(5, 6); cout<<"1. What is a correct syntax to output 'Hello World' in C++?";
            gotoxy(10, 7); cout<<"a. Console.WriteLine 'Hello World'";
            gotoxy(10, 8); cout<<"b. cout<<''Hello World'';";
            gotoxy(10, 9); cout<<"c. Cout<<Hello World:";
            gotoxy(10, 10); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                    cout<<"Wrong Answer!"; 
					break;
                case 'b': case 'B':
                    cout<<"Correct Answer!";
                    score++; 
					break;
                case 'c': case 'C':
                    cout<<"Wrong Answer!"; 
					break;
                default:
                    cout<<"Invalid choice!";
            }
            // Question 2
            gotoxy(5, 12); cout<<"2. How do you insert COMMENTS in C++ code?";
            gotoxy(10, 13); cout<<"a. //";
            gotoxy(10, 14); cout<<"b. #";
            gotoxy(10, 15); cout<<"c. /*";
            gotoxy(10, 16); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                    cout<<"Correct Answer!";
                    score++; 
					break;
                case 'b': case 'B':
                    cout<<"Wrong Answer!"; 
					break;
                case 'c': case 'C':
                    cout<<"Wrong Answer!"; 
					break;
                default:
                    cout<<"Invalid choice!";
            }
            // Question 3
            gotoxy(5, 18); cout<<"3. Which header file lets us work with input and output objects?";
            gotoxy(10, 19); cout<<"a. #include<iosteam>";
            gotoxy(10, 20); cout<<"b. #include<iostream>";
            gotoxy(10, 21); cout<<"c. #include<iotream>";
            gotoxy(10, 22); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                	cout<<"Wrong Answer!"; 
					break;
                case 'b': case 'B':
                    cout<<"Correct Answer!";
                    score++; 
					break;
                case 'c': case 'C':
					cout<<"Wrong Answer!";  
					break;
                default:
                    cout<<"Invalid choice!";
            }
            // Question 4
            gotoxy(5, 24); cout<<"4. Which character can be used to insert a new line in your output?";
            gotoxy(10, 25); cout<<"a. backslash b";
            gotoxy(10, 26); cout<<"b. backslash t";
            gotoxy(10, 27); cout<<"c. backslash n";
            gotoxy(10, 28); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                    cout<<"Wrong Answer!"; 
					break;
                case 'b': case 'B':
                	cout<<"Wrong Answer!"; 
					break;
                case 'c': case 'C':
					cout<<"Correct Answer!";
					score++;   
					break;
                default:
                    cout<<"Invalid choice!";
            }
            // Question 5
            gotoxy(5, 31); cout<<"5. The const keyword makes a variable unchangeable and read-only.";
            gotoxy(10, 32); cout<<"a. True";
            gotoxy(10, 33); cout<<"b. False";
            gotoxy(10, 34); cout<<"c. No idea";
            gotoxy(10, 35); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                    cout<<"Correct Answer!";
                    score++; 
					break;
                case 'b': case 'B':
                	cout<<"Wrong Answer!"; 
					break;
                case 'c': case 'C':
					cout<<"Wrong Answer!";  
					break;
                default:
                    cout<<"Invalid choice!";
            }
            		break;
        case '2':  // Calculus Topic
            clrscr();
            gotoxy(5, 2); cout<<"Calculus Quiz";
            gotoxy(0, 4); cout<<"=======================================================";
            // Question 1
            gotoxy(5, 6); cout<<"1. What is the derivative of x^2?";
            gotoxy(10, 7); cout<<"a. 2x";
            gotoxy(10, 8); cout<<"b. x^2";
            gotoxy(10, 9); cout<<"c. 2";
            gotoxy(10, 10); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                    cout<<"Correct Answer!";
                    score++; 
					break;
                case 'b': case 'B':
                    cout<<"Wrong Answer!"; 
					break;
                case 'c': case 'C':
                    cout<<"Wrong Answer!"; 
					break;
                default:
                    cout<<"Invalid choice!";
            }
            // Question 2
            gotoxy(5, 12); cout<<"2. What is the integral of 1/x?";
            gotoxy(10, 13); cout<<"a. ln|x|";
            gotoxy(10, 14); cout<<"b. x^2";
            gotoxy(10, 15); cout<<"c. x";
            gotoxy(10, 16); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                    cout<<"Correct Answer!";
                    score++; 
					break;
                case 'b': case 'B':
                    cout<<"Wrong Answer!"; 
					break;
                case 'c': case 'C':
                    cout<<"Wrong Answer!"; 
					break;
                default:
                    cout<<"Invalid choice!";
            }
            // Question 3
            gotoxy(5, 18); cout<<"3. What is the derivative of sin(x)?";
            gotoxy(10, 19); cout<<"a. cos(x)";
            gotoxy(10, 20); cout<<"b. -sin(x)";
            gotoxy(10, 21); cout<<"c. cos^2(x)";
            gotoxy(10, 22); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                    cout<<"Correct Answer!";
                    score++; 
					break;
                case 'b': case 'B':
                	cout<<"Wrong Answer!"; 
					break;
                case 'c': case 'C':
					cout<<"Wrong Answer!";  
					break;
                default:
                    cout<<"Invalid choice!";
            }
            // Question 4
            gotoxy(5, 24); cout<<"4. 12+2-5(3+3)";
            gotoxy(10, 25); cout<<"a. 54";
            gotoxy(10, 26); cout<<"b. -16";
            gotoxy(10, 27); cout<<"c. -20";
            gotoxy(10, 28); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                    cout<<"Wrong Answer!";
					break;
                case 'b': case 'B':
                	cout<<"Correct Answer!";
                	score++; 
					break;
                case 'c': case 'C':
					cout<<"Wrong Answer!";  
					break;
                default:
                    cout<<"Invalid choice!";
            }
            // Question 5
            gotoxy(5, 30); cout<<"5. x^0 is equal to?";
            gotoxy(10, 31); cout<<"a. 0";
            gotoxy(10, 32); cout<<"b. 1";
            gotoxy(10, 33); cout<<"c. Math Error!";
            gotoxy(10, 34); cout<<"Answer: "; cin>>op2;
            switch(op2) {
                case 'a': case 'A':
                    cout<<"Wrong Answer!";
					break;
                case 'b': case 'B':
                	cout<<"Correct Answer!"; 
                	score++; 
					break;
                case 'c': case 'C':
					cout<<"Wrong Answer!";  
					break;
                default:
                    cout<<"Invalid choice!";
            	}
            break;
    		}
			// Final Score
			gotoxy(0, 36); cout<<"=======================================================";
			gotoxy(10, 38); cout<<"Your final score is: "<<score<<" out of 5";
				percentage=(score/5.00)*100;
			gotoxy(10, 39); cout<<"Your percentage score is: "<<percentage<<"%";
				if(percentage>=75&&percentage<=100) {
			gotoxy(10, 40);cout<<"Passed!";
				} else {
			gotoxy(10, 40);cout<<"Failed!";
				}
getch();
return 0;
}