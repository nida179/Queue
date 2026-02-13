#include <iostream>
#include <stdlib.h>

int A[10];
int front = -1;
int rear =-1;
// size =10;
bool isEmpty(){
     if(front == -1 && rear == -1){
        return true;
    }
    else return false;
}
bool isFull(){
    if((rear+1)%10 == front){
        return true;
    } 
    else return false;
}
void enqueue(int value){
    if(isFull()) return;
    if(isEmpty()) front = 0;

    rear = (rear+1)%10 ; // move rear circularly
    A[rear] = value; // Insert at rear position
}
int dequeue(){
    if(isEmpty()){
        return -1;
    }
     int temp = A[front];
    if(front == rear){
        front = -1;
        rear = -1;
    }
   
    front = (front + 1) % 10;
    return temp;
}
void display(){
   if(isEmpty()) return;

   int i = front;
   do{
    std::cout << A[i] << " ";
    i = (i+1)%10;
   } while (i!=(rear+1)%10);
   std::cout << "\n";
}
int peek(){
  if(front == -1 && rear == -1){
        return -1;
    }
    return A[front];
}
int getSize(){
   if(isEmpty()) return 0;

   return (rear-front+10)%10+1;
}
int main(){

    while(true){
   std::cout << "Select 1 to : enqueue: \n";
   std::cout << "Select 2 to : dequeue: \n";
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
           std::cout <<"Dequeued: "<< dequeue()<< "\n";
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