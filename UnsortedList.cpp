#include "UnsortedList.h"

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    currentPos = 0;
}

template<class T>
void UnsortedList<T>::MakeEmpty() {
    length = 0;
}

template<class T>
bool UnsortedList<T>::IsFull() const {
    return length == MAX_ITEMS;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {

    for (int i = 0; i < length; i++) {
        if (info[i] == someItem) {
            return true;
        }
    }

    return false;
}

template<class T>
void UnsortedList<T>::PutItem(T item) {
    if (length >= MAX_ITEMS)
        return;

    info[length++] = item;
}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    // find the item
    for (int i = 0; i < length; i++) {
        if (info[i] == item) {
            info[i] = info[length - 1];
            length--;
            return;
        }
    }

    /* BAAAAAD */
    // find the item
//    int i;
//    for (i = 0; i < length; i++) {
//        if (info[i] == item) {
//            break;
//        }
//    }
//
//    info[i] = info[length - 1];
//    length--;
}

template<class T>
void UnsortedList<T>::ResetIterator() {
    currentPos = -1;
}

template<class T>
T UnsortedList<T>::GetNextItem() {
    if (currentPos >= length){
        throw "Out of bounds";
    }
    currentPos++;
    return info[currentPos];
}

