#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;
int v,e,k,dist[20001];

vector<pair<int, int>> M[20001];

void dijk(){
    for(int i=1;i<=v;i++){
        dist[i]=INT_MAX;
    }
    dist[k]=0;

    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;  //ºñ¿ë, ÀÎµ¦½º
    pq.push({0, k});
    while(!pq.empty()){
        int cost=pq.top().first;
        int newv=pq.top().second;
        pq.pop();
        if(dist[newv]<cost) continue;
        for(int i=0;i<M[newv].size();i++){
            int cur=M[newv][i].first;
            int newdist=cost+M[newv][i].second;
            if(dist[cur] > newdist){
                dist[cur]=newdist;
                pq.push({newdist, cur});
            }
        }
    }
}

int main(){
    int from, to, cost;
    cin >> v >> e >> k;
    for(int i=0;i<e;i++){
        cin >> from >> to >> cost;
        M[from].push_back({to, cost});
    }
    dijk();
    for(int i=1;i<=v;i++){
        if(dist[i]==INT_MAX)
            cout << "INF" << endl;
        else
            cout << dist[i] << endl;
    }
}