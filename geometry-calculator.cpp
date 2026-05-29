#include<iostream>
#include<chrono>
#include<thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main (){
    //Variabel Color
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
    
    if ((geometry == 1 || geometry == 2) && (shape_plane > 8 || shape_plane < 1 || cin.fail())){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
        cin.clear();
        cin.ignore(1000, '\n');
        cin.get();
    }

    //calculation Plane Geometry
     //Varibel Square
     int square_calculation = 0;
     double square_s;

     //Square Menu
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
    
     //Square Area
    if (square_calculation == 1){
        cout<<"\t\t┌────────────────────┐"<<endl;
        cout<<"\t\t│        Area        │"<<endl;
        cout<<"\t\t└────────────────────┘\n\n";
        cout<<"➤ Enter the Side Length of the Square: ";
        cin>>square_s;
        system("cls");

        if (cin.fail()){
            cout<<"┌───────────────────────────────────┐"<<endl;
            cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
            cout<<"└───────────────────────────────────┘";
            cin.clear();
            cin.ignore(1000, '\n');
            cin.get();
            exit(0);
        }

        cout<<"\t\t┌────────────────────┐"<<endl;
        cout<<"\t\t│        Area        │"<<endl;
        cout<<"\t\t└────────────────────┘\n\n";
        cout<<"═══════Input═══════"<<endl;
        cout<<"s = "<<square_s<<"\n"<<endl;
        cout<<"══════Process══════"<<endl;
        cout<<"[░░░░░░░░░░] 0%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[█░░░░░░░░░] 10%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[██░░░░░░░░] 20%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[███░░░░░░░] 30%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[████░░░░░░] 40%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[█████░░░░░] 50%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[██████░░░░] 60%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[███████░░░] 70%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[████████░░] 80%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[█████████░] 90%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[██████████] 100%";
        sleep_for(milliseconds(500));
        cout<<"\r                 \r";
        cout<<"A = s × s"<<endl;
        cout<<"A = "<<square_s<<" × "<<square_s<<endl;
        cout<<"A = "<<square_s * square_s<<endl<<endl;
        cout<<"╔═════════════════════╗"<<endl;
        cout<<"║       Results       ║"<<endl;
        cout<<"║ A = "<<square_s * square_s<<"\t      ║"<<endl;
        cout<<"╚═════════════════════╝"<<endl;
        exit(0);
    }

     //Square Perimeter
    if (square_calculation == 2){
        cout<<"\t\t┌─────────────────────┐"<<endl;
        cout<<"\t\t│      Perimeter      │"<<endl;
        cout<<"\t\t└─────────────────────┘\n\n";
        cout<<"➤ Enter the Side Length of the Square: ";
        cin>>square_s;
        system("cls");

        if (cin.fail()){
            cout<<"┌───────────────────────────────────┐"<<endl;
            cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
            cout<<"└───────────────────────────────────┘";
            cin.clear();
            cin.ignore(1000, '\n');
            cin.get();
            exit(0);
        }

        cout<<"\t\t┌─────────────────────┐"<<endl;
        cout<<"\t\t│      Perimeter      │"<<endl;
        cout<<"\t\t└─────────────────────┘\n\n";
        cout<<"═══════Input═══════"<<endl;
        cout<<"s = "<<square_s<<"\n"<<endl;
        cout<<"══════Process══════"<<endl;
        cout<<"[░░░░░░░░░░] 0%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[█░░░░░░░░░] 10%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[██░░░░░░░░] 20%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[███░░░░░░░] 30%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[████░░░░░░] 40%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[█████░░░░░] 50%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[██████░░░░] 60%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[███████░░░] 70%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[████████░░] 80%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[█████████░] 90%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[██████████] 100%";
        sleep_for(milliseconds(500));
        cout<<"\r                 \r";
        cout<<"P = 4 × s"<<endl;
        cout<<"P = 4 × "<<square_s<<endl;
        cout<<"P = "<<4 * square_s<<endl<<endl;
        cout<<"╔═════════════════════╗"<<endl;
        cout<<"║       Results       ║"<<endl;
        cout<<"║ P = "<<4 * square_s<<"\t      ║"<<endl;
        cout<<"╚═════════════════════╝"<<endl;
        exit(0);
    }

     //Variabel Rectangle
        int rectangle_calculation = 0;
        double rectangle_l, rectangle_w;

     //Rectangle Menu
    if (shape_plane == 2){
        cout<<"┌─────────────────────┐"<<endl;
        cout<<"│      Rectangle      │"<<endl;
        cout<<"└─────────────────────┘\n\n";
        cout<<hijau<<"1. Area\n2. Perimeter\n";
        cout<<putih<<"➤ Select a Calculation: ";
        cin>>rectangle_calculation;
        system("cls");
    }

    if ((rectangle_calculation = 1 || rectangle_calculation == 2) && (rectangle_calculation <1 || rectangle_calculation >2 || cin.fail())){
        cout<<"┌───────────────────────────────────┐"<<endl;
        cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
        cout<<"└───────────────────────────────────┘";
        cin.clear();
        cin.ignore(1000, '\n');
        cin.get();
        exit(0);
    }

     //Rectangle Area
    if (rectangle_calculation == 1){
        cout<<"\t\t┌────────────────────┐"<<endl;
        cout<<"\t\t│        Area        │"<<endl;
        cout<<"\t\t└────────────────────┘\n\n";
        cout<<"➤ Enter the Side Length of the Rectangle: ";
        cin>>rectangle_l;

        if (cin.fail()){
            system("cls");
            cout<<"┌───────────────────────────────────┐"<<endl;
            cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
            cout<<"└───────────────────────────────────┘";
            cin.clear();
            cin.ignore(1000, '\n');
            cin.get();
            exit(0);
        }

        cout<<"➤ Enter the Side Width of the Rectangle: ";
        cin>>rectangle_w;

        if (cin.fail()){
            system("cls");
            cout<<"┌───────────────────────────────────┐"<<endl;
            cout<<merah<<"│ ⚠ Invalid input, enter one number"<<putih<<" │"<<endl;
            cout<<"└───────────────────────────────────┘";
            cin.clear();
            cin.ignore(1000, '\n');
            cin.get();
            exit(0);
        }
        
        cout<<"\t\t┌────────────────────┐"<<endl;
        cout<<"\t\t│        Area        │"<<endl;
        cout<<"\t\t└────────────────────┘\n\n";
        cout<<"═══════Input═══════"<<endl;
        cout<<" l = "<<rectangle_l<<"\n w = "<<rectangle_w<<"\n"<<endl;
        cout<<"══════Process══════"<<endl;
        cout<<"[░░░░░░░░░░] 0%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[█░░░░░░░░░] 10%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[██░░░░░░░░] 20%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[███░░░░░░░] 30%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[████░░░░░░] 40%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[█████░░░░░] 50%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[██████░░░░] 60%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[███████░░░] 70%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[████████░░] 80%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[█████████░] 90%";
        sleep_for(milliseconds(500));
        cout<<"\r";
        cout<<"[██████████] 100%";
        sleep_for(milliseconds(500));
        cout<<"\r                 \r";
        cout<<"A = l × w"<<endl;
        cout<<"A = "<<rectangle_l<<" × "<<rectangle_w<<endl;
        cout<<"A = "<<rectangle_l * rectangle_w<<endl<<endl;
        cout<<"╔═════════════════════╗"<<endl;
        cout<<"║       Results       ║"<<endl;
        cout<<"║ A = "<<rectangle_l * rectangle_w<<"\t      ║"<<endl;
        cout<<"╚═════════════════════╝"<<endl;
        exit(0);
    }
}
