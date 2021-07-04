class Node
{
public:
    int data;
    Node *next; //to store the address of next node address heence Node data type .(and pointer to store the address)

    Node(int data) //constructor
    {
        this->data = data;
        next = NULL;
    }
};
