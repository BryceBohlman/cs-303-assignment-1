#include "Assignment_1_Header.h"

void main()
{
	string arrayInputFileName = "A1input.txt";
	int myArray[100];
	int modifiedValue;

	ReadFileIntoArray(arrayInputFileName, myArray, sizeof(myArray));
	cout << GetIndexPositionOfQueryNumber(15, myArray, sizeof(myArray)) << endl;
	cout << GetIndexPositionOfQueryNumber(101, myArray, sizeof(myArray)) << endl;
	cout << "added value: " << ModifySpecifiedIndexPosition(50, 100000, myArray, sizeof(myArray), modifiedValue) << " to index position: " << 50 << '\n';
	cout << "Old value: " << modifiedValue << endl;
	ModifyFinalIndexPosition(65, myArray, sizeof(myArray));
	DeleteSpecifiedIndexPosition(2, myArray, sizeof(myArray));

	for (int i = 0; i < 100; i++)
	{
		cout << myArray[i] << '\n';
	}
}