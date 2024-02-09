#pragma once
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

int ConvertArraySizeFromBytesToIndexPositions(int arraySizeInBytes);
int ConvertNumberOfIndexPositionsToLastPosition(int indexCount);
void ReadFileIntoArray(string fileName, int arrayPointer[], int arraySize); //takes string format file name, memory location of array, and size of array **in bytes**
int GetIndexPositionOfQueryNumber(int queryNumber, int arrayPointer[], int arraySize); //takes user defined integer to search for, memory location of array, and size of array **in bytes**
int ModifySpecifiedIndexPosition(int indexPosition, int newValue, int arrayPointer[], int arraySize, int &oldValueContainer); //Takes 
void ModifyFinalIndexPosition(int replacementNumber, int arrayPointer[], int arraySize);
void DeleteSpecifiedIndexPosition(int indexPosition, int arrayPointer[], int arraySize);