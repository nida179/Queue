#include <iostream>
#include <stdlib.h>

struct Node{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int value){
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;

    if(front==NULL && rear ==NULL){
        front = rear = temp;
        return;
    }
    rear -> next =temp;
    rear = temp;
}

void dequeue(){
    Node *curr = front;
    if(front == NULL) return;
    if(front == rear){
        front = rear = NULL;
    }
    else {
        front = front->next;
    }
    
    free(curr);
    std::cout << "Dequeued: " << curr->data << "\n";
}
void display(){
    if(front==NULL && rear ==NULL){
        std::cout << "QUEUE IS EMPTY!!\n";
        return;
    }
    Node *curr = front;
    while(curr!=NULL){
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << "\n";
}
int getSize(){
     if(front==NULL && rear ==NULL){
        //std::cout << "QUEUE IS EMPTY!!\n";
        return 0;
    }
    int count = 0;
    Node *curr = front;
    while(curr!=NULL){
        curr = curr->next;
        count++;
    }
    return count;
}
int peek(){
    if(front==NULL && rear ==NULL){
        std::cout << "QUEUE IS EMPTY!!\n";
        return -1;
    }
    Node *curr = front;
    return curr->data;
}
int main(){

    while(true){
   std::cout << "Select 1 to enqueue: \n";
   std::cout << "Select 2 to dequeue: \n";
   std::cout << "Select 3 to : display \n";
   std::cout << "Select 4 to : getSize \n";
   std::cout << "Select 5 to : peek \n";
   std::cout << "Select 6 to exit: \n";
    int choice;
   std::cin >> choice;

    switch(choice){

     case 1: {int data;
           std::cout << "Enter the value: ";
           std::cin >> data;
           enqueue(data);
           break;}
    case 2:
           dequeue();
           display();
           break;
     case 3: display();
     break;
     case 4: std::cout << getSize() << "\n";
     break;
     case 5: std::cout << peek() << "\n";
     break;

     case 6: std:: cout << "EXITING!!";
             break;
     default: std::cout << "Invalid choice\n";;
     }
     if(choice==6) break;
    }
  return 0;
}
