/*
 * Search an expression using DFS.
 */

#include <stdio.h>    /* scanf, printf */
#include <stdlib.h>   /* abort */
#include <stdbool.h>    /* bool, true, false */
#include "dfs.h"

void DFT (node * root)
{
  // Implement DFS
  // Hint: You can use print_node, print_tree and/or print_stack.

  stack *new = malloc(sizeof(stack)); //creates a stack//
  new -> next = NULL; 
  push(new, root); //pushes the root onto the stack// 

  while(!(isEmpty(new))){ //loops until the stack is empty//
    stack *temp = pop(new); 
    print_node(temp -> node); 
    if(temp->node->rchild !=NULL){ //pushes rchild to stack when found//
      push(new,temp->node-> rchild);
    }
    if (temp->node->lchild){ //pushes lchild to stack when found//
     push(new,temp->node->lchild);
  } 
}
}
node *make_node (int num, node * left, node * right)
{
  node *p = malloc(sizeof(node)); 
  p -> num = num; 
  p -> lchild = left; 
  p -> rchild = right; 
  p -> visited = false; //sets visited to false// 
  return p;
}

void free_node (node * p)
{
}

void print_node (node * p)
{

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("%d", p->num);
}

void print_tree (node * p, int depth)
{
  for (int i = 0; i < depth; i = i + 1)
    printf (" ");
  printf ("| ");

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("[%d]\n", p->num);

  if (p->lchild)
    {
      print_tree (p->lchild, depth + 1);
    }

  if (p->rchild)
    print_tree (p->rchild, depth + 1);
}

stack *push (stack * topp, node * node)
{ 
  stack *n = malloc(sizeof(stack)); //allocates memory to a new stack//
  n-> node = node; 
  n->next = topp-> next; 
  topp->next = n; 
}

bool isEmpty (stack * topp)
{ 
  if (topp->next = NULL) //if the stack is empty//
  return true;
   else
  return false; 
}

node *top (stack * topp)
{
  return topp->node;
}

// Utility function to pop topp  
// element from the stack 

stack *pop (stack * topp) 
{
  stack *t = topp -> next;
  topp-> next = topp->next->next; 

  return t;
}

void print_stack (stack * topp)
{
  struct stack *temp = topp;

  while (temp != NULL)
    {

      print_node (temp->node);
      printf ("\n");

      temp = temp->next;
    }

  printf ("====\n");

  return;
}