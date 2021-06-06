
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
int height(node*root){
if(root == NULL)
    {

        return NULL;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) + 1 ;
}
int diameter(node*root){
if(root==NULL){
    return 0 ;
}
int h1 = height(root->left);
int h2 = height(root->right);

int op1 = h1 + h2 ;
int op2 = diameter(root->left);
int op3 = diameter(root->right);
return max(op1,max(op2,op3));


}
int main(){
    node *root = build();
    print(root);
    cout<<endl;
   cout<<diameter(root);
return 0;
}
8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
