#include <iostream>
using namespace std;
int fibonacci(int n ){
    if(n==0 || n== 1)  //base case 
    {
        return n ;
    }
    //recursive case 
    return fibonacci(n-1) + fibonacci( n-2 );
}

int main() {
    cout<<"fibonacii is "<<fibonacci(5);
}
