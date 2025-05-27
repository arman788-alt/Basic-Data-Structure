#include<bits/stdc++.h>
using namespace std;

class Node
{  public:
    int val;
     Node* next;

  
  Node(int val) // contructor
  {
    this->val = val;
    this->next = NULL;
  }
};



int main()
{
  // create dynamic object/Node/group.

  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* c = new Node(40);


//linked korbo sob node er sathe node ke.
head->next = a;
a->next = b;
b->next = c;


Node* temp = head;

while(temp!= NULL)
{
    cout << temp->val << endl;

    temp = temp->next;


}




/* // abar same node er value print korte chaile.
temp = head;

while(temp!= NULL)
{
    cout << temp->val << endl;

    temp = temp->next;


}

*/

    
    return 0;
}
