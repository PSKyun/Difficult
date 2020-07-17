#include <iostream>
using namespace std;
int n,W,w[31],t,count;
bool promising(int, int, int);
void sum_of_subsets(int, int, int);

int main(){
    cin >> n >> W;
    for(int i=1;i<=n;i++)
        cin >> w[i];
    for(int i=1;i<=n;i++)
        t += w[i];
    sum_of_subsets(0, t, 0);
    cout << count;
}

bool promising(int weight, int total, int i){
    return (weight==W || weight+w[i+1] <= W);
} 

void sum_of_subsets(int weight, int total, int i){
    if(promising(weight, total, i)){
        if(i==n && weight <= W) count++;
        else{
            sum_of_subsets(weight+w[i+1], total-w[i+1], i+1);
            sum_of_subsets(weight, total-w[i+1], i+1);
        }
    }
}