#include <iostream>
using namespace std;

class Robot{
    private:
        int speed;
        int battery;
    public:
        void setSpeed(int value){
            if (value>=0 && value<= 100){
                speed = value;
            }
            else{
                cout << "Speed must be between 0 and 100." << endl;
            }
            cout << "Robot speed set to " << speed << endl;
        }

        void setBattery(int value){
            if (value>=0 && value<= 100){
                battery = value;
            }
            else{
                cout << "Battery level must be between 0 and 100." << endl;
            }
            cout << "Robot battery level set to " << battery << endl;
        }

        void moveForward(int speed, int battery){
            cout << "Robot is moving forward at speed= " << speed << endl;
        }

        void moveBackward(int speed, int battery){
            cout << "Robot is moving backward at speed=" << speed << endl;
        }

        void moveRight(int speed, int battery){
            cout << "Robot is moving right at speed="<< speed << endl;
        }

        void moveLeft(int speed, int battery){
            cout << "Robot is moving left at speed=" << speed<< endl;
        }

        void displayStatus(int speed, int battery){
            cout<< "Speed="<< speed << ", Battery= "<< battery << endl;
        }
};

int main(){
    Robot r;
    char move;
    cout<<"Enter speed: ";
    int speed;
    cin>> speed;
    r.setSpeed(speed);
    cout<<"Enter battery: ";
    int battery;
    cin>> battery;
    r.setBattery(battery);
    int a=1;

    while(a==1){
        cout<<"Enter commands: "<<endl;
        cin>> move;
        switch (move){
            case 'f':
                r.moveForward(speed, battery);
                battery -= 5;
                r.displayStatus(speed, battery);
                
                break;
            case 'b':
                r.moveBackward(speed, battery);
                battery -= 5;
                r.displayStatus(speed, battery);
                break;
            case 'r':
                r.moveRight(speed, battery);
                battery -= 5;
                r.displayStatus(speed, battery);
                break;
            case 'l':
                r.moveLeft(speed, battery);
                battery -= 5;
                r.displayStatus(speed, battery);
                break;
            case 'n':
                a=0;
                cout<<"Exiting the program."<<endl;
                break;
            default:
                cout<<"Invalid command."<<endl;
        }

    }

}