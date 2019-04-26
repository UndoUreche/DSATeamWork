//
// Created by Vlad on 26-Apr-19.
//

#include <iostream>
#include "Tests.h"

void Tests::testAll()
{
    testCreationAndAdditionToHeap();
    testReadingFromList();
    testRemovalOfSmallestElements();
    testReadingFromList();
    testTopRemoval();
    testWriteToList();

}

void Tests::testCreationAndAdditionToHeap()
{
    Heap heapInstance;
    heapInstance.add(10);
    heapInstance.add(20);
    heapInstance.add(30);
    heapInstance.add(15);
    heapInstance.add(25);
    assert(heapInstance.elements[0] == 10);
    assert(heapInstance.elements[1] == 15);
    assert(heapInstance.elements[2] == 25);
    assert(heapInstance.elements[3] == 20);
    assert(heapInstance.elements[4] == 30);


    Heap heapInstance2;
    std::list<TElem> testList;
    testList.push_back(10);
    testList.push_back(20);
    testList.push_back(30);
    testList.push_back(15);
    testList.push_back(25);
    heapInstance2.readFromList(testList);

    assert(heapInstance.elements[0] == 10);
    assert(heapInstance.elements[1] == 15);
    assert(heapInstance.elements[2] == 25);
    assert(heapInstance.elements[3] == 20);
    assert(heapInstance.elements[4] == 30);
}

void Tests::testReadingFromList()
{

}

void Tests::testRemovalOfSmallestElements()
{

}

void Tests::testTopRemoval()
{

}

void Tests::testWriteToList()
{

}

