/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void printIncDec(int n ){
    if(n==0){
        return ;
    }
    
    cout<<n<<"\n";
    printIncDec(n-1);
    cout<<n<<"\n";
        /* code */
    }
int logpower(int x,int n){
    if(n==0){
        return 1;
    }
    int m = logpower(x,n/2);
    int ans = m*m;
   
    if(n%2 !=0){
        ans =  ans * x ;
    }
    
    return ans ;
}
void disArray(int arr[] , int idx,int nl){
    //int nl = sizeof(arr)/sizeof(int) ;
    if(idx == nl){
        return ;
    }
    cout<<arr[idx]<<endl;
    disArray(arr,idx + 1,nl);
    
}

void disRev(int arr[] , int i , int n){
    if(i == n){
        return ;
    }
    
    disRev(arr,i+1,n);
    cout<<arr[i] <<" ";
}

int FindMax(int arr[] , int i , int n ){
    if(i == n){
        return arr[i] ;
    }
    int m = FindMax(arr,i+1,n);
    if(arr[i] < m ){
       return m ;
    }
    else {
        return  arr[i];
    }
    
}

int FirstIndex(int arr[] ,int i , int n ,int target ){
     if(i==n){
        return -1;
    }
    
    if(arr[i] == target ){
        return i;
    }
   
    return FirstIndex(arr,i+1,n,target);
    
    
}

int LastIndex(int arr[] ,int idx ,int n ,int x ){
    if(idx == n ){
        return -1;
    }
int m = LastIndex(arr,idx+1,n,x);
if(m==-1){
    if(arr[idx] == x ){
        return idx ;
    }
    else {
        return -1;
    }
    
}
else {
    return m ;
}
    
}
int li(int arr[], int i , int x){
    if(i == -1){
        return -1;
    }
    if(arr[i] == x){
        return i ;
    }
    return li(arr,i-1,x);
    
}
int cnt = 0 ;
void AllIndexes(int arr[] , int output[] , int i , int j , int x , int n){
   
    if(i == n){
       return ;
    }
    if(arr[i] == x ){
        output[j] = i ;
        cnt ++;
          AllIndexes(arr,output,i+1,j+1,x,n);
    }
    else {
          AllIndexes(arr,output,i+1,j,x,n);
    }
    
}


int main()
{int n;
//cin>>n;
   // printIncDec(n);
  // cout << logpower(2,5);
int arr[] = {2,1,30,40,50,58,3,90,6,3,44};
int nl = sizeof(arr)/sizeof(int);
//disRev(arr,0,nl);
//cout << FindMax(arr,0,nl-1)<<endl;  
//cout<<FirstIndex(arr,0,n-1,50)<<endl;
//cout <<nl ;
//cout<<"i is "<<li(arr,nl-1,3);
int output[nl] = {0};
AllIndexes(arr,output , 0,0,3,nl-1);
for(int x = 0 ; x < cnt ; x++ ){
    cout<< output[ x ] << " ";
    
}
return 0;
}
