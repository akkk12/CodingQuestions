#include<iostream>
using namespace std ;
void Subsequence(char *in , char *out , int i , int j){
	if(in[i] == '\0'){
		out[j] = '\0';
		cout << out <<endl ;
		return ;
	}
    //include ith ele in subset
    out[j] = in[i];
    Subsequence(in,out , i+1 , j+1);
    
    //exclude the ele 

    Subsequence(in,out,i+1,j);
}
int main(){
	char input[10];
	char output[10];
	cin>>input;
	Subsequence(input,output,0,0);
	return 0 ;
}