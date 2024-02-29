#include <iostream>
#include <string>
#include "linked_list.h"
using namespace std;

Node::Node(string data)
{
    data = data;
    next = nullptr;
}


LinkedList::LinkedList()
{
    head = nullptr;
}
LinkedList::~LinkedList()
{
    Node* current_node = head;
    while (current_node != nullptr)
    {
        Node* tmp = current_node;
        current_node = current_node->next;
        delete tmp;
    }
}


void LinkedList::insert(string data)
{
    Node* new_node = new Node(data);
    if (head == nullptr)
    {
        head = new_node;
    }
    else
    {
        Node* current_node = head;
        while (current_node->next != nullptr)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
    new_node->data = data;
}

void LinkedList::displayALL()
{
    Node* current_node = head;
    while (current_node != nullptr)
    {
        cout << current_node->data << endl;
        current_node = current_node->next;
    }
}

bool LinkedList::search(string data)
{
    Node* current_node = head;
    while (current_node != nullptr)
    {
        if (!current_node->data.compare(data))
        {
            return true;
        }
        current_node = current_node->next;
    }
    return false;
}

void LinkedList::display(string data)
{
    Node* current_node = head;
    while (current_node != nullptr)
    {
        if (!current_node->data.compare(data))
        {
            cout << "Data: " << current_node->data << endl;
        }
        current_node = current_node->next;
    }
}

void LinkedList::remove(string data)
{
    Node* current_node = head;
    Node* previous_node = nullptr;

    while (current_node != nullptr)
    {
        if (!current_node->data.compare(data))
        {
            if (previous_node == nullptr)
            {
                head = current_node->next;
            }
            else
            {
                previous_node->next = current_node->next;
            }
            delete current_node;
            return;
        }
        previous_node = current_node;
        current_node = current_node->next;
    }
}
