#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;
int n,e,k,f,dist[1001];

vector<pair<int, int>> M[1001];  //2개 vertex의 <인접노드, 비용>

void dijk(){
    for(int i=1;i<=n;i++){
        dist[i]=INT_MAX;
    }
    dist[k]=0;

    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;  //비용, 인덱스
    pq.push({0, k});
    while(!pq.empty()){
        int cost=pq.top().first;
        int newv=pq.top().second;
        pq.pop();
        if(dist[newv]<cost) continue;
        for(int i=0;i<M[newv].size();i++){ //인접리스트 방식
            int cur=M[newv][i].first; //선택된 노드의 i번째 추가된 인접노드의 인덱스
            int newdist=cost+M[newv][i].second; //선택된 노드를 거쳐 인접노드로 가는 비용
            if(dist[cur] > newdist){
                dist[cur]=newdist;
                pq.push({newdist, cur});
            }
        }
    }
    cout << dist[f]-dist[k];
}

int main(){
    int from, to, cost;
    cin >> n >> e;
    for(int i=0;i<e;i++){
        cin >> from >> to >> cost;
        M[from].push_back({to, cost});
    }
    cin >> k >> f;
    dijk();
}