#pragma once
#include "Block.h"
#include <list>


// #TODO Singleton
class BlockChain {
public:
    // BlockChain static getInstance() { 
    //     if (_pointerToInstance == nullptr) {  // #TODO figure out how to check existance of object
    //         BlockChain instance = BlockChain();
    //         *_pointerToInstance = instance;
    //     }
    //     return *_pointerToInstance;
    // }
    void update();
    hash_t getHashOfLast();
    void addBlock(Block to_add);
private:
    // static BlockChain* _pointerToInstance;
    // BlockChain() {
    // }
    std::list<Block> _chain;
    // std::list<Block> currentBlockChain;
};