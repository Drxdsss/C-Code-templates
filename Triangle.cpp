#include<iostream>
#include<conio.h>
#include<cmath>
#include<math.h>

using namespace std;

int main () {
	int h, b, Z, A, P;
	cout<<"Enter the height of the Triangle: ";cin>>h;
	cout<<"\nEnter the base of the Triangle: ";cin>>b;
	if(h>=b) {
		A=b*h/2;
		cout<<"\nArea of the Triangle = "<<A;
	} else {
		Z=sqrt(h^2+b^2);
		P=b+h+Z;
		cout<<"\nPerimeter of the Triangle = "<<P;
	}
	
	getch ();
	return 0;
}