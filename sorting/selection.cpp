#include <iostream>
using namespace std;

void sort(int arr[] , int n ){
    for(int i = 0 ;i<n-1;i++){
int min = i;
        for(int j = i ;j<= n-1 ; j++){
            if(arr[j]< arr[min])
            min = j;
        }
        swap(arr[i],arr[min] );
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

   sort(arr,s);
   cout<<"Sorted Elements are \n";
  for(int i =0 ;i<s;i++){
    cout<<arr[i]<<" ";}
}
