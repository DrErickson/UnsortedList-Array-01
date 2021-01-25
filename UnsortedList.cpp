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

}

void UnsortedList::DeleteItem(int item) {

}

void UnsortedList::ResetIterator() {

}

int UnsortedList::GetNextItem() {
    return 0;
}
