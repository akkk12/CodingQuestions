#include<iostream>
#include<set>
using namespace std ;
bool find(int arr[] ,int i,int ans, int cnt,int n ){
    if(i==n){
        if(ans == 0 && cnt > 0){
            return true ;
        }
        return false ;
    }
   
   return  find(arr,i+1,ans+arr[i],cnt + 1,n) || find(arr,i+1,ans,cnt,n);
    
    
    
}
int main() {
    int t ;
    cin>>t ;
while(t>0){   
int n ;
cin>>n ;
int arr[n];
for(int i = 0 ;i<n;i++){
    cin>>arr[i] ;
}
if (find(arr,0,0,0,n))
{
    cout << "yes ";
}
else {
    cout<<"no";
}t--;
}
	return 0;
}