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




void insertAtHead(node *&head , int d){

if(head==NULL){
    head = new node(d);
    return;
}

node *temp;
temp = new node(d);
temp->next = head;
head = temp ;
}
node* input(){
node *head = NULL;
int d ;
cin>>d;
node *temp =head;
while(d!=-1){

    insertAtHead(head ,d);
    cin>>d;

    }

 return head;

}

node* recursive_reverse(node *head ){

if(head->next==NULL || head == nullptr){
    return head ;
}

     node *smallhead = recursive_reverse(head->next);

node*temp = smallhead;
 while(temp->next !=NULL){
    temp = temp->next;
 }
 head->next = NULL;
 temp->next = head ;

return smallhead ;
//we can also find temp as temp = head ->next simply!!
}


void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;

    }
    cout<<endl;
}

ostream& operator<<(ostream &os ,node *head){
print(head);
return os ;
}

node* rever(node * &head){
node *c = head ;
node *prev = NULL;
node *nextnode = NULL;
while(c!=NULL){
    nextnode = c->next ;
    c->next = prev ;
    prev = c ;
    c = nextnode ;
}
head = prev ;
return head ;
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
istream& operator>>(istream &is , node *&head){
head = input();
return is;
}

int main(){
node *head;
node *head2;
int t ;
//cin>>t;
int n1,n2;
cin>>n1;
buildll(head,n1);
cin>>n2;
buildll(head2,n2);
node *result = mergell(head,head2);
print(head);
print(head2);
print(result);

return 0 ;
}

