#include <iostream>
const size_t ARRAY_SIZE = 1000;
void unite(int arr1[], int arr2[], int result[], size_t n, size_t m, size_t& k)
{
    for (int i =0; i<n; i++)
    {
        result[i] = arr1[i];
    }
    k = n + m;
    for (int i = n; i < k; i++)
    {
        result[i] = arr2[i-n];
    }
}

void Sort(int arr[],size_t n)
{
    for (int i = 0; i < n; i++) 
    {
        int minNum = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < minNum)
            {
                minNum = arr[j];
                minIndex = j;
            }
        }
        arr[minIndex] = arr[i];
        arr[i] = minNum;
    }
}
bool isFrom(int arr1[], int arr2[], size_t n, size_t m) 
{
    for(int i=0;i<n;i++)
    {
        int check = true;
        if (arr1[i] == arr2[0]) 
        {
            for (int j = 0; j < m; j++)
            {
                if (arr1[i + j] != arr2[j]) 
                {
                    check = false;
                    break;
                }
            }
            if (check == true) return check;
        }
    }
    return false;
}
void removeNegatives(int arr[], size_t& n)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i] < 0) 
        {
            for (int j=i;j<n;j++)
            {
                arr[j] = arr[j + 1];

            }
            n--;
            i--;
        }
    }
}
void continuous(int arr[], size_t n, int& num)
{
    int count = 0;
    int count1 = 0;
    for(int i=1;i<n;i++)
    {
        if (arr[i] == arr[i - 1]) count++;
        if (count > count1) 
        {
            count1 = count;
        }
        if (arr[i] != arr[i - 1]) count = 0;
    }
    num = count1;
}
bool isSymmetrical(int arr[], size_t n)
{
    bool check = true;
    for (int i = 0; i < n/2; i++) 
    {
        if (arr[i] != arr[n - i-1]) check = false;
    }
    return check;
}
void selectedNumbers(int arr1[], int arr2[], int a, int b, size_t& n)
{
    int count = 0;
    for (int j = 0; j < n; j++)
    {
       if (arr1[j]> a && arr2[j]<b)
       {
           arr2[count] = arr1[j];
           count++;
       }
    }
    n = count;
}
void arrayNumbers(int arr[], size_t n)
{
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }

}
void numRemove(int arr[], size_t& n, size_t idx)
{
    int num;
    for (int i = idx; i < n - 1; i++)
    {
        num = arr[i];
        arr[i] = arr[i + 1];
    }
    n = n - 1;
}
void print(int arr[], size_t n)
{
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
}
int main()
{
    //zadacha 1
    /*
    size_t n, idx;
    std::cin >> n;
    int arr[ARRAY_SIZE];
    for (int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }
    std::cin >> idx;
    numRemove( arr, n, idx);
    print(arr, n);
    */
    //zadacha 2
    /*
    size_t n;
    int a, b;
    std::cin >> n >> a >> b;
    int arr1[ARRAY_SIZE];
    arrayNumbers(arr1, n);
    int arr2[ARRAY_SIZE];
    selectedNumbers(arr1, arr2, a, b, n);
    print(arr2, n);
    */
    //Zadacha 3
    /*
    size_t n;
    std::cin >> n;
    int arr[ARRAY_SIZE];
    arrayNumbers(arr, n);
    std::cout << isSymmetrical(arr, n);
    */
    // zadacha 4
    /*
    size_t n;
    int num = 0;
    std::cin >> n;
    int arr[ARRAY_SIZE];
    arrayNumbers(arr, n);
    continuous(arr, n, num);
    std::cout << num;
    */
    //zadacha 5
    /*
    size_t n;
    std::cin >> n;
    int arr[ARRAY_SIZE];
    arrayNumbers(arr, n);
    removeNegatives(arr, n);
    print(arr, n);
    */
    // zadacha 6
    /*
    size_t n;
    std::cin >> n;
    int arr1[ARRAY_SIZE];
    int arr2[ARRAY_SIZE];
    arrayNumbers(arr1, n);
    std::cout << "next array";
    size_t m;
    std::cin >> m;
    arrayNumbers(arr2, m);
    std::cout << (isFrom(arr1, arr2, n, m));
    */
    //zadacha 7
    /*
    size_t n;
    size_t k;
    std::cin >> n;
    int arr1[ARRAY_SIZE];
    int arr2[ARRAY_SIZE];
    int result[ARRAY_SIZE];
    arrayNumbers(arr1, n);
    std::cout << "next array";
    size_t m;
    std::cin >> m;
    arrayNumbers(arr2, m);
    unite(arr1, arr2, result, n, m, k);
    Sort(result, k);
    print(result, k);
    */
    //zadacha 8
    size_t n;
    size_t k;
    std::cin >> n;
    int arr1[ARRAY_SIZE];
    int arr2[ARRAY_SIZE];
    int result[ARRAY_SIZE];
    arrayNumbers(arr1, n);
    std::cout << "next array";
    size_t m;
    std::cin >> m;
    arrayNumbers(arr2, m);
    Sort(arr1, n);
    Sort(arr2, n);

}


