#include<cstdio>
#include<vector>
using namespace std;
int t, n, m, ck[1001], r; 
/*ck[n]�� n�� ��尡 Ž�� ���̸� 0, Ž�� ���ĸ� Ȧ�� ��° Ž���� 1, ¦�� ��° Ž���� 2�� �˴ϴ�.
��, n�� ��� Ž������ ck[n]=x�̸� ������ it�� ��带 Ž���ϸ� ck[it]=3-x�� �˴ϴ�*/
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