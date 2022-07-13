#include <iostream>
#include <vector>
using namespace std;
 
// A Linked List Node
struct Node
{
    int data;
    Node* next;
};
 
// Helper function to insert a new node at the beginning of the linked list
void push(Node* &head, int data)
{
    Node* node = new Node();
    node->data = data;
    node->next = head;
 
    head = node;
}
 
// Iterative function to reverse nodes of a linked list
void reverse(Node* &head)
{
    Node* result = NULL;
    Node* current = head;
 
    // Iterate through the list and move/insert each node
    // in front of the result list (like a push of the node)
    while (current != NULL)
    {
        // tricky: note the next node
        Node* next = current->next;
 
        // move the current node onto the result
        current->next = result;
        result = current;
 
        // process next node
        current = next;
    }
 
    // fix head pointer
    head = result;
}
 
// Recursive function to check if two linked lists are equal or not
bool compare(Node* a, Node* b)
{
    // see if both lists are empty
    if (a == NULL && b == NULL) {
        return true;
    }
 
    return a && b && (a->data == b->data) && compare(a->next, b->next);
}
 
// Function to split the linked list into two equal parts and return the
// pointer to the second half
Node* findMiddle(Node* head, bool &odd)
{
    Node *prev = NULL;
    Node *slow = head, *fast = head;
 
    // find the middle pointer
    while (fast && fast->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
 
    // for odd nodes, `fast` still points to the last node
    if (fast) {
        odd = true;
    }
 
    // make next of previous node null
    prev->next = nullptr;
 
    // return middle node
    return slow;
}
 
// Function to check if the linked list is a palindrome or not
bool checkPalindrome(Node* head)
{
    // base case
    if (head == nullptr) {
        return true;
    }
 
    // flag to indicate if the total number of nodes in the linked list is
    // odd or not. It will be passed by reference to `findMiddle()`
    bool odd = false;
 
    // find the second half of the linked list
    Node* mid = findMiddle(head, odd);
 
    // if the total number of nodes is odd, advance mid
    if (odd) {
        mid = mid->next;
    }
 
    // reverse the second half
    reverse(mid);
 
    // compare the first and second half
    return compare(head, mid);
}
 
int main()
{
    // input keys
    
 
    Node* head = NULL;
    for (int i = 5 ; i > 0; i--) {
        push(head, keys[i]);
    }
 
    if (checkPalindrome(head)) {
        cout << "The linked list is a palindrome";
    }
    else {
        cout << "The linked list is not a palindrome";
    }
 
    return 0;
}