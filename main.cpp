#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    cout << *arr << endl;
    int *ptr;
    ptr=arr;
    ptr++;
    cout << *ptr<< endl;
    for(int i=0; i<4; i++){
        cout << *ptr ;
        ptr++;
    }
}

///el nombre de arreglo es la primera posicion del arreglo
///int arr[] es una direccion de memoria entonces
///int *arr
int suma(int *arr, in tam)
{
    int suma=0;
    for(int=0; i<tam; i++)
    {
        suma+=*arr;
        arr++;
    }
}
