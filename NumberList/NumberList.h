// Specification file for the NumberList class
#pragma once

class NumberList
{
private:
	// Declare a structure for the list
	struct ListNode
	{
		int value;           // The value in this node
		struct ListNode *next;  // To point to the next node
	};

	ListNode *head;            // List head pointer
	ListNode *tail;

public:
	// Constructor
	NumberList()
	{
		head = nullptr;
		tail = nullptr;
	}

	// Destructor
	~NumberList();
	void operator= (const NumberList& other);

	NumberList(const NumberList &n);
	

	// Linked list operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);
	void displayList() const;
};

