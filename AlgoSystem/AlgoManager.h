//
// Created by Lotus on 25/05/2020.
//

#ifndef ALGOSYSTEM_ALGOMANAGER_H
#define ALGOSYSTEM_ALGOMANAGER_H


class AlgoManager {
public:
    AlgoManager(); // Constructor - What happens when you create a new instance
    ~AlgoManager(); // Destructor - What happens when the instance gets deleted from memory

    void startCommandLine();

private:
    void printHelp();

    int command; // Command the user chose
    const int END_COMMAND = 3; // On change will give an error!
};


#endif //ALGOSYSTEM_ALGOMANAGER_H
