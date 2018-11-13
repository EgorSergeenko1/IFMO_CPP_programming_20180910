//Дано нечетное число n, не превосходящее 15.
//Создайте двумерный массив из n×n элементов, заполнив его символами "."
// (каждый элемент массива является строкой из одного символа).
// Затем заполните символами "*" среднюю строку массива,
// средний столбец массива, главную диагональ и побочную диагональ.
// В результате "*" в массиве должны образовывать изображение звездочки.
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//* . * . *
//. * * * .
//* * * * *
//. * * * .
//* . * . *

#include "t02_star.h"
#include <iostream>


using namespace std;

int t02_star() { int n;
    cin>>n;
    char arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){arr[i][j]='.';
        }
    }
    for (int j=0;j<n;j++){
        arr[(n/2)][j]='*';
    }
    for (int i=0;i<n;i++){
        arr[i][(n/2)]='*';
    }
    for (int i1=n-1, i=0,j=0;i<n;i++,i1--,j++){
        {arr[i][j]='*';
        arr[i1][j]='*';
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
