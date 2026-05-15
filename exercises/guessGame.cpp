#include <iostream>
#include <random>

using namespace std;
int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10);

    int randomNumber = dis(gen);
    int userNumber = 0;

    while (userNumber != randomNumber) {
        cout << "Tente acertar o numero de 1 a 10: " << endl;
        cin >> userNumber;

        if (userNumber == randomNumber) {
            break;
        }
    }

    cout << "Parabens voce acertou o numero!" << endl;
}