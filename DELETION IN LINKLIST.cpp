#include<iostream> 
using namespace std; 
int main(){ 
struct node{ 
int data; 
node *next; 
}; 
node *n1=new node(); 
node *n2=new node(); 
node *n3=new node(); 
node *n4=new node(); 
n1->data=100; 
n2->data=200; 
n3->data=300; 
n4->data=400; 
n1->next=n2; 
n2->next=n3; 
n3->next=n4; 
n4->next=n1; 
node *head=n1; 
cout<<"original linklist are"<<endl; 
node *a; 
a=head; 
do{ 
cout<<a->data<<endl; 
a=a->next; 
} 
while(a!=head); 
cout<<endl; 
//insertion in mid 
node *pre; 
int del; 
cout<<" so user which node do you want to delete "<<endl; 
cin>>del; 
node *ptr; 
ptr=head; 
while(ptr->data!=del){ 
pre=ptr; 
ptr=ptr->next; 
} 
pre->next=ptr->next; 
delete(ptr); 
node *b; 
b=head; 
cout<<" after deletion linklist are "<<endl; 
do{ 
cout<<b->data<<endl; 
b=b->next; 
} 
while(b!=head); 
cout<<endl; 
}
