#include<iostream>
using namespace std ;

class node{
public:
	int data;
	node *next;
	node(int n){
		data = n ;
		next =NULL;
	}};


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



int length(node *head){
int c =0;
	while(head!=NULL){
		c++;
		head = head->next;
	}
return c;
}

node* knode(node*&head,int k){
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
  node*prev =NULL;
while(fast!=NULL && fast->next!=NULL)
{fast = fast ->next ;
prev = slow;
slow = slow ->next ;
}
prev->next =NULL;
fast->next =head;

return slow ;

}
void buildll(node *&head,int N ){

while(N--){
    int data;
    cin>>data;
    insertAtTail(head,data);
}
}


void print(node *head )
{
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head ->next;
	}
	cout<<endl;
}
int main(){
int k,n ;
node *head =NULL;
cin>>n;
buildll(head,n);
cin>>k;
node * newhead = knode(head,k);
print(newhead);
	return 0;
}
