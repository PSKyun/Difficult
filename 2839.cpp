#include <iostream>
using namespace std;

int main (){
	int n, num, i;
	num=0;
	cin >> n;
	if(n%5==0) cout << n/5;  //5로 바로 나눠지는 경우 
	else{
		if((n%5)%3==0) cout << n/5+(n%5)/3;
		else{   //5로도 안나눠지고 3으로도 안나눠지는 경우 
			for(i=n/5;i>=0;i--){
				if((n-5*i)%3==0){
				 	cout << i+(n-5*i)/3;
					return 0;
				}
			}
			cout << "-1";
		} 
	}
}
