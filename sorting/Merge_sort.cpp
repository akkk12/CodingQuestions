#include <iostream>
using namespace std;
void mergef(int *a,int s ,int e){
    int mid = (s+e)/2;
    int i = s ;
    int j = mid + 1 ;
    int k = s ;
    int temp[100];
    while(i<=mid&& j<=e){
        if(a[i]<a[j]){
            temp[k++] = a[i++];
        }
        else {
            temp[k++] = a[j++];
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

}
void mergeSort(int a[] , int s , int e){
    if(s>=e){
        return ;
    }
int mid = (s+e)/2;

mergeSort(a,s,mid);
mergeSort(a,mid+1,e);
mergef(a,s,e);
}

int main(){
    int a[100];
    int n ;
    cin>>n ;

    for(int i = 0 ;i<n; i++){
cin>>a[i];
    }
    mergeSort(a,0,n-1);

        for(int i = 0 ;i<n; i++){
cout<<a[i] << " ";
    }

    return 0 ;
}
