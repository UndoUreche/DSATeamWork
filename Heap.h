//
// Created by Vlad on 17-Apr-19.
//

#ifndef DSATEAMWORK_HEAP_H
#define DSATEAMWORK_HEAP_H

typedef TElem int

class Heap
{
private:
    TElem *elements;
    TElem getLeftChild(int position) { return elements[2*position+1 ]; }
    TElem getRightChild(int position) { return elements[2*position+2]; }
    TElem getParent(int position) { return elements[position/2]; }


    void bubbleUp(); //todo for Vlad
    void bubbleDown(); //todo for Andu


public:
    Heap();

    void readFromList();

    /* todo Andu
    * description The k smallest elements from the heap will be removed
     * pre: k>0 and k<number of elements
     * post: the k smallest elements will be removed
     * throws exception if k<0 or if k>number of elements
     */

    void removeSmallestElements(int k); //todo for Andu


    void removeTop(); //todo for Andu

    void writeToList();


};


#endif //DSATEAMWORK_HEAP_H
