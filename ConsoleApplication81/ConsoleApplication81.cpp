#include <iostream>

class Coin {
private:
    bool choice;
    char user_choice;

public:

    Coin();

    void flip_coin() {
        while (true) {
            std::cout << "Vi hotet prodolshit (y/n)" << std::endl;
            std::cin >> user_choice;
            if (user_choice == 'y')
                choice = rand() % 2;
                getChoice();
            if (user_choice == 'n')
                break;
        }
    }

    void getChoice() {
        if (choice == 1)
            std::cout << "Its eagle bro" << std::endl;
         else
             std::cout << "Its reshka bro" << std::endl;
    }    
};

Coin::Coin() {
    flip_coin();
}

int main()
{
    srand(time(NULL));
    Coin obj;    
}
