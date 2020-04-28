#include <iostream>
using namespace std;

int main (){
	int n, i, j, k, num, max;
	int nums[100000];
	k=0;
	num=0;
	while(n!=0){
		cin >> n;
		if(n==0) {
			max=k;
			break;
		}
		if(n==1){
			nums[k]=1;
			k++;
			num=0;
			continue;
		}
		for(i=n+1;i<2*n;i++){
			for(j=2;j<n;j++){
				if(i%j==0) break;
			}
			if(j==n) num++;
		}
		nums[k]=num;
		k++;
		num=0;
	}
	for(k=0;k<max;k++){
		cout << nums[k] << endl;
	}
}
