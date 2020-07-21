#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    bool is_running = true;
    char input = 0;
    int min = 0;
    int max = 101;
    int guess = -1;
    while (is_running) {
        guess = int(min / 2.0 + max / 2.0);
        cout << "my guess is " << guess << "\n"
             << "is it correct? (y/n) ";
        cin >> input;
        if (input == 'y') {
            is_running = false;
        } else {
            cout << "is your number bigger (>) or smaller (<)? ";
            cin >> input;
            if (input == '>') {
                min = guess;
            } else {
                max = guess;
            }
        }
    }
    cout << "hehe, guessed it!! it was " << guess << endl;
}
