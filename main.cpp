#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int input = 0;
    float counter = 0;
    float total = 0;
    while(input != -1) {
        cout << "input num here: ";
        cin >> input;
        cout << endl; 
        if(input == -1) continue;
        counter++;
        total += input;
        cout << "The average of the input numbers: " << total/counter << "% " << endl;
    }
    return 0;
}