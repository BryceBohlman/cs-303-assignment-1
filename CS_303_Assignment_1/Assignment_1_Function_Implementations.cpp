#include "Assignment_1_Header.h"

using namespace std;

int ConvertArraySizeFromBytesToIndexPositions(int arraySizeInBytes)
{
	return (arraySizeInBytes / sizeof(int));
}

int ConvertNumberOfIndexPositionsToLastPosition(int indexCount)
{
	return indexCount - 1;
}

void ReadFileIntoArray(string fileName, int arrayPointer[], int arraySize)
{
	int i = 0;
	ifstream inFile(fileName);
	
	while (i < ConvertArraySizeFromBytesToIndexPositions(arraySize) && inFile >> arrayPointer[i]) //Check that space remains in the array and read text file elements into array indexes
	{
		cout << "Added value: " << arrayPointer[i] << " to index position: " << i << endl;
		i++;
	}

	inFile.close();
}

int GetIndexPositionOfQueryNumber(int queryNumber, int arrayPointer[], int arraySize)
{
	for (int i = 0; i < ConvertArraySizeFromBytesToIndexPositions(arraySize); i++)
	{
		if (arrayPointer[i] == queryNumber)
			return i;
	}

	return -1;
}

int ModifySpecifiedIndexPosition(int indexPosition, int newValue, int arrayPointer[], int arraySize, int &oldValueContainer)
{
	if (indexPosition >= 0 && indexPosition <= ConvertNumberOfIndexPositionsToLastPosition(ConvertArraySizeFromBytesToIndexPositions(arraySize)))
	//try
	{
		oldValueContainer = arrayPointer[indexPosition];
		arrayPointer[indexPosition] = newValue;
		return newValue;
	}
	/*catch (out_of_range& ex)
	{
		cerr << "Invalid array index" << '\n';
		cerr << ex.what() << endl;
		abort();
	}
	catch (...)
	{

	}*/
	return -1;
}

void ModifyFinalIndexPosition(int replacementNumber, int arrayPointer[], int arraySize)
{
	arrayPointer[ConvertNumberOfIndexPositionsToLastPosition(ConvertArraySizeFromBytesToIndexPositions(arraySize))] = replacementNumber;
}

void DeleteSpecifiedIndexPosition(int indexPosition, int arrayPointer[], int arraySize)
{
	if (indexPosition >= 0 && indexPosition <= ConvertNumberOfIndexPositionsToLastPosition(ConvertArraySizeFromBytesToIndexPositions(arraySize)))
	{
		arrayPointer[indexPosition] = 0;
	}
}