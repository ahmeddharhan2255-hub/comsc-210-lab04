// COMSC-210 | Lab 4 | Ahmad Dharhan

#include <iostream>
#include <vector>

using namespace std;

//struct declaration
struct Color 
{
    int Red;
    int Green;
    int Blue;
};

//Function prototypes
void struct_generator(int n, vector<Color>& myVec1);
void data_display(vector<Color>& myVec1);

const int MIN = 0, MAX = 255;

int main(){

    vector<Color> myVec1;
    
    int n = rand() % (50-25+1) + 25;    

    struct_generator(n, myVec1);

    data_display(myVec1);

    return 0;

}

void struct_generator(int n, vector<Color>& myVec1){

    srand(time(0));

    for (int i = 0; i < n; i++){

        Color color1;

        color1.Red =  rand() % (MAX-MIN+1) + MIN;
        color1.Blue =  rand() % (MAX-MIN+1) + MIN;
        color1.Green =  rand() % (MAX-MIN+1) + MIN;

        myVec1.push_back(color1);
    }

}

void data_display(vector<Color>& myVec1){

    cout << "Color #:\tGreen\tRed\tBlue" << endl;
    cout << "------\t\t-----\t-----\t-----" << endl;

    for (int i = 0; i < myVec1.size(); i++){

        
        cout << i + 1 << "\t";
        cout << "\t" << myVec1[i].Green;
        cout << "\t" << myVec1[i].Red;
        cout << "\t" << myVec1[i].Blue << endl;
    }
}