#include "BlockChain.h"

hash_t BlockChain::get_hash_of_last() {

}

void BlockChain::add_block(Block to_add) { // #TODO How to push exactly in required branch of blockchain?


}




// // #TODO Singleton
// class BlockChain {
// public:
//     // BlockChain static getInstance() { 
//     //     if (_pointerToInstance == nullptr) {  // #TODO figure out how to check existance of object
//     //         BlockChain instance = BlockChain();
//     //         *_pointerToInstance = instance;
//     //     }
//     //     return *_pointerToInstance;
//     // }
//     void update();
//     hash_t getHashOfLast();
// private:
//     // static BlockChain* _pointerToInstance;
//     // BlockChain() {
//     // }
//     std::list<Block> _chain;
//     // std::list<Block> currentBlockChain;
// };