#include <iostream>
using namespace std;
char words[][10] = {"zero" , "one ", "two ", "three", "four", "five", "six", "seven","eight ", "nine ", "ten"};

void PrintSpellings(int n ){
if(n == 0){
    return ;
}


PrintSpellings(n/10);
int digit = n % 10 ;
cout << words[digit]<< " ";

return ;
}
int main() {
    int m ;
    cin>>m;
   PrintSpellings(m);
    return 0 ;
}
