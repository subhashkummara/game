#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber = rand() % 100 +1;
    int guess; 
    int attempts{0};
    cout<<" Guess the number between 1 and 100:"<<endl;
    do{
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts++;
        if(guess <secretNumber)
        {
            cout<<"Too low! Try again."<<endl;

        }
        else if (guess > secretNumber)
        {
            cout<< "Too high ! Try again !"<<endl;

        }
        else
        {
            cout<<"Congratulations you did great , you find pout the correct guess "<<endl;
        }
    }while(guess !=secretNumber);
    return 0;
}
    