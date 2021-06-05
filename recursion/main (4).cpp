#include<iostream>
#include<set>
using namespace std ;
void find(string in,int i , set<string> &out ){
    if(i == in.length()){
  
       out.insert(in);
        return ;
    }
    
    for(int j = i ; in[j] !='\0'; j++){
        swap(in[i] , in[j]);
        find(in,i+1,out);
         swap(in[i] , in[j]);
        
    }
}
int main() {
	string a ;
	cin>>a;
	set<string> out;
	find(a,0,out);
	for(auto str : out){
		if(str > a){
			cout << str ;
		}
	}
	return 0;
}