#include <iostream>

class heap {

    public:
        vector<int> heap_array;
        int size = 0;


    void insert(int val) {
        int size = size + 1;
        int index = size;

        heap_array[index] = val;

        while (index > 1) {
            int parent  = index / 2;
            if (heap_array.at(parent) < heap_array.at(index)) {
                swap(heap_array[parent], heap_array[index]);
                index = parent;

            } else {
                return;
            }
    }

    void deletefromHeap() {
        if (size == 0) {
            return;
        }
        int index = 1;

        heap_array[index] = heap_array[size];

        while (index < size) {
            int leftIndex = index * 2 ;
            int rightIndex = index * 2 + 1;
            if (leftIndex < size && heap_array.at(index) < heap_array.at(leftIndex)) {
                swap(heap_array[index], heap_array[leftIndex]);
                index = leftIndex;
            } else if (rightIndex < size && heap_array.at(index) < heap_array.at(rightIndex)) {
                swap(heap_array[index], heap_array[rightIndex]);
                index = rightIndex;
            } else {
                return;
            }
        }
    }

    void heapify();

    void heapSort();

    }
}


int main() {

    return 0;
}