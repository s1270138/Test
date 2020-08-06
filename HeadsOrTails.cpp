#include <bits/stdc++.h>
using namespace std;

int main(){
    srand( (unsigned int)time( NULL ) );

    string name;
    cout << "Who are you?" << endl
         << "> ";
    cin >> name;
    cout << "Hello, " << name << endl;

    int heads = 0, tails = 0;
    cout << "Tossing a coin..." << endl;
    for( int i = 1; i <= 3; i++ ){
        cout << "Round " << i << ": ";
        if( rand() % 2 ){
            cout << "Heads" << endl;
            heads++;
        }else{
            cout << "Tails" << endl;
            tails++;
        }
    }

    cout << "Heads: " << heads << ", Tails: " << tails << endl;
}