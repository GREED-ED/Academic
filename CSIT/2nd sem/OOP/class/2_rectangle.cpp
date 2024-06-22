//area of rectangle using function overloading
#include<iostream>
using namespace std;
class rectangle{
    private: 
    int length, breadth;

    public:
    rectangle(){
        length=0;
        breadth=0;
    }
    rectangle(int x, int y){
        length=x;
        breadth=y;
    }
    rectangle(int z){
        length=breadth=z;
    }
    int area(){
        return (length*breadth);
    }
};
int main(){
    rectangle r;
    cout << "Area of rectangle: " << r.area() << endl<< endl;
    
    int x, y;
    cout << "Enter length and breadth: ";
    cin >> x >> y;
    rectangle r1(x, y);
    cout << "Area of rectangle 1: " << r1.area() << endl<< endl;
    
    int z;
    cout << "Enter length for rectangle: ";
    cin >> z;
    rectangle r2(z);
    cout << "Area of rectangle 2: " << r2.area() << endl<< endl;
    return 0;
}
