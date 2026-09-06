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

void struct_generator(int n);

const int MIN = 25; MAX = 50;

int main(){

    vector<Color> myVec1;

    Color color1 = {32,45,91};
    
    myVec1.push_back(color1);

    cout << myVec1[0].Green << endl;

    cout << myVec1[0].Blue << endl;

    cout << myVec1[0].Red << endl;

    return 0;

}

void struct_generator(int n){

    int val = rand() % (MAX-MIN+1) + MIN;


    for (int i = 0; i < n; i++){
        srand(time(0));
        Color color1;

        color1.Red = val;
        color1.Blue = val;
        color1.Green = val;

        myVec1.push_back(color1);
    }

}