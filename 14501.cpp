#include<iostream>
#include<algorithm>
using namespace std;
int t[16], p[16], n, ans;
void go(int day, int total) {
    if (day == n) {
        ans = max(ans, total);
        return;
    }
    go(day + 1, total);
    if (day + t[day] <= n)
        go(day + t[day], total + p[day]);
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        cin >> p[i];
    }
    go(0, 0);
    cout << ans << endl;
    return 0;
}