#include <iostream>
using namespace std;
int fact(int);

int main(){
	int n;
	cin >> n;
	cout << fact(n);
}

int fact(int a){
	if(a>1) return a*fact(a-1);
	else return 1;	
}
