#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	string name;
	float qgrade, egrade, ave;
	cout<<"Enter your name: "; getline(cin,name);
	cout<<"\nEnter the Quiz Grade: "; cin>>qgrade;
	cout<<"\nEnter Exam Grade: "; cin>>egrade;
		ave= (qgrade+egrade)/2;
		cout<<"Average Grade: " <<ave;
		if(ave>=96 && ave<=100)
		{
			cout<<"\nCongratulations, You Passed!";
			cout<<"\nAverage = " <<ave;
			cout<<"\n4.0";
		}
				else if(ave>=90 && ave<=95.99)
				{
					cout<<"\nAverage = " <<ave;
					cout<<"\n3.5";
				}
				else if(ave>=84 && ave<=89.99)
				{
					cout<<"\nAverage = " <<ave;
					cout<<"\n3.0";
				}
				else if(ave>=78 && ave<=83.99)
				{
					cout<<"\nAverage = " <<ave;
					cout<<"\n2.5";
				}
				else if(ave>=72 && ave<=77.99)
				{
					cout<<"\nAverage = " <<ave;
					cout<<"\n2.0";
				}
				else if(ave>=66 && ave<=71.99)
				{
					cout<<"\nAverage = " <<ave;
					cout<<"\n1.50";
				}
				else if(ave>=60 && ave<=65.99)
				{
					cout<<"\nAverage = " <<ave;
					cout<<"\n1.0";
				}
		else
		{
			cout<<"\nSorry, you failed the course, Enroll again.";
			cout<<"\nGrade = R";	
		}
	getch();
	return 0;
}