#include <iostream>
using namespace std;
int up, down, height;
int day;

int main(){
	cin >> up >> down >> height;
	day=(height-up)/(up-down);
	if((height-up)%(up-down)!=0) day++;
	cout << ++day;
}

