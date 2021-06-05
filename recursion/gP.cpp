#include<iostream>
using namespace std ;
void GenerateParenthesis (char *out ,int n , int i , int open , int close  ){
if(i == 2*n){
   out[i] = '\0';
   cout << out << endl ;
   	return ;
}
if(open < n){
	out[i] = '(';
	GenerateParenthesis(out , n , i+1,open +1 ,close );
}

if(close < open ){
	out[i] = ')';
    GenerateParenthesis(out , n , i+1,open ,close +1 ); 
}
return ;
    }





int main()
{
	char output[1000] ;
	int n ;
	cin>>n ;
	GenerateParenthesis(output,n,0,0,0); 
	return 0;
}