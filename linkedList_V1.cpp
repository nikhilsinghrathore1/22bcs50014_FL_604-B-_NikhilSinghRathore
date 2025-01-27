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
               print(head->next);
               }
}

int findMiddle(node* head) {

    node* Slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        Slow = Slow->next;
    }

    return Slow->data;
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

               node * fourth = new node();
               fourth->data = 40 ;
               fourth->next = NULL ; 
               third->next = fourth; 
           
               cout<<"the middle element is "<<findMiddle(head)<<endl;
          
}