#ifndef ARRAYMANAGER_H
#define ARRAYMANAGER_H

#include "DataStructureParent.h"

class ArrayManager : DataStructureParent
{
    public:
        ArrayManager();
        virtual ~ArrayManager();

        void add(int element) override;
        void remove(int index) override;
        int search(int element) override;
        void sort() override;
        void print() override;
        void help() override;

        void dataStructureCommandLine() override;

    private:
        int* arr;
        int size;
        bool is_sorted = false;
};

#endif // ARRAYMANAGER_H
