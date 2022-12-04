#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

map<string, float> tree;
map<string, float>::iterator it;
int treeNumber;

void input() {
    string treeName;
    
    while (getline(cin, treeName)) {
        tree[treeName]++;
        treeNumber++;
    }
}

void print() {
    cout << fixed;
    cout.precision(4);

    for (it = tree.begin(); it != tree.end(); it++) {
        cout << it->first << ' ' << it->second * 100 / (double)treeNumber  << '\n';
    }
}

int main() {
    input();
    print();
}