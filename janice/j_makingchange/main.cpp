#include <iostream>

using namespace std;

int main()
{
    /* step 1 : declaring the variables */
    // inputs :
    double itemprice, amountgiven;
    // outputs :
    int twenties, tens, fives, ones, quarters, dimes, nickles, pennies; // note: change this to double if that's what the prof wants
    double change, remainder;

    /* step 2 : creating a user interface to type in the amount of money and store them as input */
    cout << "#-------------Janice's Cashier Register-------------#" << endl << endl;

    cout << "Price of purchased item : ";
    cin >> itemprice;
    cout << endl;

    cout << "Amount given : ";
    cin >> amountgiven;
    cout << endl;

    cout << endl << "------------------------------------------------------" << endl << endl;

    /* step 3 : calculations */
    change = amountgiven - itemprice;
    twenties = change/20;
    remainder = change - twenties*20;
    tens = remainder/10;
    remainder = remainder - tens*10; // alternative "cooler" method : you can also do : "remainder -= tens*10"
    fives = remainder/5;
    remainder -= fives*5;
    ones = remainder; //note that they are not actually equal, because "ones" is an int and takes only the number in front of the dot.
                      //e.g. if remainder is 3.55, ones will be 3.
    remainder -= ones;
    quarters = remainder/0.25;
    remainder -= quarters*0.25;
    dimes = remainder/0.10;
    remainder -= dimes*0.10;
    nickles = remainder/0.05;
    remainder -= nickles*0.05;
    pennies = remainder/0.01;

    /* step 4 : display your results or output */
    cout << "change : " << change << endl << endl;
    cout << "$20 : " << twenties << endl;
    cout << "$10 : " << tens << endl;
    cout << "$5 : " << fives << endl;
    cout << "$1 : " << ones << endl;
    cout << "25c : " << quarters << endl;
    cout << "10c : " << dimes << endl;
    cout << "5c : " << nickles << endl;
    cout << "1c : " << pennies << endl << endl;

    cout << "END OF PROGRAM" << endl;

    return 0;
}

