#include <iostream>
using namespace std;

int main(){
	long long test, x, y, n, i;
	long long k[3]={-1,0,1};
	n=0;
	scanf("%d",&test);
	while(test!=0){
		scanf("%d%d",&x,&y);
		while(1){
			if(x+k[0]==y-1 || x+k[1]==y-1 || x+k[2]==y-1){
				n+=2;
				printf("%d\n",n);
				break;
			}
			else{
				x+=k[2];
				k[0]++;
				k[1]++;
				k[2]++;
				n++;
			}
		}
		test--;
		k[0]=-1; k[1]=0; k[2]=1;
		n=0;
	}
}
