//
//  main.cpp
//  P9-3
//
//  Created by Jakob Hammond on 10/26/23.
//

#include <iostream>
using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);
int main(void){
    int values[20] = {1, 2, 5, 5, 3, 1, 2, 4, 3, 2, 2, 2, 2, 3, 6, 5, 5, 6, 3, 1};
    int size = 20;
    displayRun(values, size);
    cout << endl << hasRun(values, size) << endl;
    
}

void displayRun(int values[], int size){
    bool inRun = false;
    for(int i = 0; i < size; i++){
        if(values[i] == values[i + 1]){
            if(inRun == false){
                cout << "(";
                inRun = true;
            }
        }
        cout << values[i];
        if(values[i] != values[i + 1]){
            if(inRun){
                cout << ")";
                inRun = false;
            }
        }
        cout << " ";
    }
}

bool hasRun(int values[], int size){
    bool adjacentVal = false;
        for(int i = 0; i < size; i++){
            if(values[i] == values[i + 1]) adjacentVal = true;
        }
        return adjacentVal;
}
