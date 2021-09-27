#include<stdlib.h>
#include<stdio.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

struct Node* Insert(struct Node* head, int data){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
  temp->data = data;
  temp->next = NULL;
  if(head == NULL){
    head = temp;
  }else{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    temp1 = head;
    while(temp1->next!=NULL){
      temp1= temp1->next;
    }
    temp1->next = temp;
  }
  return head;
}

void Print(struct Node* head){
  while(head!=NULL){
    printf("%d ", head->data);
    head = head->next;
  }
}

// struct Node* Reverse(struct Node* p){
//   p = head;
//   if(p->next==NULL){
//     head = p;
//     return;
//   }
//   Reverse(p->next);
//   struct Node* q = p->next;
//   q->next = p;
//   p->next = NULL;
//   //printf("%d ",p->data);
// }

void Reverse(struct Node* p){
  if(p==NULL) return;
  Reverse(p->next);
  printf("%d ",p->data);
}

int main(){
  struct Node* head = NULL;             //Local Variable
  head = Insert(head,2); 
  head = Insert(head,4); 
  head = Insert(head,6); 
  head = Insert(head,8);        
  Print(head);
  printf("\n");
  Reverse(head);
  //Print(head);
}