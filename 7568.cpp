#include <iostream>
using namespace std;

struct student{
    int kg;
    int cm;
    int ss;
};

int main(){
    int n,i,j,k,c;
    cin >> n;
    student s[n];
    for(i=0;i<n;i++){
        cin >> s[i].kg >> s[i].cm;
    }
    k=1;
    c=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j) continue;
            if(s[i].kg<s[j].kg && s[i].cm<s[j].cm){
                k++;
            }
        }
        s[i].ss=k;
        k=1;
    }
    for(i=0;i<n;i++){
        cout << s[i].ss << ' ';
    }
}