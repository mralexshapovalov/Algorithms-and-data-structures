// Аlgoritms_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const int ROWS = 15;





void Rand(int* array, const int ROWS)
{
    srand(time(NULL));

    for (int i = 0; i < ROWS; i++)
    {
         array[i] = rand() % 100;
    }
 
  
}

void Print(int* array, const int ROWS)
{
    for (int i = 0; i < ROWS; i++)
    {
       

            std::cout << array[i] << "\t";
  
    }

}

void BubbleSort(int* array, const int ROWS)
{

    for (int i = 0; i < ROWS; i++) 
    {

        for (int j = i + 1; j < ROWS; j++)
        {


            if (array[i] > array[j]) 
            {

                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;

            }

        }

    }

    for (int i = 0; i < ROWS; i++)
    {


        std::cout << array[i] << "\t";
   
    }
    std::cout << std::endl;

    //При пузырьковой сортировке сравниваются соседние элементы и меняются местами, 
    //если следующий элемент меньше предыдущего.Требуется несколько проходов по данным.
    //Во время первого прохода сраваются первые два элемента в массиве.
    //Если они не в порядке, они меняются местами и затем сравнивается элементы в следующей паре.
    //При том же условии они так же меняются местами.
    //Таким образом сортировка происходит в каждом цикле пока не будет достигнут конец массива.

}

