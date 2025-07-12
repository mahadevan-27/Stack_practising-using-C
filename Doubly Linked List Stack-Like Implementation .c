//Doubly Linked List Stack-Like Implementation in C
//push and pop data in stack
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node*next;
    struct Node*prev;
};
  struct Node*head = NULL;
  struct Node*tail = NULL;
  void push(int data)
  {
      struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
      newNode->data = data;
      newNode -> prev = NULL;
      newNode -> next = head;
      if(head!=NULL)
      head -> prev = newNode;
      else
      tail = newNode;
      head = newNode;
  }
  void display()
{
     struct Node* temp=head;
    while(temp!=NULL){
        printf(" %d ->",temp->data);
        temp=temp->next;
    } printf("NULL");
}
 void peek()
    {
        printf("\n peek -> %d\n",head->data);
    }
    void Empty()
    {
        if(head==NULL)
        {
            printf("is Empty\n");
        }
        else
        {
            printf("not Empty\n");
        }
    }
void reve()
{
    struct Node* temp= tail;
    while(temp!=NULL){
        printf(" %d ->",temp->data);
        temp= temp -> prev ;
} printf("NULL");
}
 void cent()
 {
     struct Node *tempb = head;
     struct Node *tempe = tail;
     while (tempb!=tempe)
         if(tempb != tempe){
     tempb = tempb -> next;
         tempe= tempe -> prev;
     }else
         printf("data %d",tempb ->data);
     
 }
  int main()
  {
      push(10);
      push(20);
      push(30);
      push(40);
      display();
      peek(); 
      Empty();
      reve();
      cent();
 } 
