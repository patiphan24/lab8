/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include<iostream>
using namespace std;

int main(){
    int x;
    int y;
    int z;
    cout << "Enter your age: ";
    cin >> x;
    if(x<=25){
        cout << "Enter your height: ";
        cin >> y;
        if(y<100){
            cout << "Your character = " << "Chopper";
        }else{
            if(y<180){
                cout << "Your character = " << "Usopp";
            }else{
                cout << "Enter your bounty: ";
                cin >> z;
                    if(z>1100000000){
                        cout << "Your character = " << "Zoro";
                    }else{
                        cout << "Your character = " << "Sanji";
                    }
                    }
            }
    }else if(x<61){
        cout << "Enter your bounty: ";
        cin >> z;
        if(z>500000000){
           cout << "Your character = " << "Jinbe"; 
        }else{
            cout << "Your character = " << "Franky";
        }
    }else{
        cout << "Your character = " << "Brook";
    }

}