#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myObject;

int* twoNumbers(int myArray[], int arrayLen, vector<int>* myResult)
{
    vector<int> myArray2;
    for (int count1=0; count1 < arrayLen; count1++)
    {
        for (int count2=(count1+1); count2 < arrayLen; count2++)
        {
            int mySum = myArray[count1]+myArray[count2];
            for (int count3=0; count3 < arrayLen; count3++)
            {

                if (myArray[count3] == mySum)
                {
                    bool isAlreadyThere = false;
                    for (int count4 = 0; count4 < myArray2.size(); count4++)
                        if (myArray2[count4] == mySum)
                            isAlreadyThere = true;
                    if (!isAlreadyThere)
                        myArray2.push_back(mySum);
                }
            }
        }
    }

    for (int count1=0; count1 < myArray2.size(); count1++)
        myResult->push_back(myArray2[count1]);
    return 0;

}

int main()
{   int myNumbers[] = {1,2,3};
    int arrayLength = (sizeof(myNumbers)/sizeof(myNumbers[0]));
    vector<int> myResult;
    twoNumbers(myNumbers, arrayLength, &myResult);
    sort (myResult.begin(), myResult.end(), myObject);
    for (int count=0; count < myResult.size() ; count++)
    {
        if (count < (myResult.size()-1))
            cout << myResult[count] << ",";
        else
            cout << myResult[count] << endl;
    }
}
