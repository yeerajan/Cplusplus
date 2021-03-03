// Class template or Generic Class
#include<iostream>
using namespace std;
template<class X> class ArrayList
{
private:
    struct ControlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;
public:
    ArrayList(int capacity)
    {
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new X[s->capacity];
    }
    void addElement(int index,X data)
    {
        if(index>=0&&index<s->capacity)
        s->arr_ptr[index]=data;
        else
            cout<<"\nInvalid Index";
    }
    void viewElement(int index)
    {
        cout<<"\nValue in the array is "<<s->arr_ptr[index];
    }
    void viewList()
    {
        int i;
        for(i=0;i<s->capacity;i++)
            cout<<" "<<s->arr_ptr[i];
    }
};
int main()
{
    ArrayList <float>list1(4);
    list1.addElement(0,2.1);
    list1.addElement(1,1.2);
    list1.addElement(2,1.7);
    list1.addElement(3,8.8);
    //list1.viewElement(2);
    list1.viewList();
}
