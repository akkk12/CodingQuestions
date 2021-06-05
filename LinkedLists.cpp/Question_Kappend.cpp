#include<iostream>
using namespace std ;

class node {
public:
    int data;
    node *next ;
    node(int d){
    data = d ;
    next =NULL;
    };

void insathead(node *head , int data){
if(head ==NULL){
    head = new node(d);
    return;
}
 node *temp ;
 temp = new node(d);
 temp->next =head ;
 head =temp ;
}

node * input(){
    node* head =NULL;
int d ;
cin>>d;
while(d!=-1){
 insathead(head ,d);
 cin>>d;
}
return head ;
}
int main(){
    node* head = input(head);
    print(head);



}
