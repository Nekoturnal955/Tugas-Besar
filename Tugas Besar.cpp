#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int TT;
struct pasien
{
    char nama[30];
    char ttl[30];
    char KTP[30];
    char JK;
    char alamat[100];
};
pasien data[99999];
void datapasien()
{
    int *y,i;
    cout<<"Banyak data pasien yang ingin diisi: ";cin>>TT;
    y=&TT;
    for (i=0;i<*y;i++)
    {
        cout<<"Nama : ";cin>>data[i].nama;
        cout<<"Tanggal Lahir : ";cin>>data[i].ttl;
        cout<<"No KTP : ";cin>>data[i].KTP;
        cout<<"Jenis Kelamin L/P : ";cin>>data[i].JK;
        cout<<"Alamat : ";cin>>data[i].alamat;
        cout<<"\\\\\\\\\\\\\\\\\\\\\\"<<endl;
    }
}
void hapusdata()
{

}
void tampilan()
{
    int j,*u;
    u=&TT;
    system("cls");
    cout<<"<------------------------------------------------------------------------------------->"<<endl;
    cout<<"KTP\t\t\tNAMA\t\t\tTanggal Lahir"<<endl;
    cout<<"<------------------------------------------------------------------------------------->"<<endl;
    for (j=0;j<*u;j++)
    {
        cout<<data[j].KTP<<"\t\t"<<data[j].nama<<"\t\t\t"<<data[j].ttl<<endl;
    }
    cout<<"================================================================================================================================"<<endl;
}
void menupasien()
{
    pil:
    int p;
    cout<<"PROGRAM INPUT DATA KEPENDUDUKAN"<<endl;
    cout<<"1. INPUT DATA PASIEN"<<endl;
    cout<<"2. EDIT DATA PASIEN"<<endl;
    cout<<"3. HAPUS DATA PASIEN"<<endl;
    cout<<"4. TAMPILKAN DATA PASIEN"<<endl;
    cout<<"5. KEMBALI"<<endl;
    cout<<"PILIH    : ";
    cin>>p;
    system("cls");
    switch(p)
    {
        case 1:datapasien();getch();system("cls");goto pil;break;
        case 2:getch();system("cls");goto pil;break;
        case 3:hapusdata();getch();system("cls");goto pil;break;
        case 4:tampilan();getch();system("cls");goto pil;break;
        case 0:system("cls");goto pil;break;
    }
}
int main()
{
    pilihan:
    int p;
    cout<<"PROGRAM INPUT DATA KEPENDUDUKAN"<<endl;
    cout<<"1. DATA PASIEN"<<endl;
    cout<<"2. DATA POLI"<<endl;
    cout<<"3. TRANSAKSI"<<endl;
    cout<<"4. KELUAR"<<endl;
    cout<<"PILIH    : ";
    cin>>p;
    system("cls");
    switch(p)
    {
        case 1:;menupasien();getch();system("cls");goto pilihan;break;
        case 2:getch();system("cls");goto pilihan;break;
        case 3:getch();system("cls");goto pilihan;break;
        case 4:break;
    }
}
