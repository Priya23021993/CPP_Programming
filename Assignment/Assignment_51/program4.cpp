/* Write generic program to accept N values and search last occurence
   of any specific value.

   Input  :  10   20   30  10   30   40   10   40   10
   vlaue to search : 40
   Output : 7


*/

#include<iostream>
using namespace std;

template<class T>

int SearchLast(T *arr ,int size, T iNo)
{
    int iCnt =0,iPos = -1;

    for(iCnt = 0; iCnt < size; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iPos = iCnt;
        }
    }
   return iPos;
}

int main()
{
   int arr[] ={10,20,30,10,30,40,10,40,10};
   int iRet = SearchLast(arr,9,40);
   printf("%d",iRet);

    return 0;
}


