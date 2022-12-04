#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

map<string, int> unheardOf;
vector<string> result;
int neverHeard, neverSeen;

bool neverSeenAndHeard(string personNeverSeen) {
    if (unheardOf[personNeverSeen]) {
        return true;
    }
    else {
        return false;
    }
}

void input() {
    cin >> neverHeard >> neverSeen;

    for (int i = 0; i < neverHeard; i++) {
        string personNeverHeard;
        cin >> personNeverHeard;
        unheardOf.insert(make_pair(personNeverHeard, true));
    }  
}

void checkUnheardOf() {
    for (int i = 0; i < neverSeen; i++) {
        string personNeverSeen;
        cin >> personNeverSeen;
        if (neverSeenAndHeard(personNeverSeen)) {
            result.push_back(personNeverSeen);
        }
    }
}

void print() {
    sort(result.begin(), result.end()); 
    cout << result.size() << '\n';

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }
}

int main() {
    input();
    checkUnheardOf();
    print();
}