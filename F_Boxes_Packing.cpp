#include <unordered_set>
#include <iostream>
using namespace std;
int main() {
    unordered_set<int> unorderedSet;

    // Insert elements
    unorderedSet.insert(5);
    unorderedSet.insert(2);
    unorderedSet.insert(8);
    unorderedSet.insert(9);

    // Get an iterator to the second-to-last element
    auto it = *unorderedSet.begin();

    cout << it << endl;

    return 0;
}
