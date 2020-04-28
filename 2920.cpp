#include <iostream>
using namespace std;

int ascending(int a[]);
int descending(int a[]);

int main (){
	int melody[8];
	int i;
	for(i=0;i<8;i++){
		cin >> melody[i];
	}
	if(ascending(melody)==1) cout << "ascending";
	else if(descending(melody)==1) cout << "descending";
	else if(ascending(melody)==0 && descending(melody)==0) cout << "mixed";
	
	return 0;
}

int ascending(int a[]){
	int i=0;
	while(i<7){
		if(a[i]>a[i+1]) break;
		i++;
	}
	if(i<7) return 0;
	else return 1;
}

int descending(int a[]){
	int i=0;
	while(i<7){
		if(a[i]<a[i+1]) break;
		i++;
	}
	if(i<7) return 0;
	else return 1;
}
