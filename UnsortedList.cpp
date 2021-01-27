#include "UnsortedList.h"

UnsortedList::UnsortedList() {
    length = 0;
    currentPos = 0;
}

void UnsortedList::MakeEmpty() {
    length = 0;
}

bool UnsortedList::IsFull() const {
    return length == MAX_ITEMS;
}

int UnsortedList::GetLength() const {
    return length;
}

bool UnsortedList::Contains(int someItem) {

    for (int i = 0; i < length; i++) {
        if (info[i] == someItem) {
            return true;
        }
    }

    return false;
}


void UnsortedList::PutItem(int item) {

    if (length >= MAX_ITEMS)
        return;

    info[length++] = item;

}

void UnsortedList::DeleteItem(int item) {

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

void UnsortedList::ResetIterator() {
    currentPos = -1;
}

int UnsortedList::GetNextItem() {
    if (currentPos >= length){
        throw "Out of bounds";
    }
    currentPos++;
    return info[currentPos];
}
