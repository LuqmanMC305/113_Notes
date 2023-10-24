#include <iostream>
#include <string>

using namespace std;

class Coordinates
{
    private:
       int x; 
       int y;

    public:
        Coordinates(int xAxis, int yAxis)
        {
            x = xAxis;
            y = yAxis;
        }

        void printCoordinates()
        {
            cout << "X coordinate is: " << x << " Y coordiante is: " << y << endl;
        }

        Coordinates operator+(Coordinates &other)
        {
             Coordinates sum(x + other.x, y + other.y);
             return sum;
        }
};


int main()
{
  
    Coordinates coor1(2,3);
    Coordinates coor2(1,2);

    coor1.printCoordinates();
    coor2.printCoordinates();

    Coordinates sum = coor1 + coor2;
    cout << endl;

    sum.printCoordinates();

    return 0;
}