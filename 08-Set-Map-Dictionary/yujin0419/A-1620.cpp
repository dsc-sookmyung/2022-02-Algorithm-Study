#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<string, int> pokemonBook;
vector<string> pokemonName;
vector<string> result;
int pokemonNumber, question;

void input() {
    cin >> pokemonNumber >> question;

    for(int i = 1; i <= pokemonNumber; i++) {
        string name;
        cin >> name;
        pokemonName.push_back(name);
        pokemonBook.insert(make_pair(name, i));
    }
}

void findBook() {
    for (int i = 0; i < question; i++) {
        string problem;
        int problemNumber;

        cin >> problem;

        if (problem[0] >= 65 && problem[0] <= 90) {
            result.push_back(to_string(pokemonBook[problem]));
        }
        else {
            result.push_back(pokemonName[stoi(problem) - 1]);
        }
    }
}

void print() {
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }
}

int main() {
    input();
    findBook();
    print();
}