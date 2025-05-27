#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void delete_at_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void delete_tail(Node *&head, Node *&tail) // tail er reference nicchi karon tail dlt hoyee, tail bamer node e jabe.
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if (tail == NULL) //jodi ektaa node thake and oita dlt hoye jay she khetre ei condition
    {
        head = NULL;
        return; //return korbo jekhan theke call kora hoisee, karon next line jeno portee naa pare.
                 //karon next line e jate NULL er next acces na kore, korle error dibe tai.
    }
    tail->next = NULL;
}
void delete_head(Node *&head, Node *&tail) // head er reference nicchi karon head dlt hoye, abr head update hoye danee jabe.
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL) //jodi ektaa node thake and oita dlt hoye jay she khetre ei condition.
    {
        tail = NULL;
        return; //karon next line e  jate NULL er next acces na kore, korle error dibe tai..
    }
    head->prev = NULL;
}
int main()
{
    // Node *head = NULL;
    // Node *tail = NULL
    // tahole size hobe--0, size 0 er jonno alada vabe handle korte hoynh, karon dlt hoy size-1 porjonto, size 0 hole dlt hobe 0-1 porjonto, so size 0 hole direct invalid dibee.
    // case:
    // Node *head = new Node(10);
    // Node *tail = head;

    // Or

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos;
    cin >> pos;

    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head, tail);
    }
    else if (pos == size(head) - 1) // size er soman ghore insert kora jay but dlt kora jaynh..size()-1 porjonto dlt kora possible er boro dile error ashbe.
    {
        delete_tail(head, tail);
    }
    else
    {
        delete_at_position(head, pos);
    }

    print_normal(head);
    print_reverse(tail);
    return 0;
}