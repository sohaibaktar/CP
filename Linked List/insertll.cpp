#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 
class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
//i want to insert a node at first that is head of linked list 
void insertAtHead(Node* &head,Node* &tail,int data){
    //create a new node first
    Node* newNode = new Node(data);
    //check there isany pricious node or not
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        //step1:
        //newNode->data = data;
        //step 2:
        newNode->next = head;
        //step3:
        head = newNode;
    }
}
void insertAtTail(Node* &head , Node* &tail, int data){
    //first create a new node
    Node* newNode = new Node(data);
    //now check id linked list is empty or not
    //if empty
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }else{
        //privious tail ->next goes to newnode
        tail->next = newNode;
        //step 2:
        tail=newNode;
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}
9434488369
noblettr@gmail.com
int findLength(Node* &head){
    Node* temp = head;
    int count =0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;

}
void insertAtPosition(Node* &head,Node* &tail,int position, int data){
    //first create a node
    Node* newNode = new Node(data);
    //check if empty make it head and tail
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    if(position ==0){
            insertAtHead(head,tail,data);
            return;
    }
    if(position >= findLength(head)){
        insertAtTail(head,tail,data);
        return;
    }
        int i= 1;
        Node* prev = head;
        while(i < position){
            prev = prev->next;
            i++;
        }
        Node* curr = prev->next;
        //connect
        newNode->next = curr;
        prev->next = newNode;
    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtHead(head,tail, 30);
    insertAtHead(head,tail, 20);
    insertAtTail(head,tail, 55);
    insertAtTail(head,tail, 69);
    insertAtPosition(head,tail, 3,100);
    cout << "printing..."<< endl;
    print(head);
    cout << endl;
    cout << findLength(head) << endl;

return 0;
}