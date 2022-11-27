#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> cardsYouHave;
vector<int> cardsYouWantToKnow;

void inputCardYouHave() {
    int number, card;
    cin >> number;

    for (int i = 0; i < number; i++) {
        cin >> card;
        cardsYouHave.push_back(card);
    }

    sort(cardsYouHave.begin(), cardsYouHave.end());
}

void inputCardYouWantToKnow() {
    int finder, cardNumber;
    cin >> finder;

    for (int i = 0; i < finder; i++) {
        cin >> cardNumber;
        cardsYouWantToKnow.push_back(cardNumber);
    }
}

void countCard() {
    int count;

    for (int i = 0; i < cardsYouWantToKnow.size(); i++) {
        count = upper_bound(cardsYouHave.begin(), cardsYouHave.end(), cardsYouWantToKnow[i]) - lower_bound(cardsYouHave.begin(), cardsYouHave.end(), cardsYouWantToKnow[i]);
        cout << count << " ";
    }
}

int main() {
    inputCardYouHave();
    inputCardYouWantToKnow();
    countCard();
}