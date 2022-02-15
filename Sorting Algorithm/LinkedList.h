#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList
{
private:
	Node* head;

public:
	LinkedList() {
		this->head = nullptr;
	}
	LinkedList(Node* head) {
		this->head = head;
	}
	~LinkedList() {
		Node* ptr = this->head;
		while (ptr != nullptr) {
			ptr = ptr->next;
			delete(this->head);
			this->head = ptr;
		}
	}
	void addNodeAtFront(Node* ptr) {
		if (this->head == nullptr) {
			this->head = ptr;
		}
		else {
			ptr->next = this->head;
			this->head = ptr;
		}
	}
	void addNodeAtEnd(Node* ptr) {
		if (this->head == nullptr) {
			this->head = ptr;
		}
		else {
			Node* rptr = this->head;
			while (rptr->next != nullptr) {
				rptr = rptr->next;
			}
			rptr->next = ptr;
		}
	}
	Node* deleteNodeAtFront() {
		Node* ptr = this->head;
		this->head = this->head->next;
		ptr->next = nullptr;
		return ptr;
	}
	Node* deleteNodeAtEnd() {
		Node* bptr = this->head, * rptr = this->head;
		Node* ptr = nullptr;
		while (rptr->next != nullptr) {
			bptr = rptr;
			rptr = rptr->next;
		}
		bptr->next = rptr->next;
		rptr->next = nullptr;
		if (head == rptr)head = nullptr;
		return rptr;
	}
	Node* gethead() {
		return this->head;
	}

	void printList() {
		Node* ptr = this->head;
		while (ptr != nullptr) {
			cout << ptr->getData() << " -> ";
			ptr = ptr->next;
		}
		cout << " End !" << endl;
	}

	void sortBySelectionSort() {
		Node* temp = head;
		while (temp!=nullptr) {
			Node* min = temp;
			Node* ptr = temp->next;

			while (ptr) {
				if (min->getData() > ptr->getData())
					min = ptr;

				ptr = ptr->next;
			}
			int x = temp->getData();
			temp->setData(min->getData());
			min->setData(x);
			temp = temp->next;
		}
	}

	void sortByInsertionSort() {
		Node* ptr = this->head;
		Node* newHead = nullptr;
		while (head!=nullptr)
		{
			ptr = head;
			head = head->next;
			ptr->next = nullptr;
			newHead=insertInSort(newHead, ptr);
		}
		this->head = newHead;
	}
	Node* insertInSort(Node* newHead, Node* node) {
		if (newHead == nullptr && node == nullptr) return nullptr;
		
		if (newHead == nullptr || newHead->getData() > node->getData()) {
			node->next = newHead;
			newHead = node;
		}
		else {
			Node* current = newHead;
			while (current->next != nullptr
				&& current->next->getData() < node->getData()) {
				current = current->next;
			}
			node->next = current->next;
			current->next = node;
		}
		return newHead;
	}
};

