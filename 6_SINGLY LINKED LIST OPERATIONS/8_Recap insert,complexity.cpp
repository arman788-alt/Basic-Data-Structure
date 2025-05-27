#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};



void print_linekd_list(Node *head)//O(N) complexity, jekhane N hocche total node er size..
{
    Node *tmp = head;
    while (tmp != NULL) // node joto gula totobar loop ghurbe..so O(N)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}



//Size of All given Node
int size(Node *head)//overall: O(N)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL) // ekahne Null na pawa porjonton manee node er sesh porjonto jabe ....orthat node size poriman. so,O(N)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}



//insert at any position.
void insert(Node *head, int pos, int val)//overall: O(N)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)//O(N) karon pos ..total node er size er soman hote pare.
    {
        tmp = tmp->next;
    }
    // tmp = pos-1
    newNode->next = tmp->next;
    tmp->next = newNode;
}



void insert_head(Node *&head, int val) //Complexity O(1) : bcz ekhane kono ber ber loop chaliye kaj kortese na..
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}




//node e jotoi new node insert kori na keno, sesh node jeno tail eei hoy tar jonno logic: 
void insert_tail(Node *&head, Node *&tail, int val)//O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL) // head NULL mane list e kichoi nai,,, tokhon newnode jeta insert krbo oitay head, oitay tail bujay..
    {
        head = newNode;
        tail = newNode; 
        return;
    }
    tail->next = newNode; // ekhane proti bare tail e insert korle tail update kore tail last node dhore rakhe, etee new node tail e insert korte ashle notun kore loop use kora drkr hoinh ager moto..
    tail = newNode;
}





int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linekd_list(head);
    cout << "Tail-> " << tail->val << endl;

    int pos, val;

    cout<<"Enter position: ";
    cin >> pos;
    cout <<"Enter value: ";
    cin >> val;

    if (pos > size(head))//pos jodi node er size theke boro hoy....tokhon pos no/index nmbr invalid hbee.
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)  //pos = 0 index hole, head node bujay
    {
        insert_head(head, val);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert(head, pos, val); //any position
    }

    print_linekd_list(head);
    cout << "Tail-> " << tail->val << endl;
    return 0;
}