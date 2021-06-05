/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;

int findTiles(int n){
    if(n<=3){
        return 1 ;
    }
    
    return findTiles(n-1) + findTiles(n-4);
    
}
int main()
{
   cout << findTiles(1);

    return 0;
}
