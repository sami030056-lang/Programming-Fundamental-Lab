#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;   // NULL pointer declare and initialize

    if(ptr == NULL)    // check if pointer is NULL
        cout << "Pointer is NULL, it points to no valid memory." << endl;
    else
        cout << "Pointer address: " << ptr << endl;

    return 0;
}
