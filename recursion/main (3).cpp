#include<iostream>
using namespace std ;
int find(long long int arr[] , int n , int m){
	if(n==-1){
		return -1 ;
	}
	if(arr[n] == m ){
		return n;
	}
    return find(arr,n-1,m);

}
int main() {
	int n ;
	cin>>n;
	long long int arr[1000];
	for(int i = 0 ;i<n;i++){
		cin>>arr[i] ;
	}
	int m ;
	cin>>m;
	cout<<find(arr,n-1,m);

	return 0;
}