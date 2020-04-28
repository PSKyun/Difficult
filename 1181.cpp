#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool com(string s1, string s2){
    if(s1.length()!=s2.length()){
        return s1.length() < s2.length();
    }
    else return s1 < s2;
}
int main(){
    int i, n;
    cin >> n;
    string v[n];
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v, v+n, com);
    for(i=0;i<n;i++){
        if(v[i]==v[i-1])
            continue;
        else
            cout << v[i] << "\n";
    }
}