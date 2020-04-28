#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int main (){
    int n, x, y;
    cin >> n;
    vector<pair<int, int>> v(n);
    int i;
    for(i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    for(i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}