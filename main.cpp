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


void imprimirLista(int *arr, int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout <<  *arr << endl;
        arr++;
    }
}

int sumar(int *arr, int tam)
{
    int suma=0;
    for(int i=0; i<tam; i++)
    {
        suma+=*arr;
        arr++;

    }
    cout << arr<< endl;
    cout << *arr<< endl;
    cout << suma<< endl;
}
/*
int sumaRecursiva(int *arr, int tam)
{
        if(arr!=0){
        return *arr[arr] + sumaRecursiva(*arr, tam);///3 +({1,2,3,4}, 3
        }
}
*/


int main()
{
    int p[]={1,2,3,4};
    imprimirLista(p,4);
    sumar(p,4);
   ///maRecursiva(p,4);
}



