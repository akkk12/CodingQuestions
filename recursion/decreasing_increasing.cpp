#include <iostream>
using namespace std;
void decreasing_order(int n ){
    if(n==0){
        return ;
    }

cout << n <<" ";
 decreasing_order(n - 1) ;

}
void increasing_order(int n ){
    if(n == 0 ){
        return ;
    }
    increasing_order(n-1);
    cout<<n <<" " ;
}
int main() {
decreasing_order(5);
cout<<endl;
increasing_order(5);
}
