#include <iostream>
using namespace std;
void avg_p(int n);

int main (){
	int test_n, student_n, i;
	cin >> test_n;
	for(i=0;i<test_n;i++){
		cin >> student_n;
		avg_p(student_n);
	}
}

void avg_p(int n){
	int sum, i, p, score[n];
	float avg;
	sum=0;
	p=0;
	for(i=0;i<n;i++){
		cin >> score[i];
		if(score[i]<0 && score[i]>100){
			return;
		}
		sum+=score[i];
	}
	avg=sum/n;
	for(i=0;i<n;i++){
		if(score[i]>avg){
			p++;
		}
	}
	printf("%.3f", (float)p*100/n);
	printf("%\n");
}
