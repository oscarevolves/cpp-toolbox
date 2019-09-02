// Assignment 02 - Blackjack
// Command line game that plays a simplified version of blackjack where we don’t worry about aces and face cards

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int get_random_seed();
int get_random_number();
int get_user_cards();
int get_new_card();

int check_if_dealer_moves(int dlr_total);
int check_who_wins(int usr_total, int dlr_total);
int check_if_bust(int dlr_total, int usr_total);


int main()
{
    get_random_seed();

    int card_1, card_2, card_3, card_4, card_5, card_6, card_7;
    int total_1, total_2, total_3, total_4, total_5, total_6;

    card_1 = get_random_number();
    card_2 = get_random_number();
    card_3 = get_random_number();
    card_4 = get_random_number();
    card_5 = get_random_number();
    card_6 = get_random_number();
    card_7 = get_random_number();
    total_1 = card_1 + card_2;
    total_2 = card_1 + card_2 + card_3;
    total_3 = card_1 + card_2 + card_3 + card_4;
    total_4 = card_1 + card_2 + card_3 + card_4 + card_5;
    total_5 = card_1 + card_2 + card_3 + card_4 + card_5 + card_6;
    total_5 = card_1 + card_2 + card_3 + card_4 + card_5 + card_6 + card_7;

    cout << "Your starting cards: " << card_1 << "," << card_2 << endl;
    cout << "Total: " << total_1 << endl;

// A loop that handles the Play-Again functionality
char play_again = 'y';
// while (play_again != 'n')

cout << "Play again? (y/n): ";
cin >> play_again;
    if (play_again = 'y')
    {  
        cout << "New card: " << card_3 << endl;
        cout << "Total: " << total_2 << endl;
        // check if user busts
        if (total_2 >= 22)
        {
            cout << "Bust. " << "You Loose" << endl;
            return 0;
        }

        cout << "Play again? (y/n): ";
        cin >> play_again;
    }
        if (play_again = 'y')
        {
            cout << "New card: " << card_4 << endl;
            cout << "Total: " << total_3 << endl;
            if (total_3 >= 22)
            {
                cout << "Bust. " << "You Loose" << endl;
                return 0;
            }

            cout << "Play again? (y/n): ";
            cin >> play_again;
            if (play_again = 'y')
            {
                cout << "New card: " << card_5 << endl;
                cout << "Total: " << total_4 << endl;
                if (total_4 >= 22)
                {
                    cout << "Bust. " << "You Loose" << endl;
                    return 0;
                    cout << "Play again? (y/n): ";
                    cin >> play_again;
                }
                if (play_again = 'y')
                {
                    cout << "New card: " << card_6 << endl;
                    cout << "Total: " << total_5 << endl;
                    if (total_4 >= 22)
                    {
                        cout << "Bust. " << "You Loose" << endl;
                        return 0;
                        cout << "Play again? (y/n): ";
                        cin >> play_again;
                        if (play_again = 'y')
                        {
                            cout << "New card: " << card_7 << endl;
                            cout << "Total: " << total_6 << endl;
                            if (total_4 >= 22)
                            {
                                cout << "Bust. " << "You Loose" << endl;
                                return 0;
                            }
                        }
                    }

                }
            }
        }

}




// call this once (and only once) at the beginning of your program
int get_random_seed()
{
    // generate a seed using time function to start rand() function
    unsigned seed = time(0);
    srand(seed);
}

int get_random_number()
{
    int random_number;
      // get new card number: up to and including 10 and add one so we never get 0.
    random_number = 1 + rand() % 10;
    return random_number;
}




// generate and print two random cards. players get two cards
int get_user_cards()
{


}

int get_new_card()
{
    int card;
    int new_card;
    new_card = get_random_number();
    cout << new_card << endl;
}

// Check to see if the user busts in each loop
int check_if_bust(int dlr_total, int usr_total)
{
    // check if user busts
    if (usr_total >= 22)
    cout << "Bust. " << "You Loose" << endl;

    // check if dealer busts
    if (dlr_total >= 22)  
    cout << "Dealer Busts. " << "You Win" << endl;
}

int check_if_dealer_moves(int dlr_total)
{
    char moves = 'y';
    while (moves != 'n')
    {
    if (dlr_total < 17)
      {
        moves = 'y';
        // test
        // cout << "yes moves" << endl;
      }
    else 
      moves = 'n'; 
      // test
      // cout << "no moves" << endl;
      return 0;
}
}
int check_who_wins(int usr_total, int dlr_total)
{
    //    player does not win or lose money
    if (usr_total == dlr_total)
        cout << "Push. " << "You tie " << endl;
         
    //    whoever has the higher total wins
    if (dlr_total < usr_total)
    cout << "You Win" << endl;
        
    if (dlr_total > usr_total)
    cout << "You Loose" << endl;
}