#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node* prev;
    Node(int value, Node* next, Node* prev) : value{ value }, next{ next }, prev{ prev } {}
};

class List
{
    Node* head;
    Node* tail;
public:
    List() : head(nullptr), tail(nullptr) {}
    List(const initializer_list<int>& values) : head(nullptr), tail(nullptr)
    {
        for (int val : values)
        {
            AddToTail(val);
        }
    }

    void PrintAll() const
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }

    void AddToHead(int value)
    {
        Node* newNode = new Node(value, head, nullptr);
        if (IsEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            head->prev = newNode;
            head = newNode;
        }
    }

    void AddToTail(int value)
    {
        Node* newNode = new Node(value, nullptr, tail);
        if (IsEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void DeleteByValue(int value)
    {
        Node* current = head;
        while (current != nullptr)
        {
            if (current->value == value)
            {
                if (current == head)
                {
                    head = current->next;
                    if (head != nullptr)
                        head->prev = nullptr;
                    delete current;
                    return;
                }
                else if (current == tail)
                {
                    tail = current->prev;
                    tail->next = nullptr;
                    delete current;
                    return;
                }
                else
                {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                    delete current;
                    return;
                }
            }
            current = current->next;
        }
        cerr << "Value not found!" << endl;
    }

    void RemoveDuplicates()
    {
        Node* current = head;
        while (current != nullptr)
        {
            Node* runner = current->next;
            while (runner != nullptr)
            {
                if (runner->value == current->value)
                {
                    
                    Node* temp = runner;
                    runner->prev->next = runner->next;
                    if (runner->next != nullptr)
                        runner->next->prev = runner->prev;
                    runner = runner->next;
                    delete temp;
                }
                else
                {
                    runner = runner->next;
                }
            }
            current = current->next;
        }
    }

    int FindMax() const {
        
        int maxVal = head->value;
        Node* current = head->next;
        while (current != nullptr) {
            if (current->value > maxVal) {
                maxVal = current->value;
            }
            current = current->next;
        }
        return maxVal;
    }

   
    int FindMin() const {
        
        int minVal = head->value;
        Node* current = head->next;
        while (current != nullptr) {
            if (current->value < minVal) {
                minVal = current->value;
            }
            current = current->next;
        }
        return minVal;
    }

    int operator[](int index) const
    {
        if (index < 0)
        {
            cerr << "Index must be positive!" << endl;
            return -1;
        }

        Node* current = head;
        int count = 0;
        while (current != nullptr)
        {
            if (count == index)
            {
                return current->value;
            }
            current = current->next;
            count++;
        }

        cerr << "Index out of range!" << endl;
        return -1;
    }


    bool IsEmpty() const
    {
        return head == nullptr;
    }

    ~List()
    {
        Node* current = head;
        while (current != nullptr)
        {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};