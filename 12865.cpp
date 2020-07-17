#include <iostream>
#include <algorithm>
using namespace std;
int N,K,W[101],V[101],maxprofit;
float prop[101];
bool cmp(const int &a, const int &b){
    return (float)V[a]/W[a]>(float)V[b]/W[b];
}
bool promising(int i, int profit, int weight){
    int j,k,totweight;
    float bound;
    if(weight >= K) return false;
    else{
        j=i+1;
        bound=profit;
        totweight=weight;
        while(j<=N && totweight + W[j] <= K){
            totweight+=W[j];
            bound+=V[j];
            j++;
        }
        k=j;
        if(k<=N) bound+=(K-totweight)*prop[k];
        return bound > maxprofit;
    }
}
void ans(int i, int profit, int weight){
    if(weight <= K && profit > maxprofit){
        maxprofit=profit;
    }
    if(promising(i, profit, weight)){
        ans(i+1, profit+V[i+1], weight+W[i+1]);
        ans(i+1, profit, weight);
    }
}
int main(){
    cin >> N >> K;
    for(int i=1;i<=N;i++){
        cin >> W[i] >> V[i];
        prop[i]=(float)V[i]/W[i];
    }
    sort(prop, prop+N+1, cmp);
    sort(W, W+N+1, cmp);
    sort(V, V+N+1, cmp);
    ans(0,0,0);
    cout << maxprofit;
}