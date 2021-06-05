#include<iostream>
using namespace std ;
int cnt = 0;
bool RatinAMaze(int maze[10][10] , int sol[10][10] , int i , int j , int m , int n ){

	if(i == m && j == n){
        sol[i][j] = 1;
        for(int i = 0 ;i<=m ; i++){
        	for(int j = 0 ;j<=n ; j++){
        		cout<<sol[i][j] << " ";
        	}
        	cout<<endl;
        }
        cnt ++ ;
        cout<<endl ;

		return true ;
	}
	if(i>m || j>n){
		return false ;
	}
    if(maze[i][j] == 2 ){
    	return false ;
    }

    sol[i][j] = 1 ;
    int rightSuccess = RatinAMaze(maze , sol , i , j+1 , m ,n);
    int leftSuccess = RatinAMaze(maze , sol , i+1 , j , m ,n);

    //Back-tracking
    sol[i][j] = 0;

    if(rightSuccess || leftSuccess ){
    	return true ;
    }


    return false ;


}

int main(){

	int a[][10] = {{0,0,0,0} , {0,0,2,0} , {0,0,0,2} , {0,2,0,0}};
	int sol[10][10] = {0};
    int m = 4, n = 4;
	int answer = RatinAMaze(a,sol , 0 , 0 , m-1,n-1);
	if(answer ==0 ){
		cout << "Found a path ";
	}

	 cout << " NO of solutions are "<< cnt <<endl;
	return 0 ;
}
