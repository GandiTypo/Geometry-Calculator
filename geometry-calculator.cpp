#include<iostream>
using namespace std;

int main (){
    //Color
    string hijau, putih, merah;
    hijau = "\033[32m";
    putih = "\033[0m";
    merah = "\033[31m";

    //Variabel
    int geometry = 0;
    int shape_plane = 0;
    int shape_solid = 0;
    int calculation = 0;
    double phi;

    //Geometry Menu
    cout<<"┌───────────────────┐"<<endl;
    cout<<"│   Geometry Menu   │"<<endl;
    cout<<"└───────────────────┘\n\n";
    cout<<hijau<<"1. Plane Geometry\n2. Solid Geometry\n";
    cout<<putih<<"➤ Select Geometry Type: ";
    cin>>geometry;
    system("cls");

    if (geometry <=1 || geometry >=2 || cin.fail()){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
    }

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
    
    if (geometry == 1 && (shape_plane >= 8 || shape_plane <= 1 || cin.fail())){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
    }

    else if (geometry == 2 && (shape_solid >= 8 || shape_solid <= 1 || cin.fail())){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
    }

    //Rumus Plane Geometry
    //Square
    if (shape_plane == 1){
        cout<<"┌────────────────────┐"<<endl;
        cout<<"│       Square       │"<<endl;
        cout<<"└────────────────────┘\n\n";
        cout<<hijau<<"1. Area\n2. Perimeter\n";
        cout<<"➤ Select a Calculation: ";
    }
}
