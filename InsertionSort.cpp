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

void insertionSort()
{                      // membuat prosedur insertionsort
    int temp, i, j; // membuat variabel temp untuk menyimpan data sementara dan variabel i dan j sebagai penanda

    for (i = 1; i <= n - 1; i++) // 1. looping dengan i dimulai dari 1 hinggga n-1
    {
        temp = arr[i]; // 2. menyimpan nilai arr[i] ke variabel sementara temp
        j = i - 1;     // 3. set nilai j = i - 1
        while (j >= 0 && arr[j] > temp)
        {                                // looping while apa bila j lebih besar atau sama dengan nol dan nilai arr[j] lebih besar dari variabel temp
            arr[j + 1] = arr[j]; // 4.a geser isi arr[j] ke arr[j+1]
            j--;                 // 4.b. decrement nilai j
        }

        arr[j + 1] = temp; // 5. letakkan temp di arr[j+1] jika while tidak memenuhi syarat

        cout << "\nPass " << i << " : "; // untuk mendisplay pass dari algoritma
        for (int k = 0; k < n; k++)      // looping untuk mendisplay isi pass algoritma
        {
            cout << arr[k] << " "; // untuk medisplay angka pada pass ke k
        }
    }
}

void output() // prosedur output
{
    cout << endl;                                     // memberi baris baru
    cout << "=====================" << endl;          // tampilan elemnt yang sudah di urut
    cout << "Element Yang Sudah Di Urut" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) // looping untuk mendisplay isi arr yang sudah di urut
    {
        cout << "Data ke " << i + 1 << " : " << arr[i] << endl; // untuk mendisplay isi arr yang sudah di urut
    }
}