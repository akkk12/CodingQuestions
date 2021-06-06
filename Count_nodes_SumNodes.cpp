#include<iostream>
#include<queue>
using namespace std ;
class node {
public:int data ;
node *left ;
node *right;
node(int d){
data = d ;
left = NULL;
right = NULL;
}};
node *build(){
int d ;
cin>>d ;
if(d==-1){
    return NULL;
}
node *root = new node(d);
root->left = build();
root->right = build();
return root;
}
void print(node *root){
if(root == NULL){
    return ;
}
cout<<root->data<<" ";
print(root->left );
print(root->right );

}

int countt(node*root){
if(root == NULL){
   return 0 ;
}
return  countt(root->left) + countt(root->right) + 1 ;
}
int sum(node*root){
if(root == NULL){
   return 0 ;
}

return sum(root->left) + sum(root->right) + root->data ;
   }
int main(){
    node *root = build();
    print(root);
    cout<<endl;
   cout<<"Count is "<<countt(root);
   cout<<"\n SUm is "<<sum(root);
return 0;
}

