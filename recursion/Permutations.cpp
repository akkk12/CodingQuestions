#include<iostream>
#include<set>
#include<string>
using namespace std ;
void permutations(char * in , int i,set<string> &s ){
  if(in[i] == '\0'){
    //cout<<in << " ";
   //string t = in ;
  	s.insert(in); // used to show only unique answers

  	return ;
  }

  for(int j = i ; in[j] !='\0' ; j++){
  	swap(in[i] , in[j]);
  	permutations(in,i+1,s);
  	//back-tracking
  	swap(in[i] , in[j]);
  }
return ;
}
int main(){
	char a [100];
	cin>>a ;
	set<string> s ;
	permutations(a,0,s);
    for(auto str : s ){
        if(a<str)
    	cout << str << " " ;
    }
}
