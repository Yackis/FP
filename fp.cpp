#include <iostream>
using namespace std;

int brt,biaya;
struct Data{
    char nama[100];
    int kode;
    int kontak;
    char alamat[30];
    char berat[30];
    int totalberat;
};

void hitung(){
    cout <<"Pilih Kategori Cucian"<<endl;
    cout <<"1. Regular"<<endl;
    cout <<"2. Ekspress"<<endl;
    cout <<"3. Kilat "<<endl;


}

void tugas(){
    system("cls");
    cout <<"+=================================+"<<endl;
    cout <<"|        LAUNDRY PAK TEGAR        |"<<endl;
    cout <<"+=================================+"<<endl;
    cout <<"1. List Harga"<<endl;
    cout <<"2. Mulai Pesan"<<endl;
    cout <<"3. Resi Pesanan"<<endl;
    cout <<"4. Exit"<<endl;
}


int main(){
    int pil,a,i,ktgr;
menu:
    tugas();
    cout <<endl;
    cout <<"Masukan Pilihan : ";
    cin>>pil;

    if (pil == 1){
        system("cls");
        cout <<endl;
        cout <<"LIST HARGA            "<<endl<<endl;
        cout <<"Kategori      Harga/Kg       Keterangan"<<endl;
        cout <<"====================================================="<<endl;
        cout <<"Regular       Rp.6000        Cuci Pakaian 1 hari"<<endl;
        cout <<"Ekspress      Rp.9000        Cuci Pakaian 9 jam"<<endl;
        cout <<"Kilat         Rp.12000       Cuci Pakaian 5 jam"<<endl<<endl;
        system("pause");
        goto menu;

    }else if(pil == 2){
        system("cls");
        cout <<"Jumlah Pakaian : ";
        cin >> a;

        Data data[100];
            for(i=0;i<a;i++){
                system ("cls");
                cout<<"Pakaian Ke ["<<i+1<<"]"<<endl<<endl;
                cout <<"Kode Pakaian : ";
                cin >>data[i].kode;
                cout <<"Nama         : ";
                cin >>data[i].nama;
                cout <<"Kontak       : ";
                cin >>data[i].kontak;
                cout <<"Alamat       : ";
                cin >>data[i].alamat;
                cout <<endl;
                system("cls");
kategori:
                cout <<"Kategori cucian"<<endl;
                cout<<"1. Reguler  (Rp.6000/Kg)"<<endl;
                cout<<"2. Ekspress (Rp.9000/Kg)"<<endl;
                cout<<"3. Kilat    (Rp.12000/Kg)"<<endl;
                cout <<"======================================="<<endl;
                cout<<"Pilih Kategori Cucian [1-3]  : ";cin>>ktgr;
            
                if(ktgr==1){
                
                biaya=6000;
                }else if(ktgr==2){
                
                biaya=9000;
                }else if(ktgr==3){
                
                biaya=12000;
                }else{
                    cout <<"Pilihan Anda salah"<<endl;
                    system("pause");
                    system("cls");
                    goto kategori;
                }
                cout <<"Berat Pakaian (Kg) : ";
                cin >>brt;
                cout <<"======================================="<<endl;

                data[i].totalberat=brt*biaya;
                cout <<"Total yang Anda bayar Adalah = Rp." <<data[i].totalberat<<endl<<endl;
                system("pause");
            }
            system("cls");
            cout <<"Pendataan selesai"<<endl;
            system ("pause");
            goto menu;

    }else if(pil == 3){
        system("cls");
        Data data[100];
            for(i=0;i<a;i++){
                cout <<"======================================="<<endl;
                cout<<"Pakaian Ke ["<<i+1<<"] : "<<endl;
                cout <<"Kode "<<data[i].kode<<endl;
                cout <<"Nama   : "<<data[i].nama<<endl;
                cout <<"Kontak : "<<data[i].kontak<<endl;
                cout <<"Alamat : "<<data[i].alamat<<endl;
                cout <<"======================================="<<endl;
                cout <<"Total  : Rp." <<data[i].totalberat<<endl;
                cout <<"======================================="<<endl;
            }
            system("pause");
            goto menu;

    }else if(pil == 4){
        system("cls");
        cout <<"Terimakasih telah menggunakan jasa laundry kami..."<<endl;
        system("pause");
        goto menu;

    }else{
        cout<<"Pilihan Anda tidak ada dalam daftar"<<endl;
        system("pause");
        goto menu;
    }


}
