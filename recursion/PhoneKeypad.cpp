#include<iostream>
using namespace std ;
char keypad[][10] = {" ", " ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void generateNames(char *in , char *out , int i , int j ){
	if(in[i] =='\0'){
		out[i] ='\0';
		cout<<out<<endl;
		return ;
	}
    int digit = in[i] - '0';
    if(digit == 0 || digit == 1){
    	generateNames(in,out,i+1,j);
    }

    for(int k = 0 ;keypad[digit][k] !='\0' ; k++){
    	out[i] = keypad[digit][k] ;
    	generateNames(in,out,i+1,j+1);
    }

    return ;
}

int main(){
	int n ;
	char input[1000];
	cin>>input ;
	n = sizeof(input)/sizeof(char);
	char output[1000];
	generateNames(input,output,0,0);


}
