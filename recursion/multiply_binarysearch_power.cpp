/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int multiply(int a , int b){
     if(a == 0 || b == 0){
          return 0;
}
return a + multiply(a,b-1);
}

int power (int x , int n){
     if(n == 0){
          return 1;
     }

     return x * power(x , n - 1);
}

int binarySearch(int arr[] ,int start , int n , int ans ){
     int m = (start + n )/ 2 ;
     if(arr[m] == ans ){
          return m ;
     }
     else if(arr[m] <  ans ){
          return binarySearch(arr , m + 1 , n , ans );
     }
     else if(arr[m] > ans )
     return binarySearch(arr ,0, m -1 , ans);
     return 0 ;

}
int main()
{int arr[] = {1,2,3,4,5};
int n = 5 ;
    cout << multiply (25,4) << endl ;
    cout << power(2,5) << endl ;
    cout <<binarySearch(arr,0,4,1);

    return 0;
}

