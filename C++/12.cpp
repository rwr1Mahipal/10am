#include <iostream>
using namespace std;

class Game{
    public:
       virtual void MoveUp(){
            cout<<"Move from console"<<endl;
        }
        virtual void Payment() = 0;
};

class Keyboard : public Game{
    int amount=100;
    public:
        void MoveUp(){
            cout<<"MOve from keyboard"<<endl;
        }
        // void Payment(){
        //     cout <<"Payment made by card of ruppes: "<<amount<<endl;
        // }
};

int main(){
    // Keyboard k;

    // k.MoveUp();
    // k.Game::MoveUp();

    Game* g = new Keyboard;

    g->MoveUp();
    g->Payment();
}