#include<iostream>
using namespace std ;

void generate_strings(char *in , char *out , int i , int j ){
	if(in[i] == '\0'){
		out[j] = '\0';
		cout << out << endl ;
		return ;
	}

	//include one digit 
	int digit = in[i] - '0';
	char ch = digit + 'A' - 1;
	out[j] = ch ;
	generate_strings(in,out,i+1,j+1);


	//include 2 digits 
	if(in[i+1] !='\0')
	{int secondDigit = in[i+1] - '0';
    int no = digit*10 + secondDigit ;
    
    if(no <= 26 ){
    	ch = no + 'A'  -1 ;
    	out[j] = ch ;
    	generate_strings(in,out,i+2,j+1);
    }}
    return ;
}

int main(){
	char a[100];
	cin>>a;
	char outt[100];
	generate_strings(a,outt,0,0);
}