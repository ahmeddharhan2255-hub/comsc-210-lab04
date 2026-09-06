// COMSC-210 | Lab 4 | Ahmad Dharhan

#include <iostream>
#include <vector>

using namespace std;

struct Color 
{
    int Red;
    int Green;
    int Blue;
};

void struct_generator(int n, vector<Color>& myVec1);
void data_display(vector<Color>& myVec1);

const int MIN = 25, MAX = 50;

int main(){

    int num;

    vector<Color> myVec1;

    cout << "How many colors would you like to get: " << endl;
    cin >> num;

    struct_generator(num, myVec1);

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
    for (int i = 0; i < myVec1.size(); i++){

        cout << "Color #               Red          Blue              Red" << endl;
        
        cout << myVec1[i].Green << endl;
        cout << myVec1[i].Blue << endl;
        cout << myVec1[i].Red << endl;
    }
}