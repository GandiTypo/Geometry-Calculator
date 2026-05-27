#include<iostream>
using namespace std;

int main (){
    //Color
    string hijau, putih, merah;
    hijau = "\033[32m";
    putih = "\033[0m";
    merah = "\033[31m";

    //Variabel Menu
    int geometry = 0;
    int shape_plane = 0;
    int shape_solid = 0;
    int calculation = 0;
    double phi = 3.14;

    //Geometry Menu
    cout<<"┌───────────────────┐"<<endl;
    cout<<"│   Geometry Menu   │"<<endl;
    cout<<"└───────────────────┘\n\n";
    cout<<hijau<<"1. Plane Geometry\n2. Solid Geometry\n";
    cout<<putih<<"➤ Select Geometry Type: ";
    cin>>geometry;
    system("cls");

    if (geometry < 1 || geometry > 2 || cin.fail()){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
        cin.clear();
        cin.ignore(1000, '\n');
        cin.get();
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
    
    if (geometry == 1 && (shape_plane > 8 || shape_plane < 1 || cin.fail())){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
        cin.clear();
        cin.ignore(1000, '\n');
        cin.get();
    }

    else if (geometry == 2 && (shape_solid > 8 || shape_solid < 1 || cin.fail())){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
        cin.clear();
        cin.ignore(1000, '\n');
        cin.get();
    }

    //Rumus Plane Geometry
     //Varibel Plane Square
    int square_calculation = 0;
    double square_s;
    
     //Square
    if (shape_plane == 1){
        cout<<"┌────────────────────┐"<<endl;
        cout<<"│       Square       │"<<endl;
        cout<<"└────────────────────┘\n\n";
        cout<<hijau<<"1. Area\n2. Perimeter\n";
        cout<<putih<<"➤ Select a Calculation: ";
        cin>>square_calculation;
        system("cls");
    }

    if (shape_plane == 1 && (square_calculation < 1 || square_calculation > 2 || cin.fail())){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
        cin.clear();
        cin.ignore(1000, '\n');
        cin.get();
    }

    else if (shape_plane == 2 && (square_calculation < 1 || square_calculation > 2 || cin.fail())){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
        cin.clear();
        cin.ignore(1000, '\n');
        cin.get();
    }

    if (square_calculation == 1){
        cout<<"\t\t┌────────────────────┐"<<endl;
        cout<<"\t\t│        Area        │"<<endl;
        cout<<"\t\t└────────────────────┘\n\n";
        cout<<"➤ Enter the Side Length of the Square: ";
        cin>>square_s;
        system("cls");
        cout<<"\t\t┌────────────────────┐"<<endl;
        cout<<"\t\t│        Area        │"<<endl;
        cout<<"\t\t└────────────────────┘\n\n";
        cout<<"═══════Input═══════"<<endl;
        cout<<"s = "<<square_s<<"\t"<<endl;
        cout<<"══════Process══════"<<endl;
        cout<<"L = s × s"<<endl;
        cout<<"L = "<<square_s<<" × "<<square_s<<endl;
        double L = square_s * square_s;
        cout<<"L = "<<L<<endl<<endl;
        cout<<"╔═════════════════════╗"<<endl;
        cout<<"║       Results       ║"<<endl;
        cout<<"║ L = "<<L<<"\t      ║"<<endl;
        cout<<"╚═════════════════════╝"<<endl;
        cin.get();
    }
}
