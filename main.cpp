#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main() {
    int player_choice, computer_choice;
    int player_wins = 0, computer_wins = 0, rounds = 0;
    char play_again;

    cout << "These are the rules:\n";
    cout << "A.Paper Covers Rock and Disproves Spock\n";
    cout << "B.Rock Crushes Scissors and Lizard\n";
    cout << "C.Scissors Cuts Paper Decapitates Lizard\n";
    cout << "D.Lizard Eats Paper and Poisons Spock \n";
    cout << "E.Spock Smashes Scissors and Vaporizes Rock\n";

    do {
        rounds++;

        cout << "0 for Rock\n"<<"1 for Paper\n"<<"2 for Scissors\n"<<"3 for Lizard\n"<<"4 for Spocks\n";
        cout << "\nEnter your choice: ";
        cin >> player_choice;


        while(player_choice < 0 || player_choice > 4) {
            cout << "Invalid choice! Please choose 0, 1, 2, 3, or 4.\n";
            cin >> player_choice;
        }



        switch (player_choice) {
            case 0: cout << "You chose Rock\n"; break;
            case 1: cout << "You chose Paper\n"; break;
            case 2: cout << "You chose Scissors\n"; break;
            case 3: cout << "You chose Lizard\n"; break;
            case 4: cout << "You chose Spocks\n"; break;
        }

        srand(time(NULL));
        computer_choice = rand() % 5;


        cout << "Computer's choice: ";
        switch (computer_choice) {
            case 0: cout << "Rock\n"; break;
            case 1: cout << "Paper\n"; break;
            case 2: cout << "Scissors\n"; break;
            case 3: cout << "Lizard\n"; break;
            case 4: cout << "Spocks\n"; break;
        }

        if (player_choice == computer_choice) {
        cout << "Draw\n";
        }
        else {
            switch (player_choice) {
                case 0:
                if (computer_choice == 2 || computer_choice == 3) {
                    cout << "You WIN!\n";
                    player_wins++;
                }
                else {
                    cout << "You Lost!\n";
                    computer_wins++;
                }break;
                case 1:
                    if ( computer_choice == 0 || computer_choice == 4 ) {
                        cout << "You WIN!\n";
                        player_wins++;
                    }
                else {
                    cout << "You Lost!\n";
                    computer_wins++;
                }break;
                case 2:
                    if (computer_choice == 1 || computer_choice == 3) {
                        cout << "You WIN!\n";
                        player_wins++;
                    }
                else {
                    cout << "You Lost!\n";
                    computer_wins++;
                }break;
                case 3:
                    if (computer_choice == 1 || computer_choice == 4) {
                        cout << "You WIN!\n";
                        player_wins++;
                    }
                else {
                    cout << "You Lost!\n";
                    computer_wins++;
                }break;
                case 4:
                    if (computer_choice == 0 || computer_choice == 2) {
                        cout << "You WIN!\n";
                        player_wins++;
                    }
                else {
                    cout << "You Lost!\n";
                    computer_wins++;
                }break;


            }
        }


        cout << "Do you want to play again? (y/n): ";
        cin >> play_again;




    } while (play_again == 'y' || play_again == 'Y');


    cout << "\nGame Over! Final score:\n";
    cout << "Player wins: " << player_wins << "\n";
    cout << "Computer wins: " << computer_wins << "\n";
    cout << "Total rounds: " << rounds << "\n";

    return 0;
}

