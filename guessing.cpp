#include <iostream>
using namespace std;
int main()
{
    int num, guess, tries = 0;
    srand(time(NULL));
    num = (rand() % 50) + 1;
cout << "Number guessing game" << '\n'
             << "guess a number between 1 to 50 ";
    do
    {
        
        cin >> guess;
        if (num != guess)
        {
            tries += 1;
            cout << "wrong answer  "<<endl;
            if (num < guess)
                cout << "The number is lower.  ";
            else
            {
                cout << "The number is higher.  ";
            }
        }
        else
            cout << "correct";
    } while (num != guess);
}
