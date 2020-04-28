#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int T;
    cin >> T;

    vector<pair<int, int>> vec(T);

    for (int i = 0; i < T; i++)
        cin >> vec[i].second >> vec[i].first;

    sort(vec.begin(), vec.end());

    for (int i = 0; i < T; i++)
        cout << vec[i].second << " " << vec[i].first << "\n";
}