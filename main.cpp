#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;
`
int main()
{
    cout << "This is a game 'rock-scissors-paper'. Your enemy is a computer. " << endl;
    cout << endl;
    cout << "The game will continue untill you print 'n' chatacter. " << endl;
cout << endl;

    vector<string> options {"Rock", "Scissors", "Paper"};
    bool next_try {true};
    char user_will;
    string user_choice;
              while (next_try)
    {
        srand(time(NULL));
        string comp_choice {options[rand()%options.size()]};
        cout << "Choose: 'Rock', 'Scissors' or 'Paper'. " << endl;
        cin >> user_choice;
        char user_first_l {user_choice[0]};
        char comp_first_l {comp_choice[0]};
        switch (user_first_l) {
        case 'R':
            if (comp_first_l == user_first_l)
            {cout << "The computer choosed: " << comp_choice << ". \n" << "No winner!" << endl; }
            else
            if (comp_first_l == 'S' || comp_first_l == 's')
            {cout << "The computer choosed: " << comp_choice << ". \n" << "You win!. Congratulations!" << endl; }
            else
            if (comp_first_l == 'P' || comp_first_l == 'p')
            {cout << "The computer choosed: " << comp_choice << ". \n" << "You loose!. Maybe next time?" << endl;}
            break;
        case 'S':
            if (comp_first_l == user_first_l)
            {cout << "The computer choosed: " << comp_choice << ". \n" << "No winner!" << endl; }
            else
            if (comp_first_l == 'P' || comp_first_l == 'p')
            {cout << "The computer choosed: " << comp_choice << ". \n" << "You win!. Congratulations!" << endl;}
            else
            if (comp_first_l == 'S' || comp_first_l == 's')
            {cout << "The computer choosed: " << comp_choice << ". \n" << "You loose!. Maybe next time?" << endl; }
            break;
         case 'P':
            if (comp_first_l == user_first_l)
            {cout << "The computer choosed: " << comp_choice << ". \n" << "No winner!" << endl; }
            else
            if (comp_first_l == 'R' || comp_first_l == 'r')
            {cout << "The computer choosed: " << comp_choice << ". \n" << "You win!. Congratulations!" << endl; }
            else
            if (comp_first_l == 'S' || comp_first_l == 's')
            {cout << "The computer choosed: " << comp_choice << ". \n" << "You loose!. Maybe next time?" << endl; }
            break;
        default:
            cout << "Unidentified symbol or word. WRITE DOWN ONE OF THE 3 GIVEN WORDS! " << endl;
            break;
            }
            cout << "\n Would you like to test your luck again? \n Press 'y' to continue and 'n' or any other symbol to quit" << endl;
            cin >> user_will;
            if ( (user_will == 'y') || (user_will == 'Y') )
                next_try = true;
            else next_try = false;
            }
    return 0;
}

