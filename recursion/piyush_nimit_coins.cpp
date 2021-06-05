#include<iostream>
using namespace std ;
void find(char *in ,char *output ,int i , int j ){
	if(in[i] == '\0'){
		output[j] = '\0';
		cout << output << " " ;
		return ;
	}
	if(in[i] == in[i+1]){
	    while(in[i] == in[i+1]){
	        	output[j] = in[i] ;
	        	i++;}
	   find(in,output,i+1,j+1);     	
	    
	}
	else{	
	    output[j] = in[i] ;
	    find(in,output,i+1,j+1);
	
	    
	}



   
}
int main() {
	char s[1000];
	cin>>s;
	char a[1000];
	find(s,a,0,0);
   // cout<<s ;
	return 0;
}