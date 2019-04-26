//
// Created by Vlad on 17-Apr-19.
//

#include "Heap.h"

Heap::Heap()
{
    size=0;
    capacity=10;
    elements = new TElem[capacity];
}

Heap::~Heap()
{
    delete [] elements;
}

void Heap::bubbleUp(TElem newElement)
{
    if(size+1>capacity) //we double if there is not enough size
        doubleCapacity();
    elements[size] = newElement; //we append the new element to the end
    int position = size++; // we take the position before incrementing size

    while (elements[position] < elements[getParent(position)]) // while the elements are not in a good order, keep swapping
    {
        //switching
        int temp = elements[position];
        elements[position] = elements[getParent(position) ];
        elements[getParent(position)] = temp;
        position = getParent(position); //update position
    }
}

void Heap::doubleCapacity()
{
    TElem *newElements = new TElem[2*capacity];
    for(int i=0;i<size;i++)
    {
        newElements[i] = elements[i];
    }
    capacity*=2;
    delete [] elements;
    elements = newElements;

}

void Heap::readFromList(std::list<TElem> readingList)
{
    for(auto const &element:readingList)
    {
        add(element);
    }
}

void Heap::writeToList(std::list<TElem> writingList)
{

}

