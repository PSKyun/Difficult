#include <iostream>
using namespace std;

int main (){
	int cyc,a,b,i,j,n;
	n=0;
	cin >> cyc;
	j=cyc;
	while(1){
		b=cyc%10;
		a=cyc/10;
		cyc=10*b+(b+a)%10;
		n++;
		if(j==cyc){
			break;
		}                
	}
	cout << n;
	return 0;
}
