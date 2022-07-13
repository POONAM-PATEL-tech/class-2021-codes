#include <iostream>
using namespace std;
class Area
{
    int a, b;

public:
    Area(int n1)
    {
        a = n1;
        b = 0;
    }
    Area(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    Area()
    {
        a = 0;
        b = 0;
    }
    void area(void)
    {
        cout << "Area"<<endl;
              cout << (a * b) << endl;
    }
};
int main()
{
    Area a1 = Area();
    a1.area();
    Area a2 = Area(1, 2);
    a2.area();
    Area a3 = Area(4);
    a3.area();
    return 0;
}