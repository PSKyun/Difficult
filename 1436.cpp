#include <iostream>
#include <string>
using namespace std;

int main (){
	int n, title, k;
	title=665;
	k=0;
	
	cin >> n;
	while(++title){
		string s=to_string(title);
		if(s.find("666")!=-1){
			++k;
		}
		if(k==n){
			cout << title << endl;
			break;
		}
	}
}
