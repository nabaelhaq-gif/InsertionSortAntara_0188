#include <iostream>
using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n;       //membuat variabel n untuk input panjang array

void input() // membuat prosedur input
{
    while (true)
    {
        cout << "Masukkan Jumlah Data Pada Array : "; // membuat inputan jumlah element array
        cin >> n;                                     // memanggil variabel n untuk menerima input
        
        if (n <= 20) // membuat kondisi n kurang dari atau sama dengan 20
        {
            break;
        }
        else
        {
            cout << "\nPanjang Data Maksimal 20" << endl; // menampilkan kondisi jika panjang data lebih dari 20
        }
    }
    
    cout << endl;                                     // membuat jarak per baris program
    cout << "=====================" << endl;          // membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "=====================" << endl;
    
    for (int i = 0; i < n; i++) // membuat perulangan untuk memasukkan input array
    {
        cout << "Masukkan data ke " << i + 1 << " : "; // memasukkan atau menginputkan nilai data n
        cin >> arr[i];                                 // menyimpan nilai data n ke arr index ke - i
    }
}