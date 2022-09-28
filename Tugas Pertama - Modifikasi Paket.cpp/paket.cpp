#include <iostream>
#define MAX 15
#include <conio.h>

using namespace std;

struct paket
{
    char jenis_brg[30];
    int berat;
    char kota[30];

    bool full();
    bool empty();
    void tambahData();
    void hapusData();
    void tampilData();
};

paket kirim[MAX];

int datake = 0;

bool paket::full()
{
    if (datake == MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool paket::empty()
{
    if (datake == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void paket::tambahData()
{
    if (full())
    {
        cout << "Full!" << endl;
    }
    else
    {
        cout << endl;
        cout << "Inputkan Jenis Barang    :";
        cin >> kirim[datake].jenis_brg;
        cout << "Inputkan Berat           :";
        cin >> kirim[datake].berat;
        cout << "Inputkan Kota Tujuan     :";
        cin >> kirim[datake].kota;
        cout << endl;
        datake++;
    }
}

void paket::tampilData()
{
    if (empty())
    {
        cout << "Empty!" << endl;
    }
    else
    {
        cout << endl;
        cout << "Daftar Kiriman Paket" << endl;
        for (int a = 0; a < datake; a++)
        {
            cout << a << ". ";
            cout << kirim[a].jenis_brg << " ";
            cout << kirim[a].berat << " ";
            cout << kirim[a].kota << endl;
        }
        cout << endl;
        cout << "Press Any Key..." << endl;
        cout << endl;
        getch();
    }
}

void paket::hapusData()
{
    if (empty())
    {
        cout << "Empty!" << endl;
    }
    else
    {
        cout << endl;
        datake--;
        // cout << "Data Terakhir yang anda Hapus Adalah :" << endl;
        // cout << kirim[x].jenis_brg << " ";
        // cout << kirim[x].berat << " Kg ";
        // cout << kirim[x].kota << endl
        //      << endl;
        cout << "Press Any Key..." << endl;
        getch();
    }
}

int main()
{
    int pilih;
    paket data;
    do
    {
        cout << "MENU UTAMA" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data Terakhir" << endl;
        cout << "3. Tampil Data" << endl;
        cout << "9. Keluar" << endl;

        cout << "Pilihan Anda [1-9] : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            data.tambahData();
            break;
        case 2:
            data.hapusData();
            break;
        case 3:
            data.tampilData();
            break;
        case 9:
            break;
        default:
            cout << "-----Err 404-----" << endl;
        }
    } while (pilih != 9);
}
