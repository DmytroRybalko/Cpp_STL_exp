#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a list of integers
    list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Print the elements of the list
    cout << "Elements in the list: ";
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
