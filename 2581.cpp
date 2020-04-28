#include <iostream>
using namespace std;

int main (){
	int m, n, i, j, sum, min;
	cin >> m >> n;
	min=0;
	sum=0;
	for(i=m;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			if(sum==0){
				min+=i;
			}
			sum+=i;
		}
	}
	if(sum==0) cout <<"-1";
	else{
		cout << sum << endl;
		cout << min;
	}
}
