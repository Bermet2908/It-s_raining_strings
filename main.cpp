#include <iostream>
#include <string>
#include <vector>
#include "src/raining.hpp"

using namespace std;

int main() {
    vector<string> business;
    string name;
    string response;

    cout << "Welcome to the Business Sorting Program!\n\n";

    while (true) {
        cout << "Please enter the name of a business:  ";
        getline(cin, name);

        business.push_back(name);
        Sort(business);

        cout << "Another business?  ";
        getline(cin, response);

        for (auto& c : response) c = tolower(c);

        if (response != "y" && response != "yes") {
            cout << "\nThank you for using the Business Sorting Program!\n";
            break;
        }
        cout << endl;
    }

    return 0;
}
