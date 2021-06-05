/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;
int firstOcc(int arr [] , int n , int key  ){
    if(n == 0 ){
         return -1 ;
    }
    if(arr[0] == key ){
          return 0 ;
     }

     int i =  firstOcc(arr + 1 , n - 1 , key ) ;
     if(i==-1){
          return -1 ;
     }

     return i +1  ;

}

int linearSearch(int a[] , int i , int n ,int key){
if(n == i ){
    return -1 ;
}
if(a[i] == key ){
    return i ;
}

return linearSearch(a,i+1,n,key);


}

int main()
{
   int arr[] = { 1,2,3,4,5,6,7,8,7};
   int n = sizeof(arr)/sizeof(int);
   cout << firstOcc(arr,n,5) << endl;
   cout << linearSearch(arr,0,n,5);

    return 0;
}
