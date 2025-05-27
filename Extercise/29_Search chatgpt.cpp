#include <iostream>

class Node {
public:
    int val;
    Node* Next;

    Node(int val) {
        this->val = val;
        this->Next = nullptr;
    }
};

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->Next = newNode;
    tail = newNode;
}

void delete_list(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->Next;
        delete temp;
    }
}

int main() {
    int t;
    std::cout << "testcase: ";
    std::cin >> t;

    while (t--) {
        Node* head = nullptr;
        Node* tail = nullptr;

        int val;
        std::cout << "Val: ";
        while (std::cin >> val && val != -1) {
            insert_tail(head, tail, val);
        }

        int x;
        std::cout << "Enter x: ";
        std::cin >> x;

        Node* tmp = head;
        int pos = 0;
        bool flag = false;
        while (tmp != nullptr) {
            if (tmp->val == x) {
                flag = true;
                break;
            }
            pos++;
            tmp = tmp->Next;
        }

        if (flag) {
            std::cout << pos << std::endl;
        } else {
            std::cout << "-1" << std::endl;
        }

        // Clean up the memory
        delete_list(head);
    }

    return 0;
}
