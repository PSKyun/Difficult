#include <iostream>
#include <cmath>
using namespace std;
 
int n;
bool isNotPrime[123456*2+1];
 
void eratos(){
    // 1은 소수가 아님을 처리안해줘서 처음에 틀림
    isNotPrime[1] = true;
    int maxi = sqrt(123456*2);
    for(int i = 2; i <= maxi; i++){
        if(!isNotPrime[i]){
            for(int j = i*i; j <= 123456*2; j += i)
                isNotPrime[j] = true;
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    eratos();
    
    while(1){
        cin >> n;
        if(n == 0)
            break;
        
        int count = 0;
        for(int i = n+1; i <= 2*n; i++){
            if(!isNotPrime[i]){
                count ++;
            }
        }
        cout << count << '\n';
    }
    
    return 0;
}



