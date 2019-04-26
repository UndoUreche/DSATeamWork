//
// Created by Vlad on 26-Apr-19.
//

#ifndef DSATEAMWORK_TESTS_H
#define DSATEAMWORK_TESTS_H
#include "Heap.h"
#include <assert.h>


class Tests
{
public:

    static void testAll();
    static void testCreationAndAdditionToHeap();
    static void testReadingFromList();
    static void testRemovalOfSmallestElements();
    static void testTopRemoval();
    static void testWriteToList();

};


#endif //DSATEAMWORK_TESTS_H
