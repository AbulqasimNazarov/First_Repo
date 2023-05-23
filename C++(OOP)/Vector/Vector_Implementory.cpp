#include <iostream>
#include <vector>
#include "Structs.h"

using namespace std;

int main()
{
    _Vector<int> Vector = _Vector<int>();
    Vector.AddElement(3, true);
    Vector.AddElement(3, true);
    Vector.AddElement(2, true);
    Vector.AddElement(1, true);
    //Vector.AddElement(6, false);
    Vector.AddElement(5, 3);
    //Vector.RemoveElement(true);
    //Vector.RemoveElement(false);
    //Vector.RemoveElement(2);      
    //Vector.Clear();
    //Vector.Resize(12);
    //Vector.Swap(2, 1);
    //cout<<Vector.At(3);
    Vector.Replace(3, 77);

    Vector.SHOW();

}

