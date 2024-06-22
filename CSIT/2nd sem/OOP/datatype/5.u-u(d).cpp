//user_defn to user_defn (destination)
#include<iostream>
using namespace std;
class fahrenheit{
    private:
        float f;
    public:
        fahrenheit(float x)
        {
            f=x;
        }
        float getdata()
        {
            return f;
        }
};
class celsius{
    private:
        float c;
    public:
        celsius()
        {
            c=0;
        }
        celsius(float x)
        {
            c=x;
        }
    celsius(fahrenheit f1)
        {
            float f;
            f=f1.getdata();
            c=((f-32)*5)/9;
        }
    void display()
    {
    cout<<"After conversion the temperature in celsius: "<<c<<endl;
    }
};
int main(){
    fahrenheit f1(98);
    celsius c=f1;
    c.display();
    return 0;
}
