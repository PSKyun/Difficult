#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b;
    c = a*b > a+b ? a*b : a+b;
    printf("%d�� %d�� ���� �� �߿��� ū ���� %d�Դϴ�.",a,b,c);
}