#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

void show(const vector<int>& p) {
    cout << "Vector: ";
    for (int i : p)
        cout << i << " ";
    cout << "\n" << endl;
}

int main() {
    if (min_element(c.begin(), c.end()) - c.begin() < max_element(c.begin(), c.end()) - c.begin()) {
        cout << "Sum between max and min: " << accumulate(min_element(c.begin(), c.end()) + 1,
            max_element(c.begin(), c.end()) - 1, 0) << endl;
    }
    else {
        cout << "Min elem is placed after max elem" << endl;
    }
}

