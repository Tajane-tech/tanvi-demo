#include<iostream>
using namespace std;
class cube
{
    float length, width, depth, vol;
public:
   void getdata()
   {
    cout << "Enter length, width, depth:";
    cin >> length >> width >> depth;
   }
   void volume()
   {
    vol = length*width*depth;
   }
   void display()
   {
    cout << "Volume of Cube=" << vol << endl;
   }
};
int main()
{
    Cube c;
    c.getdata;
    c.volume;
    c.dislay;
    return 0;
}
