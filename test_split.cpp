/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include <cstddef>

int main(int argc, char* argv[])
{
  Node* prev = NULL;
  Node* in = NULL;
	Node * current; 
  /*
  {
    current = new Node(28-i, prev);
    prev = current;
  }*/
	in = current;

  Node* odds = NULL;
  Node* evens = NULL;

  split (in, odds, evens);

  Node* head = odds;
	Node* previous;

	/*(head != NULL)
	{
		std::cout << head -> value << std::endl;
		previous = head;
		head = head -> next;
		delete previous;
		std::cout << "del" << std::endl;
	}
	
  head = evens;
	(head != NULL)
	{
		previous = head;
		head = head -> next;
		delete previous;
	}*/

}
