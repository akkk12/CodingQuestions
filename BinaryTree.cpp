#include<iostream>
#include<queue>
using namespace std ;

class node{
	public :
	int data ;
	node *left ;
	node *right;
	node(int d){
		data = d ;
		left =NULL;
		right = NULL;
		}
};

node* build(){
	int d ;
	cin>>d;
	if(d==-1){
    return NULL;  	}
   node *root = new node(d);
   root->left = build();
   root->right = build();
    return root;	
}

void PrePrint(node *root){
	if(root == NULL){
		return ;
	}
    cout<<root->data<<" ";
    PrePrint(root->left); 
     PrePrint(root->right); 
    
}

void InPrint(node *root){
if(root == NULL){
		return ;
	}
    
    PrePrint(root->left); 
    cout<<root->data<<" ";
     PrePrint(root->right); 
}

void PostPrint(node *root){
	if(root == NULL){
		return ;
	}
    
    PrePrint(root->left); 
   
     PrePrint(root->right); 
      cout<<root->data<<" ";
	
}



void kLevel(node*root , int k){
	if(root == NULL){
		return ;
	}

	if(k==1){
		cout<<root->data<<" ";
		return ;
	}
    
	kLevel(root->left , k-1);
	kLevel(root->right , k-1);
 return;

}

int height(node *root){
	if(root == NULL){
		return 0 ;
	}
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) + 1;

}


void printAllLevel(node*root){
	int h = height(root);
	for(int i = 1 ;i<=h ;i++){
		kLevel(root,i);

	}
}

int countNode(node *root){
	if(root == NULL){
		return 0;
	}

	return 1 + countNode(root->left) + countNode(root->right);
}
int sumOfNodes(node *root){
int ans = 0 ;
if(root == NULL){
	return  0 ;
}

int s1 = sumOfNodes(root->left);
int s2 = sumOfNodes(root->right);


return root->data + s1 +s2 ;

}


int diameter(node *root){
	if(root == NULL){
		return 0 ;
	}
    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1 + h2 ;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1,max(op2,op3));

}



void bfs(node *root){

	queue<node*> q ;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		 node *f = q.front();
		 if(f==NULL){
		 	cout<<endl;
		 	q.pop();
if(!q.empty()){
	q.push(NULL);
}}
		 	

		 else {
		cout<<f->data<<" ";
        q.pop();

        if(f->left!= NULL){
        	q.push(f->left);
        }
        if(f->right!= NULL){
        	q.push(f->right);
        } 

	}}
	return ;

}


int main(){
	node *root = build();
	/*PrePrint(root);
	cout<<endl;
	InPrint(root);
	cout<<endl;
	PostPrint(root);
	cout<<endl;*/
/*printAllLevel(root);
cout<<endl;
bfs(root);
cout<<"Count of nodes "<<countNode(root);
cout<<"\nSum of nodes is "<<sumOfNodes(root);
*/
cout<<diameter(root);
}
