#include <iostream>
using namespace std;
#include "Node.cpp"

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1) //-1 for termination
    {
        Node *newNode = new Node(data); //dynamically
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        cin >> data;
    }
    return head;
}

void print(Node *head) //pass the address of the first node of linked list,with this we can traverse whole linked list
{
    Node *temp = head; // to not loose the head value we store the head in temp
    while (temp != NULL)
    {
        cout << temp->data << " "; //temp is a a pointer ,we are using arrow here telling that go to address and in that address print the data block in it
        temp = temp->next;         //to update the head value to next node adrress
    }
}

int main()
{
    Node *head = takeInput();
    print(head);

    /**
    //statically
    Node n1(1); //creates a node n1 with data and null [1|null]

    //note the linked list 1st node is called head node
    Node *head = &n1; // to store address of 1st node, we create head pointer of data type node and store the address of 1st node in it.

    Node n2(2); //creates a node n2 with data and null [2|null]
    Node n3(3); //creates a node n3 with data and null [3|null]
    Node n4(4); //creates a node n4 with data and null [4|null]
    Node n5(5); //creates a node n5 with data and null [5|null]

    n1.next = &n2; //connects n1 with n2 [1|n2's address]  & is used because to store the address
    n2.next = &n3; //connects n2 with n3 [2|n3's address]
    n3.next = &n4; //connects n3 with n4 [3|n4's address]
    n4.next = &n5; //connects n4 with n5 [5|n5's address]

    print(head); **/

    //dynamically

    // Node *n3 = new Node(10);
    /**note :: when we do dynamic allocation two blocks get created one actual block in which content is placed [10|NULL] 
    and other is pointer variable n3=[address] in which the address of actual block is stored**/

    // Node *head = n3;

    // Node *n4 = new Node(20);  [20|null] and n4=[address of actual block]
    // n3->next = n4; // since n3 is pointer we use arrow to point to next and store the address of n4 (note not &n4 bcs n4 itself consists address)
}