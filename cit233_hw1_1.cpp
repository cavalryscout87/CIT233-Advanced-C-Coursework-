//
//  cit233_hw1_1.cpp
//  cit233_hw3_q1
//
//  Created by Patrick Lockett on 1/20/17.
//  Copyright © 2017 Patrick Lockett. All rights reserved.
//

#include "cit233_hw1_1.hpp"

/******************
 *START OF PROGRAM*
 ******************/

#include <iostream>

int main() {
    
    const int SIZE = 100;
    int arrayLength = 0;
    int arraySet[SIZE];
    int evenNumberValue = 0;
    int oddNumbervalue = 0;
    int min = 0;
    int max = 0;
    
    arrayLength = writeToArray(arraySet);
    

    return 0;
}

//Reads a set of integers into an arrays
int writeToArray(int arraySet[]){
    
    int sentinelValue = 0;
    int arrayLength = 0;
    
    for(int i = 0 ;sentinelValue!=-1; i++){
        std::cout<<"Enter the number that you would like to add to the array. Enter -1 if you are finished";
        std::cin>>arraySet[i];
        arrayLength = i;
    }
    return arrayLength;
}

//find the sum of the odd numbers pass by address variable
int sumOfOddNumbers(int arraySet[],int& arrayLength, int& oddNumberValue){
    int arrayValue;
    
    for (int i = 0;i < arrayLength; i++ ){
        arrayValue = arraySet[i];
        if (arrayValue%2!=0){
            oddNumberValue += arrayValue;
        }
    }
    return oddNumberValue;
}

//find the sum of the even numbers pass by address variable
int sumOfEvenNumbers(int arraySet[],int& arrayLength,int& evenNumberValue){
    
    int arrayValue;
    
    for (int i = 0;i < arrayLength; i++ ){
        arrayValue = arraySet[i];
        if (arrayValue%2==0){
            evenNumberValue += arrayValue;
        }
    }
    return evenNumberValue;
}

//Find the lowest value in the set of integers
int lowestValue(int arraySet[],int& arrayLength, int& min){
    min = arraySet[0];
    for (int i = 0;i < arrayLength; i++ ){
        if (min > arraySet[i])
            min = arraySet[i];
    }
    return min;
}

//Find the highest value in the set of integers
int highestValue(int arraySet[],int& arrayLength, int& max){
    max = arraySet[0];
    for (int i = 0;i < arrayLength; i++ ){
        if (max < arraySet[i])
            max = arraySet[i];
    }
    return max;
}

//Display the calculated sums, the lowest and the highest values in addition to the input data (the contents of the array).

//write the input data to a file whose name is provided by the user from the keyboard.
