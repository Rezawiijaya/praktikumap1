#include <iostream>

using namespace std;

int main() {
    
    
    long a,b,c;
    cout<<"tabungan yang akan datang= ";
    cin>>a;
    cout<<"bunga per satu tahun (%) =";
    cin>>b;
    cout<<"lama nasabah berapa tahun =";
    cin>>c;
    cout<<"total bungan dalam (c)tahun adalah Rp."<<c*b*a/100<<endl;
    cout<<"jumlah tabungan pada saat ini adalah Rp."<<a-a*b*c/100<<endl;
}