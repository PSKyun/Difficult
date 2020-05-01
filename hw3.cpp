#include <iostream>
#include <limits.h>
#include <algorithm>
#include <fstream>
using namespace std;
int t,n,a[101][101],p[101],r[101][101],key[101];
ifstream ifs("input.txt");

struct nodetype{
    int key;
    nodetype *left;
    nodetype *right;
};
typedef nodetype *node_pointer;

node_pointer go;
node_pointer tree(int, int);
void input();
void preorder(node_pointer);
void init();
void optsrctree();
int sum_a(int, int);

int main(){
    init();  
    input();       
}

void init(){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            a[i][j]=0;
            r[i][j]=0;
        }
        p[i]=0;
    }
}
void input(){
    ifs >> t;
    for(int i=0;i<t;i++){
        ifs >> n;
        for(int j=1;j<=n;j++){
            ifs >> p[j];
            key[j]=j;
        }
        optsrctree();
        go=tree(1,n);              
        preorder(go);
        cout << endl;
    }
}
void preorder(node_pointer go){
    if(go!=NULL){
        cout << go->key << " ";
        preorder(go->left);
        preorder(go->right);
    }
}
int sum_p(int start, int end){
    int sum=0;
    for(int i=start;i<=end;i++)
        sum+=p[i];
    return sum;
}
void optsrctree(){
    int sum, j, minimum=INT_MAX, min_index=INT_MAX;
    for(int i=1;i<=n;i++){
        a[i][i]=p[i];
        r[i][i]=i;
    }
    for(int diag=1;diag<=n-1;diag++){
        for(int i=1;i<=n-diag;i++){
            j=i+diag;
            for(int k=i;k<=j;k++){
                if(minimum > a[i][k-1]+a[k+1][j]){
                    min_index=k;
                    minimum=a[i][k-1]+a[k+1][j];
                }
            }
            r[i][j]=min_index;
            min_index=INT_MAX;
			sum=p[i];
			for(int s=i+1;s<j+1;s++)
				sum+=p[s];
            a[i][j]=minimum+sum;
            minimum=INT_MAX;
        }
    }
}
node_pointer tree(int i, int j){
    int k;
    node_pointer p;
    k=r[i][j];
    if(k==0)
        return NULL;
    else{
        p=new nodetype;
        p->key=key[k];
        p->left=tree(i,k-1);
        p->right=tree(k+1,j);
        return p;
    }
}