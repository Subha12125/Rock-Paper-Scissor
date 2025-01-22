#include <bits/stdc++.h>
using namespace std;

string computer_choice_function(){
    //! Random Choice Generation
    int random = rand()%3;
    if(random == 0) return "Rock";
    else if(random == 1) return "Paper";
    else return "Sisor";
}
//? Winning Conditions
string win_function(string user_choice , string computer_choice){
    if(user_choice == computer_choice) return "Tie";
    else if(((user_choice == "Paper") && (user_choice == "Rock"))
    || ((user_choice == "Sisor") && (user_choice == "Paper"))
    ||((user_choice == "Rock") && (user_choice == "Paper"))
    ) return "!!Congratulation,You win !!";
    else {
        return "!!Computer Wins!!";
    }
}
int main()
{
    srand(time(NULL));
    string user_choice , computer_choice;
    char choice_again;
    
    //! DO WHILE loop for playing the game 
    do{
        cout << "Enter your choice (Rock/Paper/Sisor):" ;
        cin >> user_choice ;
        computer_choice = computer_choice_function();

        //! User output and Computer output
        cout << "Your choice is : " << user_choice << endl;
        cout << "Computer choice is : " << computer_choice << endl;

        //?Winning Function Implement
        string result;
        result = win_function(user_choice, computer_choice);
        cout << result << endl;

        //? Play the game again 
        cout << "You want to play again (Y/N)";
        cin >> choice_again ;
    } while(choice_again =='Y' || choice_again=='y');

    //! Result Output 
    cout << "Thanks for playing "<< endl;
    return 0;
}