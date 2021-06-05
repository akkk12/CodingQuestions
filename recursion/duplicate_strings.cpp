#include<iostream>
using namespace std ;
void Find(char *str  ,int i ){
	if(str[i]=='\0' || str[i+1] == '\0'){
    	 return ;
	}
    if(str[i] == str[i+1]){
		int j = i + 1 ;
		while(str[j]!='\0'){
			j++;
		}
    while(j>=i+1){
		str[j+1] = str[j] ;
		j -- ;
	}    
    
	str[i+1] = '*';
	Find(str,i+2);


	}  
    else{
	Find(str,i+1);
	}
}
int main() {
	char s[10000] ;
	cin>>s ;
	Find(s,0);
	cout << s ;
	return 0;
}