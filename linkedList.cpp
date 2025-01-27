#include<iostream>
using namespace std; 

struct node
{
               int data ; 
               node* next ; 
};



int printInReverse(node* head){
               if(head!= NULL){
               printInReverse(head->next);
               cout<<head->data<<endl;
               }
}

int print(node* head){
               if(head!= NULL){
               cout<<head->data<<endl;
               printInReverse(head->next);
               }
}


int main(){
               node*  head= new node();

               head->data = 10 ; 
               head->next = NULL;

               node * second = new node();
               second->data = 20 ;
               second->next = NULL ; 
               head->next = second; 
               node * third = new node();
               third->data = 30 ;
               third->next = NULL ; 
               third->next = NULL; 
               second->next = third; 
               print(head);
               cout<<"printing the list in reverse"<<endl;
               printInReverse(head);
               
}