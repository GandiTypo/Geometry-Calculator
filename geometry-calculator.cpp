#include<iostream>
using namespace std;

int main (){
    //Opsi Memilih Geometry
    int pilih_geometry, pilih_bentuk;
    cout<<"1. Plane Geometry\n2. Solid Geometry\n\n";
    cout<<"Select Geometry Type: ";
    cin>>pilih_geometry;
    cout<<"\n";
    cout<<"════════════════════════════════\n\n";

    if (pilih_geometry == 1){
        cout<<"1. Circle"<<endl;
        cout<<"Select a Plane Shape: ";
        cin>>pilih_bentuk;
    }

    else if (pilih_geometry == 2){
        cout<<"1. Circle"<<endl;
        cout<<"Select a Solid Shape: ";
        cin>>pilih_bentuk;
    }

    else {
        cout<<"Input must be a number.";
    }

    //Plane Circle
    int perhitungan_lingkaran;
    cout<<"\n";
    cout<<"════════════════════════════════\n\n";
    if (pilih_bentuk == 1){
        cout<<"1. Circle Area\n";
        cout<<"Select a Calculation: ";
        cin>>perhitungan_lingkaran;
    }

    else {
        cout<<"Input must be a number.";
    }

    cout<<"\n";
    cout<<"════════════════════════════════\n\n";

    //Luas Plane Circle
    int L, phi, r, r_pangkat2;
    phi = 3.14;
    if (perhitungan_lingkaran == 1){
        cout<<"Input r Circle: ";
        cin>>r;
        L = phi * r * r;
        cout<<L;
    }

}