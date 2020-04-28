#include <iostream>
#include <string>
using namespace std;

int main(){
	int c[123]={0,};
	string s;
	cin >> s;
	int _max=-1;
	int idx_max=0;
	int check=0;
	for(int i=0;i<s.size();i++){
		c[s.at(i)]++;
	}
	for(int i=65;i<123;i++){
		if(_max<c[i]){
			_max=c[i];
			idx_max=i;
			check=0;
		}
		if(_max==c[i]){
			check=1;
		}
	}
	if(check==1) cout << "?";
	else{
		if(idx_max>=97)
			printf("%c",idx_max-32);
		else
			printf("%c",idx_max);
	}
}
