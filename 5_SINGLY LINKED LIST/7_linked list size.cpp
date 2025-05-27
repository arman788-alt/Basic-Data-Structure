#include<bits/stdc++.h>
using namespace std;



//logic 
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;

    while(tmp!= NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;

}














