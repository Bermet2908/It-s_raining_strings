
#include "raining.hpp"
#include <algorithm>
#include <iostream>

using namespace std;
void Sort(vector<string>& business) {
    sort(business.begin(), business.end());

    if (business.size() == 1) {
        cout << "\nYour business is:\n\n";
    } else {
        cout << "\nYour businesses are:\n\n";
    }

    for (const auto& name : business) {
        cout << "    " << name << "\n";
    }
    cout << endl;
}

