#include<iostream>
#include<unistd.h>
using namespace std;

void judul(){
    cout << "=================" << endl;
    cout << "   ATM Bersama" << endl;
    cout << "=================" << endl;
    cout << endl;
    sleep(3);
    system("cls");
}

int main()
{
    int pilih,pin, pilihan;
    string ulang, ulangi;
    judul();

    do{
        cout << "===============" << endl;
        cout << " Pilih Bahasa" << endl;
        cout << "===============" << endl;
        cout << "1 Indonesia" << endl;
        cout << "2 English" << endl;
        cout << "--------------" << endl;
        cout << "pilihan : ";
        cin >> pilih;
        system("cls");
        do
        {
            if (pilih == 1)
            {
                cout << "--------------------" << endl;
                cout << "  Masukan Pin Anda" << endl;
                cout << "--------------------" << endl;
                cout << "       ";
                cin >> pin;

                system("cls");

                if(pin == 1234){
                    cout << "\tmenu" <<endl;
                    cout << "====================" << endl;
                    cout << "1.Cek Saldo" << endl;
                    cout << "2.Tarik Tunai" << endl;
                    cout << "3.Setor Tunai" << endl;
                    cout << "4.Transfer" << endl;
                    cin >> pilihan;
                    
                }
                else{
                    cout << "input salah ulangi(Y/N)" << endl;
                    cout << "=======================" << endl;
                    cout << "    ";
                    cin >> ulangi;
                    system("cls");
                }
            }
        }while(ulangi == "Y");
        if (pilih == 2){
            cout << "Input Your Pin   :";
        }
        else{
            cout << "========================" << endl;
            cout << "Input Salah, ULANGI(Y/N)" << endl;
            cout << "========================" << endl;
            cout << "           "; cin >> ulang;
            system("cls");
        }
    }while(ulang == "Y");
}

