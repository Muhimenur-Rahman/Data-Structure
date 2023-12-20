#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string address;
    Node* next;
    Node* prev;

    Node(string addr) {
        address = addr;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insert(string addr) {
        Node* newNode = new Node(addr);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    Node* visit(string addr,Node*    current) {
        Node* curr = head;
        while (curr != nullptr) {
            if (curr->address == addr) {
                     {
                cout << curr->address << endl;
            }
                return curr;
            }
           else if (curr->next == nullptr) {
                cout << "Not Available" << endl;
                  return current;
            }
            curr = curr->next;

        }
        return nullptr;
    }

    Node* moveNext(Node* current) {

        if (current->next == nullptr)
        {
             cout << "Not Available" << endl;

           return current;

         }
         else {  current = current->next;
             cout << current->address << endl;
            return  current;
         }
    }

   Node* movePrev(Node* current) {

        if (current->prev == nullptr)
        {
             cout << "Not Available" << endl;

           return current;

         }
        else {  current = current->prev;
             cout << current->address << endl;
            return  current;

         }

    }
};

int main() {
    DoublyLinkedList dll;
    string address;
    while (true) {
        cin >> address;
        if (address == "end") {
            break;
        }
        dll.insert(address);
    }

    int Q;
    cin >> Q;

    string command, addr;
    cin >> command >> addr;
    Node * current=NULL;
  current = dll.visit(addr,current);
    if (current == nullptr) {
        cout << "Not Available" << endl;
    } else {
      //  cout << current->address << endl;
    }

    while (Q--) {
        cin >> command;
        if (command == "next") {
             Node*    curre=dll.moveNext(current);
              current = curre;
        } else if (command == "prev") {

             Node*    curren =dll.movePrev(current);
             current = curren;
        } else if (command == "visit") {
            cin >> addr;
            current = dll.visit(addr,current);

        }
    }

    return 0;
}