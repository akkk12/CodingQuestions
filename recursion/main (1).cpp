#include<iostream>
using namespace std ;
int cnt = 0 ;
void sub_sequences(char *input ,char *output ,  int i,int j ){
	if(input[i] == '\0'){
		output[j] = '\0';
			 cout << output << " ";
		cnt ++ ;
		return ;
	}
    
    
	output[j] = input[i];


    sub_sequences(input,output,i+1,j+1);
  //  output[j] = " ";
 
	sub_sequences(input,output,i+1,j);
   }
int main() {
	char s[1000];
	cin>>s ;
	char out[1000];
	sub_sequences(s,out,0,0);
	cout << endl<< cnt  <<endl;

	return 0;
}