#include <iostream>
#include <iomanip>
#include <time.h> 
using namespace std;
void Create(int* x, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        x[i] = Low + rand() % (High - Low + 1);
}
int Dob(int* x, const int size, int& k) {
    int s = 1;
    for (int i = 0; i < size; i++) {
        if (x[i]>0) {
            s *= x[i];
            }
    }
    return s;
}
void Print(int* x, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << x[i];
    cout << endl;
}
int Sum(int* a, int l) {
    int sum=0;
    for (int i = 0; i < l; i++) {
        sum += a[i];
        }
        return sum;
    
}
int Findi(int* a, const int size) {

    int min = a[0];
    int k = 0;
    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
            k = i;
        }
    }
    return k;

}
void Sort(int* a, const int size) 
{
    for (int i = 0; i < size - 1; i+=2) 
    {
        int min = a[i]; 
        int imin = i; 
        for (int j = i + 2; j < size; j+=2)
            if (min > a[j])
            {
                min = a[j];
                imin = j;
            }
        a[imin] = a[i]; 
        a[i] = min; 
    }
    for (int i = 1; i < size - 1; i += 2)
    {
        int min = a[i];
        int imin = i;
        for (int j = i + 2; j < size; j += 2)
            if (min > a[j])
            {
                min = a[j];
                imin = j;
            }
        a[imin] = a[i];
        a[i] = min;
    }
}
int main()

{
    srand((unsigned)time(NULL));
    int k = 0;
     int n;
    cout << "n= ";
    cin >> n;
   int* x = new int[n];



    int Low = -8;
    int High = 8;

    Create(x, n, Low, High);
    Print(x, n);
    cout << "Dob: " << Dob(x, n, k) << endl;
    int c = Findi(x, n);
    cout << "Sum: " << Sum(x, c) << endl;
    Sort(x, n);
    Print(x, n);
    return 0;
}
