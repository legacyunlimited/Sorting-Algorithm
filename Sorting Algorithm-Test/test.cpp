#include "pch.h"
#include "../Sorting Algorithm/Node.h"
#include "../Sorting Algorithm/LinkedList.h"
#include <list>

TEST(SelectionSortTest, SelectionSort) {
	Node* p1 = new Node(102);
	Node* p2 = new Node(10);
	Node* p3 = new Node(1120);
	Node* p4 = new Node(5);
	Node* p5 = new Node(100);
	LinkedList* linkedList = new LinkedList();
	linkedList->addNodeAtEnd(p1);
	linkedList->addNodeAtEnd(p2);
	linkedList->addNodeAtEnd(p3);
	linkedList->addNodeAtEnd(p4);
	linkedList->addNodeAtEnd(p5);
	linkedList->sortBySelectionSort();
	EXPECT_EQ(linkedList->gethead()->getData(), 5);
	EXPECT_TRUE(true);
}

TEST(InsertionSortTest, InsertionSort) {
	Node* p1 = new Node(102);
	Node* p2 = new Node(10);
	Node* p3 = new Node(1120);
	Node* p4 = new Node(5);
	Node* p5 = new Node(100);
	LinkedList* linkedList = new LinkedList();
	linkedList->addNodeAtEnd(p1);
	linkedList->addNodeAtEnd(p2);
	linkedList->addNodeAtEnd(p3);
	linkedList->addNodeAtEnd(p4);
	linkedList->addNodeAtEnd(p5);
	linkedList->sortByInsertionSort();
	EXPECT_EQ(linkedList->gethead()->getData(), 5);
	EXPECT_TRUE(true);
}
TEST(BuiltInSortTest, BuiltInSortSort) {
	list<int> list1;
	list1.push_back(102);
	list1.push_back(10);
	list1.push_back(1120);
	list1.push_back(5);
	list1.push_back(100);
	list1.push_back(18);
	list1.sort();
	EXPECT_EQ(list1.front(), 5);
	EXPECT_TRUE(true);
}