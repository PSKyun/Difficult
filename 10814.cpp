#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
using namespace std;

bool ss(pair<int, string>a,pair<int, string>b){
    return a.first < b.first;  
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, string>> v(n);
    int i;
    for(i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(),v.end(),ss);
    for(int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << "\n";
}
