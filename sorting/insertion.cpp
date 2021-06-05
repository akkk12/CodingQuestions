#include<iostream>
using namespace std ;
void isort(int arr[],int n){
for(int i =0 ; i<= n-1 ; i++){
int curr = arr[i];
int j = i-1;
while(j>=0 && arr[j] > curr){
    arr[j+1]=arr[j];
    j=j-1;
}
arr[j+1]=curr;

}}

 int main(){
     int n ;
     cin>>n;
          int arr[10];
     for(int i = 0 ; i<n;i++){cin>>arr[i];}

     isort(arr,n);
         for(int i = 0 ; i<n;i++){cout<<arr[i]<<" ";}
 }
