//to find area square, triangle and circle using the concept of function overloading
#include<iostream>
#include<cmath>
using namespace std;
const float PI= 3.14;

int area(int length){
    return (length*length); 
}
float area(float a,float b,float c){
    float s=(a+b+c)/2;
    if((s*(s-a)*(s-b)*(s-c))>=0)
    {
        return (sqrt(s*(s-a)*(s-b)*(s-c)));
    }
}
float area(float radius){
    return (PI*((radius)*(radius)));
}
int main(){
    int l,choice;
    cout << "Select the shape to find the area:\n";
    cout << "1. Square\n2. Triangle\n3. Circle\n";
    cin >> choice;

    switch (choice) {
        case 1:
            int length;
            cout << "Enter the length of the square: ";
            cin >> length;
            cout << "Area of the square: " << area(length)<< endl;
            break;

        case 2:
            float a,b,c;
            cout << "Enter the all 3 sides of the triangle: ";
            cin >>a>>b>>c;
            cout << "Area of the triangle: " << area(a, b, c) << endl;
            break;

        case 3:
            float radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << area(radius) << endl;
            break;

        default:
            cout << "Invalid choice! Please select a valid option.\n";
    }

    return 0;

}