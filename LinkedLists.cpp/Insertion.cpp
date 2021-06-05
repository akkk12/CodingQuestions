#include<iostream>
using namespace std ;
class node{
public:
    int data;
    node* next ;
    node(int d){
    data = d ;
    next = NULL ;
    }};
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
void insertAtTail(node *&head ,int d){
if(head == NULL){
    head = new node(d);
    return ;
}
node* tail = head ;
while(tail->next!=NULL){
    tail =tail ->next;
}
node *da;
da = new node(d);
tail->next = da;


    }

int length(node * head){
int cnt = 0 ;
while(head!=NULL){
    head = head->next ;
    cnt ++ ;
}
return cnt;
}


void insMid(node *&head, int d ,int p){
if(p==0||head==NULL){
    insertAtHead(head,d);

}
else if(p> length(head)){
    insertAtTail(head,d);
}
else{
   node *temp = head;
       int i = 1 ;
while(i<=p-1){
    temp = temp ->next ;
   i++;
}
node *newnode ;
newnode = new node(d);
newnode->next = temp->next ;
temp->next = newnode;

}}



// if it is *& then pass by reference and linked list will be printed twice
//but if *head then twice because actual is not changed.
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;

    }
    cout<<endl;
}

void deletehead(node *& head ){

if(head == NULL){
    return;
}
else
cout<<"deleted node "<<head->data<<endl;
    node *temp = head ->next ;
    delete head ;
    head = temp;
}



void delatmid(node *&head , int p){
if(p==0 || head ==NULL){
    deletehead(head);
}

else if(p>length(head)){
    cout<<"Deletion not possible"<<endl;

}

else
{int i = 1;
node *prev =NULL;
 node *temp = head ;
 while(i<p){
prev = temp ;
    temp = temp->next ;

    i++;
 }

  prev->next = temp->next;
  delete temp;

}
}

bool searchll(node *head , int key){
node *temp = head ;
while(temp!=NULL){
        if(temp->data == key){
            return true;

        }
temp = temp ->next ;
return false;

}
}
bool recsearch(node *head , int key){
if(head == NULL){
    return false;
}

if(head->data == key){
    return true;
}
else return recsearch(head->next ,key );}
int main(){
node *head = NULL;
insertAtHead(head,3);
insertAtHead(head,2);
insertAtHead(head,1);
insertAtHead(head,0);
//print(head);
cout<<endl;
insMid(head ,9,3);
insertAtTail(head,56);
print(head);
//print(head);
//deletehead(head);
//deletehead(head);

//print(head);
delatmid(head ,2);
print(head);
int key ;
cin>>key ;

cout<<searchll(head ,key );
if(recsearch(head,key)){
 cout<<"Found";
}
else {
    cout<<"Not found";
}
return 0;
}
