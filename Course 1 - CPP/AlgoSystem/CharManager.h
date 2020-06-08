#ifndef CHARMANAGER_H
#define CHARMANAGER_H

#include "DataStructureParent.h"


class CharManager : DataStructureParent
{
    public:
        CharManager();
        virtual ~CharManager();

        void add(char element) override;
        void remove(int index) override;
        void search(char value) override;
        void sort() override;
        void print() override;
        void help() override;

        void dataStructureCommandLine() override;

    private:
        char* arr;
        int size;
        bool is_sorted = false;
};

#endif // CHARMANAGER_H
