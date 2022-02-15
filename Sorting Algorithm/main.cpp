#include <iostream>
#include "LinkedList.h"
#include "Node.h"
#include <list>
#include <iterator>
#include <chrono> 
#include <ctime>
using namespace std;
using namespace std::chrono;
void showlist(list <int> g)
{
	list <int> ::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << *it<<" -> ";
	cout << "End" << endl;
}

int main() {
	int mainChoice;
	cout << "*********Welcome*********" << endl;
	cout << "Choose\n 1. Performance Analysis \n 2. Exit\n Please Enter : ";
	cin >> mainChoice;
	if (mainChoice == 1) {
		srand(time(0));
		{
			cout << "\nPerforming Sort Test for 100 Random Integers By Selection Sort\n";
			LinkedList* linkedlist1 = new LinkedList();
			for (int i = 0; i < 100; i++)
			{
				int value = (rand() % 1000) + 1;
				Node* ptr = new Node(value);
				linkedlist1->addNodeAtEnd(ptr);

			}
			auto start = chrono::high_resolution_clock::now();
			linkedlist1->sortBySelectionSort();
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Sort 100 Integers is: "
				<< duration.count() << " microseconds" << endl;



			cout << "\nPerforming Sort Test for 100 Random Integers By Insertion Sort\n";
			LinkedList* linkedlist2 = new LinkedList();
			for (int i = 0; i < 100; i++)
			{
				int value = (rand() % 1000) + 1;
				Node* ptr = new Node(value);
				linkedlist2->addNodeAtEnd(ptr);
			}
			auto start1 = chrono::high_resolution_clock::now();
			linkedlist2->sortByInsertionSort();
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Sort 100 Integers is: "
				<< duration1.count() << " microseconds" << endl;





			cout << "\nPerforming Delete Test for 100 Random Integers By BuiltIn Sort\n";
			list<int> list;
			for (int i = 0; i < 100; i++)
			{
				int value = (rand() % 1000) + 1;
				list.push_back(value);
			}
			auto start2 = chrono::high_resolution_clock::now();
			list.sort();
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 100 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;




		}

		{
			cout << "\nPerforming Sort Test for 1000 Random Integers By Selection Sort\n";
			LinkedList* linkedlist1 = new LinkedList();
			for (int i = 0; i < 1000; i++)
			{
				int value = (rand() % 1000) + 1;
				Node* ptr = new Node(value);
				linkedlist1->addNodeAtEnd(ptr);

			}
			auto start = chrono::high_resolution_clock::now();
			linkedlist1->sortBySelectionSort();
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Sort 1000 Integers is: "
				<< duration.count() << " microseconds" << endl;



			cout << "\nPerforming Sort Test for 1000 Random Integers By Insertion Sort\n";
			LinkedList* linkedlist2 = new LinkedList();
			for (int i = 0; i < 1000; i++)
			{
				int value = (rand() % 1000) + 1;
				Node* ptr = new Node(value);
				linkedlist2->addNodeAtEnd(ptr);
			}
			auto start1 = chrono::high_resolution_clock::now();
			linkedlist2->sortByInsertionSort();
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Sort 1000 Integers is: "
				<< duration1.count() << " microseconds" << endl;





			cout << "\nPerforming Delete Test for 1000 Random Integers By BuiltIn Sort\n";
			list<int> list;
			for (int i = 0; i < 100; i++)
			{
				int value = (rand() % 1000) + 1;
				list.push_back(value);
			}
			auto start2 = chrono::high_resolution_clock::now();
			list.sort();
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 1000 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;


		}



		{
			cout << "\nPerforming Sort Test for 10000 Random Integers By Selection Sort\n";
			LinkedList* linkedlist1 = new LinkedList();
			for (int i = 0; i < 10000; i++)
			{
				int value = (rand() % 1000) + 1;
				Node* ptr = new Node(value);
				linkedlist1->addNodeAtEnd(ptr);

			}
			auto start = chrono::high_resolution_clock::now();
			linkedlist1->sortBySelectionSort();
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Sort 100 Integers is: "
				<< duration.count() << " microseconds" << endl;



			cout << "\nPerforming Sort Test for 10000 Random Integers By Insertion Sort\n";
			LinkedList* linkedlist2 = new LinkedList();
			for (int i = 0; i < 10000; i++)
			{
				int value = (rand() % 1000) + 1;
				Node* ptr = new Node(value);
				linkedlist2->addNodeAtEnd(ptr);
			}
			auto start1 = chrono::high_resolution_clock::now();
			linkedlist2->sortByInsertionSort();
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Sort 100 Integers is: "
				<< duration1.count() << " microseconds" << endl;





			cout << "\nPerforming Delete Test for 10000 Random Integers By BuiltIn Sort\n";
			list<int> list;
			for (int i = 0; i < 10000; i++)
			{
				int value = (rand() % 1000) + 1;
				list.push_back(value);
			}
			auto start2 = chrono::high_resolution_clock::now();
			list.sort();
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 100 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;




		}



		{
			cout << "\nPerforming Sort Test for 100000 Random Integers By Selection Sort\n";
			LinkedList* linkedlist1 = new LinkedList();
			for (int i = 0; i < 100; i++)
			{
				int value = (rand() % 1000) + 1;
				Node* ptr = new Node(value);
				linkedlist1->addNodeAtEnd(ptr);

			}
			auto start = chrono::high_resolution_clock::now();
			linkedlist1->sortBySelectionSort();
			auto stop = chrono::high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(stop - start);
			cout << "Time to Sort 100000 Integers is: "
				<< duration.count() << " microseconds" << endl;



			cout << "\nPerforming Sort Test for 100000 Random Integers By Insertion Sort\n";
			LinkedList* linkedlist2 = new LinkedList();
			for (int i = 0; i < 100; i++)
			{
				int value = (rand() % 1000) + 1;
				Node* ptr = new Node(value);
				linkedlist2->addNodeAtEnd(ptr);
			}
			auto start1 = chrono::high_resolution_clock::now();
			linkedlist2->sortByInsertionSort();
			auto stop1 = chrono::high_resolution_clock::now();
			auto duration1 = duration_cast<microseconds>(stop1 - start1);
			cout << "Time to Sort 100000 Integers is: "
				<< duration1.count() << " microseconds" << endl;





			cout << "\nPerforming Delete Test for 100000 Random Integers By BuiltIn Sort\n";
			list<int> list;
			for (int i = 0; i < 100; i++)
			{
				int value = (rand() % 1000) + 1;
				list.push_back(value);
			}
			auto start2 = chrono::high_resolution_clock::now();
			list.sort();
			auto stop2 = chrono::high_resolution_clock::now();
			auto duration2 = duration_cast<microseconds>(stop2 - start2);
			cout << "Time to Delete 100000 Integers is: "
				<< duration2.count() << " microseconds\n\n\n" << endl;




		}

	}
	else {
		cout << "You Exited the Code!" << endl;
	}
	return 0;


}