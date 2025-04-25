#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

/* void printList(std::list<int>& ulist)
{
    auto print = [](const int& n) { cout << n << ' '; };
    std::cout << "Beginners scores: ";
    std::for_each(ulist.begin(), ulist.end(), print);
} */

int main() {
    
    list<int> allPlayers = {2, 9, 6, 7, 3, 1, 4, 8, 3, 2, 9};
    list<int> beginners; //rating 1-5
    list<int> prof; //rating 6-10

    // Add players to the beginners list

    // Realize via for loop
    for (int i : allPlayers)
    {
        if (i < 6)
        {
            beginners.push_back(i);
        }
        else
        {
            prof.push_back(i);
        }
    }

    // Realize via algorithm


    // Realize via lambda

    // Show beginners & profy scores:
    auto print = [](const int& n) { cout << n << ' '; };
    
    std::cout << "Beginners scores: ";
    std::for_each(beginners.begin(), beginners.end(), print);
    std::cout << endl;

    std::cout << "Profy scores: ";
    std::for_each(prof.begin(), prof.end(), print);
    std::cout << endl;
    
    return 0;
}
