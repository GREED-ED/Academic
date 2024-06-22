//user_defn to user_defn (source)
#include<iostream>
using namespace std;
class fahrenheit
{
    private:
        float f;
    public:
        fahrenheit()
            {
                f=0;
            }
        fahrenheit(int x)
            {
                f=x;
            }
    void show()
    {
        cout<<"Temperature in Fahreinheit: "<<f<<endl;
    }
};
class celsius
{
    private:
        float c;
    public:
        celsius(int x)
        {
            c=x;
        }
    operator fahrenheit()
    {
        return fahrenheit((c*9/5)+32);
    }
};
int main()
{
    fahrenheit f;
    celsius c(37);
    f=c;
    f.show();
    return 0;
}