#include <iostream>
using namespace std;

int main (){
	int n, num, i;
	num=0;
	cin >> n;
	if(n%5==0) cout << n/5;  //5�� �ٷ� �������� ��� 
	else{
		if((n%5)%3==0) cout << n/5+(n%5)/3;
		else{   //5�ε� �ȳ������� 3���ε� �ȳ������� ��� 
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
