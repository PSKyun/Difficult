#include <iostream>
using namespace std;

int main(){
	int n, m, i, j, k, l, max;
	cin >> n >> m;
	l=0;
	int cardn[n];
	int sum[10000];
	int h[3]={0,1,2};
	for(i=0;i<n;i++){
		cin >> cardn[i];
	}
	for(i=0;i<n-2;i++){		
		for(j=i+1;j<n-1;j++){
			for(k=j+1;k<n;k++){
				if(cardn[i]+cardn[j]+cardn[k]<=m){
					sum[l]=cardn[i]+cardn[j]+cardn[k];
					if(l==0) max=sum[l];
					else if(sum[l]>max) max=sum[l];
					l++;
				}
			}
		}
	}
	cout << max;
}
