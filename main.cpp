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

int sumaRecur(int *ptr, int *tam)
{
    int inicio=1;
    if (tam==ptr){
        return *ptr;
    }
    else{
        return *ptr+sumaRecur(ptr+inicio,tam);
    }

}


void inversion(int *lista,int n)
{
    ///int lista[],  lista1[]={};
    int h;
    for(int a=0; a<(n/2); a++){
            h=*(lista+a);
            *(lista+a)=*(lista+n);
            *(lista+n)=h;
            cout << *lista<< endl;
            lista++;
    }

}


int main()
{
    int p[]={1,2,3,4};
    imprimirLista(p,4);
    sumar(p,4);
   ///maRecursiva(p,4);
    int n=2;
    int lista[]={1,2,3};

    cout << sumaRecur(lista,lista+n)<< endl;

    inversion(lista,3);
}



