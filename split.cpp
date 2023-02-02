/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
#include <cstddef>

/* Add a prototype for a helper function here if you need */

void split(Node*& in, Node*& odds, Node*& evens)
{
  /* Add code here */
  Node * etemp = evens; //evens temp pointer
  Node * otemp = odds; //odds temp pointer
  
  if (in != NULL)
  {
    if ((in->value) % 2 == 0) //if value is even
    {
      if (evens == NULL)
      {
        evens = in; //initializing even as first even number in list, will keep track of head
        etemp = in; //will be used to connect nodes so head is not lost
      }
      else
      {
        etemp -> next = in; //adding value to evens list
        etemp = etemp -> next; //changing last node of evens to last added even node
      }
      in = in -> next; //to check next number on list
      if (odds != NULL) //two seperate cases as otemp may not be initialized yet
      {
        otemp -> next = NULL; //to cap off the odds list, if done prior to recursion after adding odd node, will add null to in list as well
        split(in, otemp, etemp); //if otemp is already initialized
      }
      else
      {
        split(in, odds, etemp); // if odds is still empty
      }
    }
    //exact same logic as above, just with odd nodes
    else
    {
      if (odds == NULL)
      {
        odds = in; //initializing even as first even number in list, will keep track of head
        otemp = in; //will be used to connect nodes so head is not lost
      }
      else
      {
        otemp-> next = in;
        otemp = otemp -> next;
      }
      in = in->next;
      if (evens != NULL)
      {
        etemp -> next = NULL;
        split(in, otemp, etemp);
      }
      else
      {
        split(in, otemp, evens);
      }
    }
  }
// WRITE YOUR CODE HERE
}
//cc0e50c17ed795fbfb78c0502dd20516830cebe6 git 

/* If you needed a helper function, write it here */
