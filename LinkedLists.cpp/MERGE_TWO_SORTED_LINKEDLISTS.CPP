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


int main(){
node *head = NULL;
node *head2 = NULL;
int t ;
cin>>t;
while(t--){int n1,n2;
cin>>n1;
buildll(head,n1);
cin>>n2;
buildll(head2,n2);
node *result = mergell(head,head2);
//print(head);
//print(head2);
print(result);
}
return 0 ;
}


