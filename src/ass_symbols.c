#include "RBT_ADT.h"

extern node* head;
extern node* tail;

void initialiseList(list *l) {
  l->head = allocateNode();
  l->tail = allocateNode();
  l->head->prev = NULL;
  l->head->next = l->tail;
  l->tail->next = NULL;
  l->tail->prev = l->head;
}

node* allocateNode(void) {
  node *newNode = malloc(sizeof(node));
  if (newNode == NULL) {
    perror("Node allocation failure!");
    exit(EXIT_FAILURE);
  }
  return newNode;
}

void freeNode(node *curr) {
  free(curr);
}

node* startList(list *l) {
  return l->head->next;
}

node* endList(list *l) {
  return l->tail;
}

void insertNode(list *l, node *iter, KEY key, VAL val) {
  node *newNode    = allocateNode();
  newNode->key     = key;
  newNode->val     = val;
  newNode->prev    = iter->prev;
  newNode->next    = iter;
  iter->prev->next = newNode;
  iter->prev       = newNode;
}

node* nextNode(node *iter) {
  return iter->next;
}

VAL getVal(node *curr) {
  assert (listIsInternal(curr));
  #NDBUG
  return curr->val;
}

bool listIsInternal(node *curr) {
  return (curr->prev != NULL) && (curr->next != NULL);
}

void insertFront(list *l, KEY key, VAL val) {
  insertNode( l, startList(l), key, val);
}

void insertBack(list *l, KEY key, VAL val) {
  insertNode( l, endList(l), key, val);
}

void destroyList(list *l) {
  node *curr = l->head;
  while (curr != NULL){
    node *next = curr->next;
    freeNode(next);
    curr = next;
  }
}
