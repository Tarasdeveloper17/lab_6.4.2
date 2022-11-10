#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void createArr(int* arr, const int size, const int Low, const int High, int i)
{
    arr[i] = Low + rand() % (High-Low+1);
    if(i < size - 1)
    {
        createArr(arr, size, Low, High, i+1);
    }
}

void Print(int* arr, const int size, int i)
{
    cout << arr[i]<< " ";
    
    if(i < size - 1)
    {
        Print(arr, size, i+1);
    }
    else
        cout << endl;

}


int sumElementOfArray(int *arr , const int size, int S, int i)
{
    if(arr[i] < 0)
    {
       S+=arr[i];
    }
    if(i < size-1)
    {
         return sumElementOfArray(arr, size, S,i+1);
    }
    else
        return S;

}







void multiElementOfArray(int *arr , const int size)
{
    int P = 1;
    int max = arr[0];
    for (int  i = 0; i < size; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }

    }
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "min element is = " << min << endl;
    cout << "max element is = " << max << endl;
    for(int i = max+1; i < min;i++)
    {
        P*=arr[i];
    }
    cout <<"Prod : " << P <<endl;


}


void sortedArray(int *arr, const int size, int i)
{
    for(int j = i + 1; j < size; ++j)
        
        if(arr[i] >= arr[j])
        {
            int tmp;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    
    if(i < size - 1)
    {
        sortedArray(arr, size, i+1);
    }

}





int main()
{
    srand((unsigned)time(NULL));
    cout <<"n: ";
    int n;
    cin >>n;
    int arr[n];
    int Low = -4;
    int High = -16;

    createArr(arr, n, Low, High,0);
    Print(arr, n,0);
    cout<< "Sum = " << sumElementOfArray(arr, n,0,0)<<endl;
    multiElementOfArray(arr,n);
    sortedArray(arr, n,0);
    Print(arr, n,0);


    return 0;
}
