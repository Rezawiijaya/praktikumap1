#include <iostream>

using namespace std;

int main() {
    
    int a,b,c,d;
    cout<<"tabungan yang akan datang= ";
    cin>>a;
    cout<<"bunga per satu tahun (%) =";
    cin>>b;
    cout<<"lama nasabah berapa tahun =";
    cin>>c;
    cout<<"total bunga dalam (c)tahun adalah Rp."<<c*b*a/100<<endl;
    cout<<"jumlah tabungan pada saat ini adalah(pertahun) Rp."<<a-a*b*c/100<<endl;
    
    cout<<"tiga tahun berapa semester= ";
    cin>>d;
    cout<<"total bunga dalam (d)persemester adalah Rp."<<d*b*a/100<<endl;
    cout<<"jumlah tabungan pada saat ini adalah(persemester) Rp."<<a-a*b*d/100<<endl;
    
}