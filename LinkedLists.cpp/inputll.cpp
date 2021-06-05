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

node* reversek(node *&head , int k){

node *curr = head ;
node *nextnode = NULL;
node *prev = NULL;
int c= 0 ;
while(curr!=NULL && c<k){
     nextnode = curr->next ;
    curr->next = prev;
    prev = curr;
    curr = nextnode ;
    c++;
}

if(nextnode!=NULL){
head->next = reversek(nextnode,k);
}

return prev;
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



istream& operator>>(istream &is , node *&head){
head = input();
return is;
}

void fun(node **head_ref)
{
    node *temp = NULL;
    node *current = *head_ref;

    while (current !=  NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if(temp != NULL )
        *head_ref = temp->prev;
}


int main(){
node *head;
   cin>>head;
  cout<<head;
fun(&head);
cout<<head;
//rever(head);
//recursive_reverse(head);
//node * newhead =  reversek(head,2);
//cout<<newhead;


//cout<<head;

return 0 ;
}
