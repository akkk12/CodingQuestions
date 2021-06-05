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

void find_mid2(node*head){

int l = length(head);
while((l/2)!=0)
{
    head = head ->next ;
    l = l/2;
}
cout<<"Mid is :"<<head->data ;
cout<<endl;
}

node* find_mid(node*head){
node*slow , *fast;
slow =  head ;
fast = head ->next;
if(head == NULL || head ->next ==NULL){
    return head ;
}

while(fast->next !=NULL && fast!=NULL){
    slow = slow ->next ;
    fast = fast->next->next;
}
return slow;

}




istream& operator>>(istream &is , node *&head){
head = input();
return is;
}

int main(){
node *head;
   cin>>head;
  cout<<head;
  node* mid = find_mid(head);
  find_mid2(head);
  cout<<mid->data;
  //cout<<"herer";8 6 5 4 5 6
//rever(head);
//recursive_reverse(head);
//cout<<head;

return 0 ;
}

