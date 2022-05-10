#include <iostream>
using namespace std;

int main(){
    bool x=true;
    int h=0,N;
    int pilihan[999],tampil;
    float hasil[999],v,t,m,hitung1[999],hitung2[999];
    string nama[999],satuan[999];

    cout << "=======================================\n";
    cout << "TUGAS BESAR PKS KELOMPOK 6 TPB 50\n";
    cout << "RIZKA FAUZIYAH - 121140133\n";
    cout << "ADRA SALFIE NURAZIZAIRA - 121140151\n";
    cout << "IDZA RAMAULKIM - 121140152\n";
    cout << "=======================================\n\n";

    cout << "PROGRAM PERHITUNGAN GELOMBANG MEKANIK\n";
    cout << "PILIHAN YANG AKAN DIHITUNG:\n";
    cout << "1. Kecepatan Perambatan Gelombang \n2. Panjang Gelombang \n3. Periode\n";
    cout << "Masukan Pilihan: ";cin >> pilihan[h];

    while(x){
        switch(pilihan[h]){
            case 0:
                x=false;break;
            case 1:
                cout <<"Masukan Panjang Gelombang: ";cin >> m;
                cout <<"Masukan Periode: ";cin >> t;
                hitung1[h]=m;
                hitung2[h]=t;
                nama[h]="Perhitungan Kecepatan Perambatan Gelombang";
                hasil[h]=m/t;
                satuan[h]=" M/s";
                cout << "Hasil "<<nama[h]<<" Adalah: "<<hasil[h]<<satuan[h];break;
            case 2:
                cout <<"Masukan Kecepatan Perambatan Gelombang: ";cin >> v;
                cout <<"Masukan Periode: ";cin >> t;
                hitung1[h]=v;
                hitung2[h]=t;
                nama[h]="Perhitungan Panjang Gelombang";
                hasil[h]=v*t;
                satuan[h]=" M";
                cout << "Hasil "<<nama[h]<<" Adalah: "<<hasil[h]<<satuan[h];break;
            case 3:
                cout <<"Masukan Panjang Gelombang: ";cin >> m;
                cout <<"Masukan Kecepatan Perambatan gelombang: ";cin >> t;
                hitung1[h]=m;
                hitung2[h]=t;
                nama[h]="Perhitungan Periode Gelombang";
                hasil[h]=m/t;
                satuan[h]=" Sekon";
                cout << "Hasil "<<nama[h]<<" Adalah: "<<hasil[h]<<satuan[h];break;
            case 4:
                cout << "\n=======================================\n";
                cout << "1. Tampilkan Semua \n2. Tampilkan Salah satu\n";
                cout <<"Pilihan: ";cin >> tampil;

                if(tampil==1){
                    for(int a=0; a<h; a++){
                        cout << endl << "Perhitungan ke "<<a+1<<endl;
                        cout << nama[a]<<endl;

                        if(nama[a]=="Perhitungan Kecepatan Perambatan Gelombang"){
                            cout << hitung1[a]<<" M / "<<hitung2[a]<<" Sekon\n";
                            cout << "Hasil: "<<hasil[a]<<satuan[a]<<endl;
                        }else if(nama[a]=="Perhitungan Panjang Gelombang"){
                            cout << hitung1[a]<<" m/s x "<<hitung2[a]<<" Sekon\n";
                            cout << "Hasil: "<<hasil[a]<<satuan[a]<<endl;
                        }else if(nama[a]=="Perhitungan Periode Gelombang"){
                            cout << hitung1[a]<<" M / "<<hitung2[a]<<" m/s\n";
                            cout << "Hasil: "<<hasil[a]<<satuan[a]<<endl;
                        }
                    }
                }else if(tampil==2){
                    cout << "Masukan Urutan Perhitungan Yang Akan Ditampilkan: ";cin>>N;
                    for(int a=0; a<h; a++){
                        if(a==N-1){
                        cout <<endl<< nama[a]<<endl;

                        if(nama[a]=="Perhitungan Kecepatan Perambatan Gelombang"){
                            cout << hitung1[a]<<" M / "<<hitung2[a]<<" Sekon\n";
                            cout << "Hasil: "<<hasil[a]<<satuan[a]<<endl;
                        }else if(nama[a]=="Perhitungan Panjang Gelombang"){
                            cout << hitung1[a]<<" m/s x "<<hitung2[a]<<" Sekon\n";
                            cout << "Hasil: "<<hasil[a]<<satuan[a]<<endl;
                        }else if(nama[a]=="Perhitungan Periode Gelombang"){
                            cout << hitung1[a]<<" M / "<<hitung2[a]<<" m/s\n";
                            cout << "Hasil: "<<hasil[a]<<satuan[a]<<endl;
                        }
                        break;
                        }
                    }
                }

                
        }
        if(pilihan[h]==1 or pilihan[h]==2 or pilihan[h]==3 ){
            h++;
        }
        if(x){
            cout << "\n=======================================\n";
            cout << "PILIHAN SELANJUTNYA:\n";
            cout << "0. Keluar Dari Program \n1. Kecepatan Perambatan Gelombang \n2. Panjang Gelombang \n3. Periode\n";
            cout << "4. Tampilkan Hasil Perhitungan Sebelumnya\n";
            cout << "Masukan Pilihan: ";cin >> pilihan[h];
            cout << "\n=======================================\n";
        }
        


    }

}