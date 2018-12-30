#include <iostream>

using namespace std;
int main ()
{
    int kode,pri,jml,tot,byr,kbl;
    char mad;
    do
    {
        cout<<"             Nursetiana resto      "<<endl;
        cout<<"             Khas Jawa asli      "<<endl;
        cout<<"Jl. mekar mukti no.17 cikarang utara,Bekasi"<<endl;
        cout<<"======================================== ==="<<endl;
        cout<<""<<endl;
        cout<<"selamat menikmati"<<endl;
        cout<<"menu makanan               harga"<<endl;
        cout<<"==========================================="<<endl;
        cout<<"1.Ayam goreng            Rp. 10.000"<<endl;
        cout<<"2.Nasi goreng            Rp.  8.000"<<endl;
        cout<<"3.Mie pangsit            Rp. 10.000"<<endl;
        cout<<"4.Ayam lalapan + nasi    Rp. 12.000"<<endl;
        cout<<"5.Nasi campur            Rp.  8.000"<<endl;
        cout<<"6.Jus jeruk              Rp.  6.000"<<endl;
        cout<<"7.Air mineral            Rp.  3.000"<<endl;
        cout<<'\n'<<"masukan pilihan anda:";
        cin>>kode;
        switch (kode){
    case 1:
        cout<<'\n'<<"Ayam goreng"<<endl;
        pri=10000;
        cout<<"masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"total harga : Rp."<<tot<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI :Rp."<<kbl<<endl;
        cout<<"masih ada Y/T:";
        cin>>mad;
        break;
    case 2:
        cout<<'\n'<<"Nasi goreng"<<endl;
        pri=8000;
        cout<<"masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"total harga : Rp."<<tot<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI :Rp."<<kbl<<endl;
        cout<<"masih ada Y/T:";
        cin>>mad;
        break;
    case 3:
        cout<<'\n'<<"Mie pangsit"<<endl;
        pri=10000;
        cout<<"masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"total harga :Rp."<<tot<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI :Rp."<<kbl<<endl;
        cout<<"masih ada Y/T:";
        cin>>mad;
        break;
    case 4:
        cout<<'\n'<<"Ayam lalapan + nasi"<<endl;
        pri=12000;
        cout<<"masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"total harga :Rp."<<tot<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI :Rp."<<kbl<<endl;
        cout<<"masih ada Y/T:";
        cin>>mad;
        break;
    case 5:
        cout<<'\n'<<"Nasi campur"<<endl;
        pri=8000;
        cout<<"masukan jumlah :";
        cin>>jml;
        tot=pri*jml;
        cout<<"total harga :Rp."<<tot<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI :Rp."<<kbl<<endl;
        cout<<"masih ada Y/T:";
        cin>>mad;
        break;
    case 6:
        cout<<'\n'<<"Jus jeruk"<<endl;
        pri=6000;
        cout<<"masukan jumlah :";
        cin>>jml;
        tot=pri*jml;
        cout<<"total harga :Rp."<<tot<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI :Rp."<<kbl<<endl;
        cout<<"masih ada Y/T:";
        cin>>mad;
        break;
    case 7:
        cout<<'\n'<<"Air mineral"<<endl;
        pri=3000;
        cout<<"masukan jumlah :";
        cin>>jml;
        tot=pri*jml;
        cout<<"total harga :Rp."<<tot<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI :Rp."<<kbl<<endl;
        cout<<"masih ada Y/T:";
        cin>>mad;
        break;
    default:
        cout<<"kode yang anda masukan tidak ada \n";
        }
    }
    while (mad/='Y');
    cout<<"terima kasih atas kunjungan anda";
    return 0;
}
