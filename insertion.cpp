#include<iostream> 
using namespace std; 
int main(){ 
struct node{ 
int data; 
node *next; 
node* prev; 
}; 
node *n1=new node(); 
node *n2=new node(); 
node *n3=new node(); 
node *n4=new node(); 
n1->data=100; 
n2->data=200; 
n3->data=300; 
n4->data=400; 
n1->prev=NULL; 
n2->prev=n1; 
n3->prev=n2; 
n4->prev=n3; 
n1->next=n2; 
n2->next=n3; 
n3->next=n4; 
n4->next=NULL; 
node *head; 
head=n1; 
cout<<"original linklist"<<endl; 
node *curr=head; 
while(curr!=NULL){ 
cout<<curr->data<<endl; 
curr=curr->next; 
} 
cout<<endl; 
//Insertion at start 
cout<<"when user insert at start "<<endl; 
node *nn1=new node(); 
nn1->data=500; 
nn1->next=head; 
nn1->prev=NULL; 
n1->prev=nn1; 
head=nn1; 
node *current; 
current=head; 
while(current!=NULL){ 
cout<<current->data<<endl; 
current=current->next; 
} 
//Insertion at end! 
node *temp=head; 
while(temp->next!=NULL){ 
temp=temp->next; 
} 
node *nn2=new node; 
nn2->data=600; 
nn2->next=NULL; 
nn2->prev=temp; 
temp->next=nn2; 
node *j=head; 
cout<<"when user insert at end: "<<endl; 
while(j!=NULL){ 
cout<<j->data<<endl; 
j=j->next; 
} 
return 0; 
}