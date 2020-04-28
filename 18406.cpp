#include <iostream>
#include <cstring>
using namespace std;

int main (){
    string s;
    cin >> s;
    int a,k;
    long long left=0, right=0;
    k=s.length();
    for(int i=0;i<k/2;i++){
        a=s.at(i)-'0';
        left+=a;
    }
    for(int i=k/2;i<k;i++){
        a=s.at(i)-'0';
        right+=a;
    }
    if(left==right) printf("LUCKY");
    else printf("READY");
}