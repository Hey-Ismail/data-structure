#include <iostream>
using namespace std;
struct node
{
    int data;
    //*This is a pointer to the next(named link) node in the linked list.
    struct node *link;
};

void print_data(struct node *head)
{
    if (head == nullptr)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        struct node *prt = nullptr;
        prt = head;
        cout << "There are ";
        while (prt != nullptr)
        {
            cout << prt->data << " ";
            prt = prt->link;
        }
        cout << "elements" << endl;
    }
}
int main()
{

    //*What dose this "struct node *head" means?
    //*This declares a pointer named head that can point to a struct node.
    //*This head pointer will be used to keep track of the start of the linked list.
    //*here malloc is used to allocate memory for the head pointer.
    struct node *head = (struct node *)malloc(sizeof(struct node));
    //* This means setting the data of the head-node to 69 with '->' this operator.
    head->data = 69;

    //*The line is setting the link member of the head node to nullptr.
    //*In the context of a linked list, this means that the head node does not point to any other node,
    //*indicating that it's the last node in the list.
    //*The nullptr is a special value that signifies that the pointer doesn't point to any valid location.
    head->link = nullptr;

    //*This line creates a new node  and sets its data to 96.
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 96;

    current->link = nullptr;
    //*This line means that head is now pointing to the current nodes(96) address.
    head->link = current;

    //*This line creates a new node  and sets its data to 96.
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 89;
    current->link = nullptr;
    //*This line means that head is now pointing to the current nodes(89) address.
    head->link->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 80;
    // cout << "Data is the current node :" << current->data << endl;
    current->link = nullptr;
    head->link->link->link = current;

    print_data(head);

    return 0;
}