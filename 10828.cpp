#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    stack<int> st;
    while(n!=0){
        cin >> s;
        while (n!=0)
        {
        if(s=="push"){
            int num;
            cin >> num;
            st.push(num);
            n--;
            break;
        }
        if(s=="pop"){
            if(st.empty()){
                cout << "-1" << endl;
                n--;
            }
            else{
                cout << st.top() << endl;
                st.pop();
                n--;
            }
            break;
        }
        if(s=="size"){
            cout << st.size() << endl;
            n--;
            break;
        }
        if(s=="empty"){
            if(st.empty()){
                cout << "1" << endl;
            }
            else{
                cout << "0" << endl;
            }
            n--;
            break;
        }
        if(s=="top"){
            if(st.empty()){
                cout << "-1" << endl;
            }
            else{
                cout << st.top() << endl;
            }
            n--;
            break;    
        }
        }
    }
}