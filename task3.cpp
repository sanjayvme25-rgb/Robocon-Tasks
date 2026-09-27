#include <iostream>
using namespace std;

class Robot{
    private:
        int speed;
    public:
        void moveForward(int value){
            speed = value;
            cout << "Robot is moving forward at speed= " << speed << endl;
        }

        void moveBackward(int value){
            speed = value;
            cout << "Robot is moving backward at speed=" << speed << endl;
        }

        void moveRight(int value){
            speed = value;
            cout << "Robot is moving right at speed="<< speed << endl;
        }

        void moveLeft(int value){
            speed = value;
            cout << "Robot is moving left at speed=" << speed<< endl;
        }
        int getSpeed(){
            return speed;
        }
};  

int main() {
    Robot r;
    int a = 1;
    int speed;
    while(a == 1) {
        char choice;
        cout << "Enter 'f' to move forward, 'b' to move backward, 'r' to move right, 'l' to move left, or 'n' to exit: ";
        cin >> choice;
        cout << "Enter the speed: ";
        cin >> speed;

        switch(choice){
            case 'f':
                r.moveForward(speed);
                break;
            case 'b':
                r.moveBackward(speed);
                break;
            case 'r':
                r.moveRight(speed);
                break;
            case 'l':
                r.moveLeft(speed);
                break;
            case 'n':
                a = 0;
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}