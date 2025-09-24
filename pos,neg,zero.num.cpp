#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter number: ";
    cin >> n;
    if(n==0) {
        cout<<"The number is Zero: "<<n;
    } else if(n>0) {
        cout<<"The number is Positive: "<<n;
    } else if(n<0){
        cout<<"The number is Negative: "<<n;
    } else{
    	cout<<"Invalid!";
	}
    getch();
    return 0;
}
