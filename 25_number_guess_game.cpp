#include <iostream>

int main()
{

    using std::cin;
    using std::cout;

    int num = 0;
    int guess = 0;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "****** NUMBER GUESSING GAME ******\n";

    do
    {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too high!\n";
        }
        else if (guess < num)
        {
            cout << "Too low!\n";
        }
        else
        {
            cout << "YOU'VE GOT THE RIGHT NUMBER!\nwith an attempts of: " << tries << " tries" << '\n';
        }
    } while (guess != num);

    cout << "**********************************\n";

    return 0;
}