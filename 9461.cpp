#include <iostream>
using namespace std;

int main(){
    int N, T;
    scanf("%d", &T);
    long long P[100] = {1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
    while (T != 0)
    {
        scanf("%d", &N);
        for (int i = 10; i < N; i++)
        {
            P[i] = P[i - 1] + P[i - 5];
        }
        printf("%lli\n", P[N - 1]);
        --T;
    }
    return 0;
}