#include<cstdio>
#include<vector>
using namespace std;
int t, n, m, ck[1001], r; 
/*ck[n]은 n번 노드가 탐색 전이면 0, 탐색 이후면 홀수 번째 탐색시 1, 짝수 번째 탐색시 2가 됩니다.
즉, n번 노드 탐색이후 ck[n]=x이면 인접한 it번 노드를 탐색하면 ck[it]=3-x가 됩니다*/
vector<int> adj[1001];
void f(int h) {
    for (auto it : adj[h]) {
        if (!ck[it]) ck[it] = 3 - ck[h], f(it);
        if (ck[h] == ck[it]) r = 1;
    }
}
int main() {
    for (scanf("%d", &t); t--;) {
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++) adj[i].clear(), ck[i] = 0;
        for (int i = 0, x, y; i<m; i++) {
            scanf("%d%d", &x, &y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        r = 0;
        for (int i = 1; i <= n; i++) if (!ck[i]) ck[i] = 1, f(i);
        puts(r ? "impossible" : "possible");
    }
    return 0;
}