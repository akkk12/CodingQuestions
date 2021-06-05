#include<iostream>
using namespace std ;
int part(int *arr , int s , int e){

int i =s - 1;
int j = s ;
int pivot = arr[e];
while(j<e){
    if(arr[j] <= pivot )
{i=i+1 ;
swap(arr[i],arr[j]);
}
j=j+1;

}
swap(arr[i+1] , arr[e]);
return i+1;
}

void print(int arr[] , int n ){

for(int i = 0 ;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}

void qsort(int *arr , int s , int e ){
if(s>=e){
    return ;
}
 int p = part(arr, s ,e );
 qsort(arr , s , p-1);
 qsort(arr , p+1 , e );

}
int main(){
    int n;
int arr[100] = {0};
cout<<"Enter array size ";
cin>>n;
cout<<"\nEnter the array ";
for(int i = 0 ;i<n;i++){
    cin>>arr[i];
}
// n = sizeof(arr) / sizeof(int );
cout<<"\nOriginal array :";
print(arr,n);

qsort(arr, 0 , n-1 );
cout<<"\nSorted array   :";
print(arr,n);

return 0 ;
}
