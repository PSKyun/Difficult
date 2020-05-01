#include <iostream>
#include <fstream>
using namespace std;
ifstream ifs("input.txt");
int n,a[101][101],r[101][101],p[101],keys[101],C[101][101],W[101][101];

typedef struct node{
	int key;
	struct node *left, *right;
}node;

node *run;

int sum_p(int start, int end){
    int sum=0;
    for(int i=start;i<=end;i++)
        sum+=p[i];
    return sum;
}

void calculate(){
	int sum, j, minimum=987654321, min_index=101010;
    for(int i=1;i<=n;i++){
		a[i-1][i]=0;
        a[i][i]=p[i];
        r[i][i]=i;
		r[i-1][i]=0;
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
            min_index=9999;
			sum=p[i];
			for(int s=i+1;s<j+1;s++)
				sum+=p[s];
            a[i][j]=minimum+sum;
            minimum=99999;
        }
    }
}

//construct the optimal binary search tree
node *make_tree(int i, int j){
	node *p;

	if(r[i][j]==0)
		return NULL;
	else{
		p = new node;
		p->key = keys[r[i][j]];
		p->left = make_tree(i, r[i][j] - 1); //left subtree
		p->right = make_tree(r[i][j]+1, j); //right subtree
		return p;
	}
}

//preorder the optimal binary search tree
void preorder(node *run){
	if(run != 0) {
        printf("%d ", run->key);
		preorder(run->left);
		preorder(run->right);
	}
}
void optsearchtree()
{
	calculate();
	run = make_tree(1, n);
}
int main(){
	int i, k, t;
	ifs >> t;
	for(int i=0;i<t;i++){
		ifs >> n;
		for(int j = 1; j <= n; j++) {
			keys[j]=j;
			ifs >> p[j];
		}
		optsearchtree();
		preorder(run);
		cout << endl;
	}
}