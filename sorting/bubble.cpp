#include <iostream>
using namespace std;

void ssort(int arr[] , int n ){
    for(int i = 0 ;i<n-1;i++){
for(int j = 0 ; j< n-i -1;j++){
    if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
}
    }

}
int main() {
    int s;

    int arr[10];
    cout<<"Enter the no. of elements \n";
    cin>>s;
    for(int i = 0 ;i<s ;i++){
        cin>>arr[i];
    }

   ssort(arr,s);
   cout<<"Sorted Elements are \n";
  for(int i =0 ;i<s;i++){
    cout<<arr[i]<<" ";}
}
