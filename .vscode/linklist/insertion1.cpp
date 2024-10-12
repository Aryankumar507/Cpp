#include<bits/stdc++.h>
using namespace std ;

struct Node {
    int data;
    struct Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void insertEnd(Node* &head , int End){
    Node* newNode = new Node(End) ;
    if(head == nullptr){
        head = newNode ;
    }
    else{
        Node* temp = head ;
        while(temp->next != nullptr){
            temp = temp ->next ;
        }
        temp -> next = newNode ;
    } 

}

void deletion(Node* &head,int val){
    Node* temp = head;
    if(head == nullptr){
        return;
    }
    while(temp->next->data!=val){
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
}

void deletion_head(Node* &head){
    Node* todelet = head;
    head = head->next;
    delete todelet;
}
//Using While Loop
Node* reverse(Node* &head){
    Node* prevptr = nullptr;
    Node* Currptr = head ;
    Node* nextptr;
    while (Currptr!=nullptr)
    {
        nextptr = Currptr->next;
        Currptr->next = prevptr;
        prevptr = Currptr;
        Currptr = nextptr;
        
    }
    return prevptr;
}

//Using Recursion
Node* reverse_recursion(Node* &head){
    if(head==nullptr||head->next==nullptr){
        return head;
    }
    Node* newhead = reverse_recursion(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newhead;
}

void printLL(Node* head){
    if(head == nullptr) return ;

    cout << head->data << " " ;
    printLL(head->next) ;
}

int main(){

    struct Node* head = nullptr;

    insertEnd(head , 103) ;
    insertEnd(head , 125) ;
    insertEnd(head , 169) ;
    //deletion(head,125);
    printLL(head) ;

    struct Node* newhead = reverse_recursion(head);
    printLL(newhead);
}