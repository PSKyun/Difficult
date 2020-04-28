#include <iostream>
using namespace std;

int main(){
	int h, w, n, test, i, j;
	cin >> test;
	while(test!=0){
		cin >> h >> w >> n;
		int hotel[h][w];
		for(i=1;i<=w;i++){ //room
			for(j=1;j<=h;j++){ //floor
				n--;
				if(n==0){
					cout << j;
					if(i<10){
						cout << "0" << i << endl;
					}
					else{
						cout << i << endl;
					}
				}
			}
		}
		test--;
	}
}
