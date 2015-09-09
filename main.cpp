#include <iostream>

using namespace std;

int* twoNumbers(int myArray[])
{
    return myArray;
}

int main()
{   int myNumbers[] = {1,2,3};
    int* myNum = twoNumbers(myNumbers);
    int arrayLength = (sizeof(myNumbers)/sizeof(myNumbers[0]));
    for (int count=0; count < arrayLength ; count++)
    {
        if (count < (arrayLength-1))
            cout << myNum[count] << ",";
        else
            cout << myNum[count] << endl;
    }
}
