#pragma once
#include <iostream>

using namespace std;

template<typename T>
class _Vector {
    int length;
    T* arr = new T[length]{};
    int count = 0;
public:
    void SHOW()
    {
        for (int i = 0; i < this->length; i++)
        {
            cout << this->arr[i] << endl;
            this->count++;
        }

    }


    void AddElement(T newEl, bool condition)
    {
        T* newARR = new T[this->length + 1]{};
        if (condition == true)
        {
            newARR[0] = newEl;
            for (int i = 1; i <= this->length; i++)
            {
                newARR[i] = arr[i - 1];
            }
            this->length++;
            delete[] this->arr;
            this->arr = newARR;
        }
        else
        {
            for (int i = 0; i < this->length; i++)
            {
                newARR[i] = arr[i];
            }
            newARR[this->length] = newEl;
            this->length++;
            delete[] this->arr;
            this->arr = newARR;
        }
    }

    void AddElement(T newEl, int index)
    {
        T* newARR = new T[this->length + 1]{};
        int i = 0;
        while (i < index)
        {
            newARR[i] = arr[i];
            i++;
        }
        newARR[index] = newEl;
        this->length++;
        for (int i = index; i < this->length; i++)
        {
            newARR[i + 1] = arr[i];
        }
        delete[] this->arr;
        this->arr = newARR;
    }

    void RemoveElement(bool condition)
    {
        T* newARR = new T[this->length - 1]{};
        if (condition == true)
        {
            for (int i = 0; i < this->length - 1; i++)
            {
                newARR[i] = arr[i + 1];
            }
            this->length--;
            delete[] this->arr;
            this->arr = newARR;
        }
        else
        {
            for (int i = 0; i < this->length - 1; i++)
            {
                newARR[i] = arr[i];
            }
            this->length--;
            delete[] this->arr;
            this->arr = newARR;
        }
    }


    void RemoveElement(int index)
    {
        T* newARR = new T[this->length - 1]{};
        int i = 0;
        while (i < index)
        {
            newARR[i] = arr[i];
            i++;
        }
        for (int i = index; i < this->length; i++)
        {
            newARR[i] = arr[i + 1];
        }
        this->length--;
        delete[] this->arr;
        this->arr = newARR;
    }

    void Clear()
    {
        T* newARR = new T[0]{};
        this->length = 0;
        delete[] this->arr;
        this->arr = newARR;
    }

    void Resize(int len)
    {
        T* newARR = new T[len]{};
        if (len > this->length)
        {
            int cap = 0;
            while (cap < this->length)
            {
                newARR[cap] = arr[cap];
                cap++;
            }
            for (int i = this->length; i < len; i++)
            {
                newARR[i] = 0;
            }
            this->length = len;
        }
        else
        {
            for (int i = 0; i < len; i++)
            {
                newARR[i] = arr[i];
            }
            this->length = len;

        }

        delete[] this->arr;
        this->arr = newARR;
    }


    void Swap(int index1, int index2)
    {
        T* newARR = new T[this->length]{};
        if (index1 < index2)
        {
            int i = 0;
            int j = index1 + 1;
            int x = index2 + 1;
            while (i < index1)
            {
                newARR[i] = arr[i];
                i++;
            }
            newARR[index1] = arr[index2];
            while (j < index2)
            {
                newARR[j] = arr[j];
                j++;
            }
            newARR[index2] = arr[index1];
            while (x < this->length)
            {
                newARR[x] = arr[x];
                x++;
            }
            delete[] this->arr;
            this->arr = newARR;


        }
        else
        {
            int i = 0;
            int j = index2 + 1;
            int x = index1 + 1;
            while (i < index2)
            {
                newARR[i] = arr[i];
                i++;
            }
            newARR[index2] = arr[index1];
            while (j < index1)
            {
                newARR[j] = arr[j];
                j++;
            }
            newARR[index1] = arr[index2];
            while (x < this->length)
            {
                newARR[x] = arr[x];
                x++;
            }
            delete[] this->arr;
            this->arr = newARR;
        }

    }

    T At(int index)
    {
        return this->arr[index];
    }

    void Replace(int oldElement, int newElement)
    {
        T* newARR = new T[this->length]{};
        for (int i = 0; i < this->length; i++)
        {
            if (arr[i] != oldElement)
            {
                newARR[i] = arr[i];

            }
            else
            {
                newARR[i] = newElement;
            }
        }
        delete[] this->arr;
        this->arr = newARR;
    }
};