#include<iostream>
using namespace std;
int main()
{
    int gaji,masuk,keluar;
    cout<<"silahkan masukan jam masuk"<<endl;
    cin>>masuk;
    cout<<"silahkan masukan jam keluar"<<endl;
    cin>>keluar;

    //GAJI
    gaji=(keluar-masuk)*5000;
    cout<<"Gaji yang akan diterima adalah sebesar = Rp"<<gaji<<endl;
    return 0;
}
