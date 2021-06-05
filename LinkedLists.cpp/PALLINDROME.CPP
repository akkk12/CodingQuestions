#include<iostream>
using namespace std ;
class node{
public:
    int data;
    node(int d){
    data = d;
    next = NULL;
    }
    node *next;
};







void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;

    }
    cout<<endl;
}




int length(node*head){
int cnt = 0 ;
while(head!=NULL){
    head = head ->next ;
    cnt ++ ;
}
return cnt ;}



node* mergell(node *a , node *b){

if(a==NULL){
  return b;
}

if(b==NULL){
  return a;
}

node *c; //pointer to the head of new linked list
if(a->data < b->data){
  c= a;
  c->next = mergell(a->next , b);
}
else {
  c= b;
  c->next = mergell(a , b->next);
}

return c;


}
void insertAtTail(node*&head,int d){
   node *newnode = new node(d);

   if(head == NULL)
{
    head = newnode;
return; }

node *temp = head ;
while(temp->next!=NULL){
    temp = temp->next;
}
temp->next = newnode;

}

void buildll(node *&head,int N ){

while(N--){
    int data;
    cin>>data;
    insertAtTail(head,data);
}
}


node *reversell(node* head ){
node *curr= head ;
node *prev =nullptr;
node *nextnode = nullptr;
while(curr!=NULL){
    nextnode = curr->next;
    curr->next = prev ;
    prev = curr;
    curr = nextnode;
}
return prev;
}


bool isPalindrome(node*head){
node* start = head ;
node *e = reversell(head);
while(e!=NULL && start!=NULL){
    if((start->data) != (e->data)){
        return false;
    }
}
return true;
}



int main(){
node *head = NULL;
int n ;
cin>>n;
buildll(head,n);

if(isPalindrome(head)){

    cout<<"true";
}
else
    cout<<"false";
return 0 ;
}


