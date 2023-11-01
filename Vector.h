#pragma once
template <typename T>
class Vector {
private:
    T* array = new T[10];
    int size;
    int capacity;
public:
    Vector() : size(0), capacity(10) {}
    ~Vector() { delete[] array; }


    int getSize() { return size; }

    int getCapacity() { return capacity; }

    void push_back(T element)
    {
        if (size < capacity)
            array[size++] = element;
        else
        {
            capacity *= 2;
            T* new_array = new T[capacity];
            for (int i = 0; i < size; i++)
                new_array[i] = array[i];

            delete[] array;
            array = new_array;

        }
    }


    void pop_back()
    {
        if (size > 0)
            size--;
    }

    T at(int index)
    {
        if (index >= 0 && index < size)
            return array[index];
    }
    T operator[] (int index)
    {
        return at(index);
    }

};



