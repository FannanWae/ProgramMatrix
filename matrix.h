#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int arrA[10][10];
int arrB[10][10];
int kolomA;
int barisA;
int kolomB;
int barisB;

void inputA()
{
    cout << "Masukan jumlah baris = ";
    cin >> barisA;
    cout << "Masukan jumlah kolom = ";
    cin >> kolomA;
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            cout << "\tArray [" << i << "][" << j << "] = ";
            cin >> arrA[i][j];
        }
    }
}

void inputB()
{
    cout << "Masukan jumlah baris = ";
    cin >> barisB;
    cout << "Masukan jumlah kolom = ";
    cin >> kolomB;
    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << "\tArray [" << i << "][" << j << "] = ";
            cin >> arrB[i][j];
        }
    }
}

void matrixA()
{
    cout << "Matrix A\n";
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            cout << arrA[i][j] << "\t";
        }
        cout << endl;
    }
}

void matrixB()
{
    cout << "Matrix B\n";
    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << arrB[i][j] << "\t";
        }
        cout << endl;
    }
}

void AddMtrx()
{
    if (barisA == barisB && kolomA == kolomB)
    {
        cout << "\nMatrix Hasil Penjumlahan\n";
        for (int v = 0; v < barisA; v++)
        {
            for (int c = 0; c < kolomA; c++)
            {
                cout << arrA[v][c] + arrB[v][c] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Maaf Ordo Matrix Tidak Terpenuhi";
    }
}

void SubtMtrx()
{
    if (barisA == barisB && kolomA == kolomB)
    {
        cout << "\nMatrix Hasil Pengurangan\n";
        for (int v = 0; v < barisA; v++)
        {
            for (int c = 0; c < kolomA; c++)
            {
                cout << arrA[v][c] - arrB[v][c] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Maaf Ordo Matrix Tidak Terpenuhi";
    }
}

void TransposeMtrx()
{
    int arrA2[10][10];
    cout << "\nTranspose Matrik A\n";
    for (int a = 0; a < barisA; a++)
    {
        for (int b = 0; b < kolomA; b++)
        {
            arrA2[a][b] = arrA[b][a];
            cout << arrA2[a][b] << "\t";
        }
        cout << endl;
    }
    int arrB2[10][10];
    cout << "\nTranspose Matrik B\n";
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            arrB2[i][j] = arrB[j][i];
            cout << arrB2[i][j] << "\t";
        }
        cout << endl;
    }
}

void MulMtrx()
{
    int rslt[10][10];
    if (kolomA == barisB)
    {
        cout << "Perkalian 2 Matrix\n";
        for (int i = 0; i < barisA; i++)
        {
            for (int j = 0; j < kolomB; j++)
            {
                rslt[i][j] = 0;
                for (int k = 0; k < barisB; k++)
                {
                    rslt[i][j] += arrA[i][k] * arrB[k][j];
                }
                cout << rslt[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Maaf Ordo Matrix Tidak Terpenuhi\n";
    }
}

void SkalMulMtrx()
{
    int skalar;
    cout << "Masukan Nilai Skalar = ";
    cin >> skalar;
    cout << "Perkalian Skalar Matrix\n";
    cout << "Matrix A\n";
    for (int z = 0; z < barisA; z++)
    {
        for (int x = 0; x < kolomA; x++)
        {
            cout << skalar * arrA[z][x] << "\t";
        }
        cout << endl;
    }
    cout << "Matrix B\n";
    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            cout << skalar * arrB[i][j] << "\t";
        }
        cout << endl;
    }
}
