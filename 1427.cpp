#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int i;
    string s;
    cin >> s;
    vector<char> ii(s.begin(), s.end());
    sort(ii.rbegin(), ii.rend());
    ii.push_back('\0');
    char *p=&ii[0];
    cout << p;
}