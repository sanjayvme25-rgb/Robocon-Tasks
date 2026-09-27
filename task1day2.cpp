#include <iostream>
using namespace std;

void turn(int arr[8]){
    if (arr[0] == 1 || arr[1] == 1 || arr[2] == 1) {
        cout << "Line position: left"<<"\nTurn Left" << endl;
    }
    
    else if (arr[5] == 1 || arr[6] == 1 || arr[7] == 1) {
        cout << "Line position: right"<<"\nTurn Right" << endl;
    }
    else if (arr[3] == 1 || arr[4] == 1) {
        cout << "Line position: center"<<"\nMove Forward" << endl;
    }
    else {
        cout << "Line Lost" << endl;
    }
}



int main(){
    int arr[8];
    cout<<"Enter 8 readings:\n";
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    turn(arr);
}