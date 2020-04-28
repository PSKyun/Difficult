#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int n, arr[1000001], tmp[1000001];
time_t key;
ifstream ifs("input.txt");

void swap(int *x, int *y)
 {  int temp=*x;
	*x=*y;
 	*y=temp;
 }
 int partition(int arr[], int l, int r)
 {
 	int x=arr[l];
 	int i=l+1;
 	int j=r;
 	while (1) {
		while (arr[i] <= x && i<=r) i++;
 		while (arr[j] > x && j>=l) j--;
 		if (i<j) swap(&arr[i],&arr[j]);
 		else break;
 	}
 	swap(&arr[l],&arr[j]);
 	return j;
 }
 void myQuicksort(int arr[], int l, int r)
 {
    int p;
 	if (l < r) {
 		p = partition(arr, l, r);
 		myQuicksort(arr, l, p-1);
 		myQuicksort(arr, p+1, r);
 	}
 }
 void merge(int a[], int start, int end){
    int mid=(start+end)/2;
    int i=start, j=mid+1, k=start;
    while(i<=mid && j<=end){
        if(a[i]<=a[j])
            tmp[k++]=a[i++];
        else
            tmp[k++]=a[j++];
    }
    int t = i>mid? j : i;
    while(k<=end)
        tmp[k++] = a[t++];
    for(int i=start;i<=end;i++)
        a[i]=tmp[i];
 }
 void mergesort(int a[], int start, int end){
    int mid=(start+end)/2;
    if(start<end){
        mergesort(a, start, mid);
        mergesort(a, mid+1, end);
        merge(a, start, mid);
    }
 }
 void input_sorted_array(){
    for(int j=0; j<n; j++){
        arr[j]=j;
    }
 }
 void input_random_array(){
    srand((unsigned) time(&key));
    for(int j=0; j<n; j++){
        arr[j]=rand();
    }
 }

 int main(){
    float sorted_merge[3], sorted_quick[3];
    float random_merge[3], random_quick[3];
    int s_data[3], r_data[3];
    for(int i=0;i<3;i++){ //sorted time//
        ifs >> n;
        s_data[i]=n;
        input_sorted_array();
        clock_t t=clock();
        myQuicksort(arr, 0, n-1);
        t=clock()-t;
        sorted_quick[i]=((float)t/CLOCKS_PER_SEC);

        t=clock();
        mergesort(arr, 0, n-1);
        t=clock()-t;
        sorted_merge[i]=((float)t/CLOCKS_PER_SEC);
    }
    printf("**************************SORTED*******************************\n");
    printf("*              *   N=%d   *   N=%d   *   N=%d   \n", s_data[0],s_data[1],s_data[2]);
    printf("*  Merge sort  *   %lf  *   %lf  *   %lf   \n", sorted_merge[0], sorted_merge[1], sorted_merge[2]);
    printf("*  Quick sort  *   %lf  *   %lf  *   %lf   \n", sorted_quick[0], sorted_quick[1], sorted_quick[2]);
    printf("***************************************************************\n");

    for(int i=3;i<6;i++){ //random time//
        ifs >> n;
        r_data[i]=n;
        input_random_array();
        clock_t t=clock();
        myQuicksort(arr, 0, n-1);
        t=clock()-t;
        random_quick[i]=((float)t/CLOCKS_PER_SEC);

        t=clock();
        mergesort(arr, 0, n-1);

        t=clock()-t;
        random_merge[i]=((float)t/CLOCKS_PER_SEC);
    }

    printf("**************************RANDOM*******************************\n");
    printf("*              *   N=%d  *   N=%d  *   N=%d   \n", r_data[3],r_data[4],r_data[5]);
    printf("*  Merge sort  *   %lf  *   %lf  *   %lf   \n", random_merge[3], random_merge[4], random_merge[5]);
    printf("*  Quick sort  *   %lf  *   %lf  *   %lf   \n", random_quick[3], random_quick[4], random_quick[5]);
    printf("***************************************************************\n");
 }