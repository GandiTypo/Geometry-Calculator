#include<iostream>
using namespace std;

int main (){
    //Color
    string hijau, putih, merah;
    hijau = "\033[32m";
    putih = "\033[0m";
    merah = "\033[31m";

    //Variabel
    int geometry, shape_plane, shape_solid, calculation;
    double phi;

    //Geometry Menu
    cout<<"┌───────────────────┐"<<endl;
    cout<<"│   Geometry Menu   │"<<endl;
    cout<<"└───────────────────┘\n\n";
    cout<<hijau<<"1. Plane Geometry\n2. Solid Geometry\n";
    cout<<putih<<"➤ Select Geometry Type: ";
    cin>>geometry;
    system("cls");

    //Shape Menu
    if (geometry == 1){
        cout<<"┌────────────────────┐"<<endl;
        cout<<"│     Plane Menu     │"<<endl;
        cout<<"└────────────────────┘\n\n";
        cout<<hijau<<"1. Square\n2. Rectangle\n3. Kite\n4. Rhombus\n5. Triangle\n6. Circle\n7. Parallelogram\n8. Trapezoid\n";
        cout<<putih<<"➤ Select a Plane Shape: ";
        cin>>shape_plane;
        system("cls");
    }

    else if (geometry == 2){
        cout<<"┌────────────────────┐"<<endl;
        cout<<"│     Solid Menu     │"<<endl;
        cout<<"└────────────────────┘\n\n";
        cout<<hijau<<"1. Cube\n2. Cuboid\n3. Square Pyramid\n4. Triangular Prism\n5. Triangular Pyramid\n6. Cylinder\n7. Cone\n8. Sphere\n";
        cout<<putih<<"➤ Select a Solid Shape: ";
        cin>>shape_solid;
        system("cls");
    }

    else {
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
    }
    
}