void SelectionSort(int* array, const int ROWS)
{
    for (int i = 0; i < ROWS; i++) {

        int j = i;
        for (int k = i; k < ROWS; k++) {
            if (array[j] > array[k]) {
                j = k;
            }
        }

        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    

    for (int i = 0; i < ROWS; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;


    //Для того, чтобы отсортировать массив в порядке возрастания, 
    //следует на каждой итерации найти элемент с наибольшим значением.
    //С ним нужно поменять местами последний элемент.
    //Следующий элемент с наибольшим значением становится уже на предпоследнее место.
    //Так должно происходить, пока элементы, находящиеся на первых местах в массивe, 
    //не окажутся в надлежащем порядке.

}

void InsertionSort(int* array, const int ROWS)
{
    for (int j = 1; j < ROWS; j++) {

        int key = array[j];
        int i = j - 1;

        while (i >= 0 && array[i] > key) {
            
            array[i + 1] = array[i];
            i = i - 1;
            array[i + 1] = key;

        }
    }


    for (int i = 0; i < ROWS; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;


    //При сортировке вставками массив разбивается на две области : упорядоченную и и неупорядоченную.
    //Изначально весь массив является неупорядоченной областью.
    //При первом проходе первый элемент из неупорядоченной области изымается и помещается в правильном положении в упорядоченной области.
    //На каждом проходе размер упорядоченной области возрастает на 1, а размер неупорядоченной области сокращается на 1.
    //Основной цикл работает в интервале от 1 до N - 1. На j - й итерации элемент[i] вставлен в правильное положение в упорядоченной области.
    //Это сделано путем сдвига всех элементов упорядоченной области, которые больше, чем[i], на одну позицию вправо.
    //[i] вставляется в интервал между теми элементами, которые меньше[i], и теми, которые больше[i].

}

//void Mergesort(int* array, const int ROWS)
//{
//    if (ROWS > 1) {
//        int middle = ROWS / 2;
//        int rem = ROWS - middle;
//        int* L = new int[middle];
//        int* R = new int[rem];
//
//        for (int i = 0; i < ROWS; i++) 
//        {
//
//            if (i < middle) 
//            {
//
//                L[i] = array[i];
//
//            }
//            else
//            {
//                R[i - middle] = array[i];
//            }
//
//
//        }
//
//        Mergesort(L, middle);
//        Mergesort(R, rem);
//
//        Merge(array, ROWS, L, middle, R, rem);
//        
//
//    }
//  
//
//
//    for (int i = 0; i < ROWS; i++)
//    {
//        std::cout << array[i] << "\t";
//    }
//    std::cout << std::endl;
//
//
//    //При рекурсивной сортировке слиянием массив сначала разбивается на мелкие кусочки - на первом этапе - на состоящие из одного элемента.
//    //Затем эти кусочки объединяются в более крупные кусочки - по два элемента и элементы при этом сравниваются, 
//    //а в результате в новом кусочке меньший элемент занимает место слева, а больший - справа.
//    //Далее происходит слияние в ещё более крупные кусочки и так до конца алгоритма, 
//    //когда все кусочки будут объединены в один, уже отсортированный массив
//
//}
//
//void Merge(int* array, const int ROWS,int*L,int lenL,int *R,int lenR) 
//{
//    int i = 0; 
//    int j = 0;
//
//    while (i < lenL || j < lenR) 
//    {
//        if (i < lenL & j < lenR)
//        {
//
//            if (L[i] <= R[j]) 
//            {
//
//                array[i + j] = L[i];
//                i++;
//
//            }
//            else 
//            {
//                array[i + j] = R[j];
//                j++;
//
//            }
//
//        }
//        else if (i < lenL)
//        {
//
//            array[i + j] = L[i];
//            i++;
//        }
//        else if (j < lenR) 
//        {
//
//            array[i + j] = R[j];
//            j++;
//        }
//
//    }
//
//
//
//}

void QuickSort(int* array, const int ROWS) 
{

    int pivot = 0;

    int ind = ROWS / 2;
    int i, j = 0, k = 0;

    if (ROWS > 1) 
    {

        int* L = new int[ROWS];
        int* R = new int[ROWS];

        pivot = array[ind];

        for (int i = 0; i < ROWS; i++) 
        {

            if (i != ind) 
            {

                if (array[i] < pivot) 
                {

                    L[j] = array[i];
                    j++;

                }
                else 
                {

                    R[k] = array[i];

                }

  
            }
            QuickSort(L, j);
            QuickSort(R, k);

            for (int cnt = 0; cnt < ROWS; cnt++) 
            {

                if (cnt < j) 
                {

                    array[cnt] = L[cnt];


                }
                else if (cnt == j) 
                {

                    array[cnt] = pivot;
                }
                else 
                {

                    array[cnt] = R[cnt - (j + 1)];

                }

            }

        
        }


    }


    /*Быстрая сортировка использует алгоритм "разделяй и властвуй".Она начинается с разбиения исходного массива на две области.
    Эти части находятся слева и справа от отмеченного элемента, называемого опорным.
    В конце процесса одна часть будет содержать элементы меньшие, чем опорный, а другая часть будет содержать элементы больше опорного.*/


}
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid,
    int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;

    // Create temp arrays
    auto* leftArray = new int[subArrayOne],
        * rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];

    auto indexOfSubArrayOne
        = 0, // Initial index of first sub-array
        indexOfSubArrayTwo
        = 0; // Initial index of second sub-array
    int indexOfMergedArray
        = left; // Initial index of merged array

    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
        && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        std::cout << A[i] << " ";
}





int Fibbonacci(int n) 
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;


    return Fibbonacci(n - 1) + Fibbonacci(n - 2);

}



int main()
{
    int* arrayInt = new int [ROWS];
    int i = 0;

    Rand(arrayInt, ROWS);

    Print(arrayInt, ROWS);
    std::cout << std::endl;
    std::cout << "BubleSort" << std::endl;
    BubbleSort(arrayInt, ROWS);
    std::cout << std::endl;
    std::cout << "SelectionSort" << std::endl;
    SelectionSort(arrayInt, ROWS);
    std::cout << std::endl;
    std::cout << "InsertionSort" << std::endl;
    InsertionSort(arrayInt, ROWS);
    std::cout << std::endl;
   /* std::cout << "Mergesort" << std::endl;
    Mergesort(arrayInt, ROWS);*/
    std::cout << std::endl;
    std::cout << "Fibbonaci" << std::endl;

    while (i < ROWS) 
    {

        std::cout << Fibbonacci(i) <<"\t";
        i++;

    }
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Given array is \n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);
    std::cout << "\nSorted array is \n";
    printArray(arr, arr_size);
}


