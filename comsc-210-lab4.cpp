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

    vector<Color> myVec1;

    Color color1 = {32,45,91};
    
    myVec1.push_back(color1);

    cout << myVec1[0].Green << endl;

    cout << myVec1[0].Blue << endl;

    cout << myVec1[0].Red << endl;

    return 0;

}