#include <iostream>
#include <list>

using namespace std;

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

    // Show beginners scores:
    for (int i : beginners)
    {
        cout << "Beginners scores: " << i << endl;
    }

    // Show profi scores:
    for (int i : prof)
    {
        cout << "Profy scores: " << i << endl;
    }

    return 0;
}
