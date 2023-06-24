#include <iostream>
#include <vector>

using namespace std;

void powerSet(vector<int>& set, vector<int>& subset, int index) {
    if (index == set.size()) {
        for (int i = 0; i < subset.size(); i++) {
            cout << subset[i] << " ";
        }
        cout << endl;
    } else {
        subset.push_back(set[index]);
        powerSet(set, subset, index+1);
        subset.pop_back();
        powerSet(set, subset, index+1);
    }
}