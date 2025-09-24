#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter first number: "; cin>>a;
	cout<<"\nEnter second number: "; cin>>b;
	cout<<"\nEnter third number: "; cin>>c;
	if(a>b)
	{
		if(a>c) {
			cout<<"\nThe highest number = " <<a;
		}
		else {
			cout<<"\nThe highest number = " <<c;
		}
	} else {
			if(b>c) {
			cout<<"\nThe highest number = " <<b;
		}
		else {
			cout<<"\nThe highest number = " <<c;
		}
	}
	getch();
	return 0;
}