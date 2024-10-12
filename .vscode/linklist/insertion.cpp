#include<bits/stdc++.h>
using namespace std;

//making datatype
struct node{
    int data;
    struct node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

//Inserting the data at the end;
void insertend(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n ;
        return ; 
    }
    node* temp = head;
    while(temp->next != NULL){
        node* temp = temp->next;
    } 
    temp->next = n;
}

//Displaying data
void display(node* head){
    node* temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void printLL(node* head){
    if(head == NULL) return ;

    cout << head->data << " " ; 
    printLL(head->next) ; 
}



int main(){
    struct node* head = NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);\

    struct node* aryan = new node(69) ;
    aryan->next = new node(125) ;
    display(aryan);
    printLL(aryan) ; 

}