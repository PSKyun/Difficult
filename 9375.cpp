#include <bits/stdc++.h>
using namespace std;
int t, n;
string a, b;
int main(){
    cin >> t;
    while(t--){
        map<string, int> _map;
        cin >> n;
         for(int i = 0; i < n; i++){
            cin >> a >> b;
            if(_map.find(b)==_map.end())
                _map.insert({b,1});
            else
                _map[b]++;
        }
        long long ret = 1;
        for(auto c : _map){
            ret *= ((long long)c.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }
    return 0;
}


