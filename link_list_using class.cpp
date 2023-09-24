#include <iostream>

using  std::cout;
using  std::cin;
using  std::endl;

struct node {
    int key;
    struct node *next;
};

class linked_list {
    private:
        struct node *head;
        struct node *tail;
    public:
        linked_list() {
            head = nullptr;
            tail = nullptr;
        }

        void create(int key) {
            struct node *temp;
            temp = new struct node;
            temp->key = key;
            temp->next = nullptr;
            head = temp;
            tail = head;
        }


        void insert(int key) {
            if (key < head->key) {
                insert_beginning(key);
            }
            else if ((head->next == nullptr) || (key > tail->key)) {
                insert_end(key);
            }
            else {
                insert_middle(key);
            }
        }

        void insert_beginning(int key) {
            if (head->next == nullptr) {
                tail = head;
            }
            struct node *temp;
            temp = new struct node;
            temp->key = key;
            temp->next = head;
            head = temp;
        }

        void insert_end(int key) {
            struct node *temp;
            temp = new struct node;
            temp->key = key;
            temp->next = nullptr;
            if (head->next == nullptr) {
                head->next = temp;
                tail = temp;
            }
            else {
                tail->next = temp;
            }
            tail = temp;
        }


        void insert_middle(int key) {
            struct node *temp;
            temp = new struct node;
            temp->key = key;

            struct node *current = head;
            struct node *prev = current;

            while (current->key < temp->key) {
                prev = current;
                current = current->next;
            }
            prev->next = temp;
            temp->next = current;
        } 

        void delete_node(int key) {
            if (head == nullptr) {
                cout << "List is empty\n";
                return;
            }

            if (head->key == key) {
                if (head->next == nullptr) {
                    delete(head);
                    head = tail = nullptr;
                }
                struct node *temp = head;
                head = head->next;
                delete(temp);
            }
            else {
                struct node *current = head;
                struct node *prev = current;

                while ((current->key != key) && (current->next != nullptr)) {
                    prev = current;
                    current = current->next;
                }

                if ((current->key != key) && (current->next == nullptr)) {
                    cout << "Key not found\n";
                }
                else if ((current->key == key) && (current->next == nullptr)) {
                    tail = prev;
                    prev->next = nullptr;
                    delete(current);
                }
                else {
                    prev->next = current->next;
                    delete(current);
                }

            }
        }

        void search_node(int key) {
            if (head->key == key || tail->key == key) {
                cout << "Node found\n";
                return;
            }
            struct node *current = head;
            while ((current->key != key) && (current->next != nullptr)) {
                current = current->next;
            }

            if (current->key == key) {
                cout << "Node found\n";
            }
            else {
                cout << "Node not found\n";
            }
        }

        void print_nodes(void) {
            struct node *current = head;
            while (current != nullptr) {
                cout << current->key << '\n';
                current = current->next;
            }
        }
};


int main(void) {
    linked_list list;

    list.create(0);

    for (int i = 1; i < 20; ++i) {
        list.insert(i);
    }

    list.search_node(5);
    list.search_node(0);
    list.search_node(-1);

    list.delete_node(19);
    list.delete_node(0);

    list.print_nodes();

    return 0;
}
