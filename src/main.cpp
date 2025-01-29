#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string name;

        // Constructor
        Player(const char* name){
            Player::name = name;
            cout << "Player " << Player::name << " dibuat" << endl;
        }

        // Destructor
        ~Player(){
            cout << "Player " << Player::name << " dihapus" << endl;
        }
};

void stackWithPointer(Player* &playerPointer){
    Player stackPlayer = Player("Azka");
    playerPointer = &stackPlayer;
}

void heapWithPointer(Player* &playerPointer){
    Player* heapPlayer = new Player("Azka");
    playerPointer = heapPlayer;
}

Player createStackPlayer(){
    Player stackPlayer = Player("Azka stack");
    return stackPlayer;
}

Player* createHeapPlayer(){
    Player* heapPlayer = new Player("Azka heap");
    return heapPlayer;
}

int main(int argc, char const *argv[]){

    {// Delete stack
        Player stackPlayer = Player("Azka");
    }

    {// Deleate Heap
        Player* heapPlayer = new Player("Azka");
        delete heapPlayer;
    }

    cout << "\nMemory Leak" << endl;
    Player* playerPointer1;
    stackWithPointer(playerPointer1);


    Player* playerPointer2;
    heapWithPointer(playerPointer2);

    cout << "\nReturn Object: " << endl;
    Player returnStack = createStackPlayer();
    cout << returnStack.name << endl;

    cout << "\nReturn Object" << endl;
    Player* returnHeap = createHeapPlayer();
    cout << returnHeap->name << endl;
    delete returnHeap;
    return 0;
}
