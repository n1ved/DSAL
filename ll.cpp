#include <bits/stdc++.h>
#include <cstddef>
#include <cstdlib>
#include <iostream>

struct node{
    int data;
    node* next;
};

node* insert_front(node* head , int data){
    node* newNode = new node();
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

node* insert_rear(node* head, int data){
    node* newNode = new node();
    newNode->data = data;
    newNode->next = NULL;
    node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
    return  head;
}

node* delete_rear(node* head){
    node* temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    node* todel = temp->next;
    temp->next=NULL;
    delete(todel);
    return head;
}

node* delete_front(node* head){
    node* todel = head;
    head = head->next;
    delete(todel);
    return  head;
}

void display(node* head){
    if(!head){
        std::cout<<"Empty"<<std::endl;
        return;
    }
    node* curser = head;
    while(curser){
        std::cout<<curser->data<<" -> ";
        curser = curser->next;
    }
    std::cout<<"NULL"<<std::endl;
}


int main(){
    node* head = new node();
    head->data = 1;
    head->next = NULL;

    head = insert_front(head, 10);
    head = insert_rear(head, 20);
    head = delete_rear(head);
    head = delete_front(head);

    display(head);
    return 0;
}
