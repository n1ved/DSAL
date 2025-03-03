#include <iostream>
#include <iterator>
#include <ostream>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

node* insert_front(node* head , int data){
    struct node* newNode = new node();
    newNode->prev = NULL;
    newNode->data = data;
    head->prev = newNode;
    newNode->next = head;
    return newNode;
}

node* insert_rear(node* head,int data){
    node* newNode= new node();
    node* headCopy = head;
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        newNode->prev = NULL;
    }else{
        while(head->next != NULL)
            head = head->next;
        head->next = newNode;
        newNode->prev = head;
    }
    return headCopy;
}

node* rm_rear(node* head){
    node* head_copy = head;
    if(head == NULL){
        std::cerr<<"Nothing to delete"<<std::endl;
    }else{
        while(head->next != NULL){
            head = head->next;
        }
        head = head->prev;
        node* to_delete = head->next;
        head->next = NULL;
        free(to_delete);
    }
    return head_copy;
}

node* rm_front(node* head){
    node* to_remove = head;
    if(head == NULL)
        std::cerr<<"Nothing to remove"<<std::endl;
    else{
        if(head->next != NULL){
            head->next->prev = NULL;
        }
        head = head->next;
    }
    free(to_remove);
    return head;
}

void display(node* head){
    while(head != NULL){
        std::cout<<head->data<<"->";
        head = head->next;
    }
    std::cout<<std::endl;
}

int main(){
    struct node* head = new node();
    head->data = 10;
    head->prev = NULL;
    head->next = NULL;

    head = insert_front(head,10);
    head = insert_front(head,20);
    head = insert_rear(head,50);
    head = rm_rear(head);
    head = rm_front(head);

    display(head);
    return 0;
}