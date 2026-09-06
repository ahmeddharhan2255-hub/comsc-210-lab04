// COMSC-210 | Lab 3 | Ahmad Dharhan

#include <iostream>
#include <vector>

using namespace std;

struct Color 
{
    int Red;
    int Green;
    int Blue;
};

int main(){

    Color color1 = {32,45,91};
    
    cout << color1.Red << endl;

    cout << color1.Green << endl;

    cout << color1.Blue << endl;

    return 0;

}