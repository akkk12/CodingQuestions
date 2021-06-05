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


node* knode(node*head,int k){
node*slow = head ;
node* fast = head ;
int i = 1;
if(k>length(head)){
    cout<<"Not Possible!!";
return nullptr;

}
while(i<k)
{ fast=fast->next ;
    i++;
  }
while(fast!=NULL && fast->next!=NULL)
{fast = fast ->next ;
slow = slow ->next ;
}

return slow ;

}


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

node * mergeSort(node *head)
{

    if(head==NULL || head->next== NULL){
        return head ;
    }

    node * a= head ;
    node *mid = find_mid(head);
   node * b = mid->next;
    mid->next =NULL;
    a = mergeSort(a);
    b= mergeSort(b);
    node *c = mergell(a,b);
    return c ;

}


istream& operator>>(istream &is , node *&head){
head = input();
return is;
}

int main(){
node *head;
   cin>>head;
  cout<<head;
  //node* mid = find_mid(head);
  //find_mid2(head);
  //cout<<mid->data;
  //cout<<"herer";8 6 5 4 5 6
//rever(head);
//recursive_reverse(head);
//cout<<head;

//node *k = knode(head , 3);
//if(k!=NULL){
//cout<<"\nKthe node is :"<<k->data;
//}

head = mergeSort(head);
cout<<head;
return 0 ;
}

