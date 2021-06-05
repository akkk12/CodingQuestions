#include<iostream>
using namespace std ;

int Knapsack(int n , int c , int prices[] , int weights[]){
	if(n==0||c==0){
		return 0 ;
	}
    int ans = 0 ;
    int inc , exc ;
    inc = 0 ;
    exc = 0 ;
    if(weights[n-1] <= c){
    	inc = prices[n-1] + Knapsack(n-1,c-weights[n-1],prices,weights);
    } 

    exc= + Knapsack(n-1,c,prices,weights);
    ans = max(inc,exc);

    return ans ;
     
}

int main(){
	int weight[] = {1,2,3,5};
	int price[] = {40,20,30,100};
	int n = 4;
	int c = 7 ;
	cout << Knapsack(n,c,price,weight);
	return 0 ;
}