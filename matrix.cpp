#include "matrix.h"

int main()
{
    int flag = 0;
    int pilih;
    do
    {
    ulang:
        if (flag == 0)
        {
            do
            {
                cout << "==============================\n";
                cout << "| 1. Masukan Nilai Matriks A |\n";
                cout << "| 2. Masukan Nilai Matriks B |\n";
                cout << "| 3. Exit                    |\n";
                cout << "==============================\n";
                cout << "pilih angka berapa? [1-2] = ";
                cin >> pilih;
                switch (pilih)
                {
                case 1:
                    inputA();
                    flag++;
                    break;
                case 2:
                    inputB();
                    flag++;
                    break;
                case 3:
                    return 0;
                default:
                    cout << "Maaf Yang anda inputkan tidak ada di menu";
                    break;
                }
                system("cls");
            } while (flag != 2);
        }
        else if (flag != 0)
        {
            cout << endl;
            matrixA();
            matrixB();
            cout << endl;
            cout << "======================================\n";
            cout << "| 1. Penjumlahan Matrix A & B        |\n";
            cout << "| 2. Pengurangan Matrix A & B        |\n";
            cout << "| 3. Perkalian Matrix A & B          |\n";
            cout << "| 4. Perkalian Skalar Matrix A & B   |\n";
            cout << "| 5. Transpose Matrix A & B          |\n";
            cout << "| 6. Ulang Input Matrix A & B        |\n";
            cout << "| 7. Exit                            |\n";
            cout << "======================================\n";
            cout << "pilih angka berapa? [1-2] = ";
            cin >> pilih;
            switch (pilih)
            {
            case 1:
                AddMtrx();
                getch();
                break;
            case 2:
                SubtMtrx();
                getch();
                break;
            case 3:
                MulMtrx();
                getch();
                break;
            case 4:
                SkalMulMtrx();
                getch();
                break;
            case 5:
                TransposeMtrx();
                getch();
                break;
            case 6:
                flag = 0;
                system("cls");
                goto ulang;
                break;
            case 7:
                return 0;
            default:
                cout << "Maaf Yang anda inputkan tidak ada di menu";
                break;
            }
            system("cls");
        }
    } while (pilih != 10);

    return 0;
}