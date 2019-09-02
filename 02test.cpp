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

    int card_0, card_1, card_2, card_3, card_4, card_5, card_6;
    int total_1, total_2, total_3, total_4, total_5, total_6;

    card_0 = get_random_number();
    card_1 = get_random_number();
    card_2 = get_random_number();
    card_3 = get_random_number();
    card_4 = get_random_number();
    card_5 = get_random_number();
    card_6 = get_random_number();
    total_1 = card_0 + card_1;
    total_2 = card_0 + card_1 + card_2;
    total_3 = card_0 + card_1 + card_2 + card_3;
    total_4 = card_0 + card_1 + card_2 + card_3 + card_4;
    total_5 = card_0 + card_1 + card_2 + card_3 + card_4 + card_5;
    total_5 = card_0 + card_1 + card_2 + card_3 + card_4 + card_5 + card_6;

    int d_card_0, d_card_1, d_card_2, d_card_3, d_card_4, d_card_5, d_card_6, d_card_7;
    int d_total_1, d_total_2, d_total_3, d_total_4, d_total_5, d_total_6;

    d_card_0 = get_random_number();
    d_card_1 = get_random_number();
    d_card_2 = get_random_number();
    d_card_3 = get_random_number();
    d_card_4 = get_random_number();
    d_card_5 = get_random_number();
    d_card_6 = get_random_number();
    d_total_1 = d_card_0 + d_card_1;
    d_total_2 = d_card_0 + d_card_1 + d_card_2;
    d_total_3 = d_card_0 + d_card_1 + d_card_2 + d_card_3;
    d_total_4 = d_card_0 + d_card_1 + d_card_2 + d_card_3 + d_card_4;
    d_total_5 = d_card_0 + d_card_1 + d_card_2 + d_card_3 + d_card_4 + d_card_5;
    d_total_5 = d_card_0 + d_card_1 + d_card_2 + d_card_3 + d_card_4 + d_card_5 + d_card_6;


char d_continue = 'c';
char moves = 'y';

cout << "Dealer starting cards: " << d_card_0 << "," << d_card_1 << endl;
cout << "Total: " << d_total_1 << endl;

// suspense continue
cout << "(c to continue)" << endl;
cin >> d_continue; 

// check if dealer moves
if (d_total_1 < 17)
{
cout << "Dealer gets: " << d_card_2 << endl;
cout << "Total: " << d_total_2 << endl;
}
else
    cout << "Dealer stays " << endl;

// check if bust
if (d_total_2 >= 22)
{
cout << "Dealer Busts. " << "You Win" << endl;
return 0;
}
cout << "(c to continue)" << endl;
cin >> d_continue; 

// check if dealer moves
if (d_total_2 < 17)

cout << "Dealer gets: " << d_card_3 << endl;
cout << "Total: " << d_total_3 << endl;
else
    cout << "Dealer stays " << endl;

// check if bust
if (d_total_3 >= 22)

cout << "Dealer Busts. " << "You Win" << endl;
return 0;

cout << "(c to continue)" << endl;
cin >> d_continue; 

// check if dealer moves
if (d_total_3 < 17)

cout << "Dealer gets: " << d_card_4 << endl;
cout << "Total: " << d_total_4 << endl;
else
    cout << "Dealer stays " << endl;

// check if bust
if (d_total_4 >= 22)

cout << "Dealer Busts. " << "You Win" << endl;
return 0;



}


//    dlr




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