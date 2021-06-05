#include <iostream>
using namespace std;
int  merge(int *a,int s ,int e){
    int mid = (s+e)/2;
    int i = s ;
    int j = mid + 1 ;
    int k = s ;
    int cnt = 0 ;
    int temp[100];
    while(i<=mid&& j<=e){
        if(a[i]<=a[j]){
            temp[k++] = a[i++];
        }
        else {
            temp[k++] = a[j++];
            cnt = cnt + mid - i + 1 ;
         }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++] = a[j++];
    }

    for(int m = s ;m<=e ; m++){
        a[m] = temp[m];
    }
return cnt ;
}
int  mergeSort(int a[] , int s , int e){
    if(s>=e){
        return 0 ;
    }
int mid = (s+e)/2;

int x = mergeSort(a,s,mid);
int y = mergeSort(a,mid+1,e);
int z = merge(a,s,e);
return x + y + z ;
}

int main(){
    int a[100];
    int n ;
    cin>>n ;
    
    for(int i = 0 ;i<n; i++){
cin>>a[i];
    }
   cout <<  mergeSort(a,0,n-1) << endl ;

     
    return 0 ;
}