// Type conversion from one class to another class through Casting Operator
#include<iostream>
using namespace std;
class Item
{
private:
    int a,b;
public:
    void showData() { cout<<"\na="<<a<<" b="<<b;}
};
class Product
{
private:
    int m,n;
public:
    setData(int x,int y) { m=x; n=y;}
    operator Item()
    {
        Item temp;
        temp.a=m;
        temp.b=n;
        return temp;
    }
};
int main()
{
    Item i1;
    Product p1;
    p1.setData(2,5);
    i1=p1;
    i1.showData();
}
