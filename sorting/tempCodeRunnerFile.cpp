#include<iostream>
using namespace std ;
void merge(int *arr , int s , int mid , int e ){
int k = s;
int temp[1000];
int i = s ;
int j = mid + 1 ;
while(i<=mid && j <=e){
    if(arr[i] <= arr[j] ){
        temp[k] = arr[i];
    k++;
    i++;
    }
    else 
    {temp[k] = arr[j];
    k++;
    j++;}
}
while(i<=mid ){
    temp[k] = arr[i];
    k++;
    i++;

}


//copying the remaining elements 
while(j<=e){
    temp[k] = temp[j];
    k++;
    j++;
}

for(int i = s ;i <=e ;i++){
    arr[i] = temp[i];
}

}
void mergesort(int arr[] , int s , int e ){
if(s>=e){
    return ;
}
int mid = (s+e)/2;

//Divide 
mergesort(arr, s , mid );
mergesort(arr , mid +1 , e);
 
 //Merge the two 
 merge(arr,s,mid, e);

}
int main() {


    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i< n; i++){
        cin>>arr[i];
    
    }

    mergesort(arr, 0 , n-1);

    for(int i = 0 ;i< n; i++){
        cout<<arr[i]<< " ";
    }



	return 0;
}