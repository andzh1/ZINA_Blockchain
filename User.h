#include "definitions.h"
#include "Transaction.h"
#include "hash_functions.h"

class User {
public:
    User();

    explicit User(const secret_key_t &secret_key);

    ~User();

    void dbg() const;

    void sendTransaction(Transaction &transaction);

    void signTransaction(Transaction &transaction);

    static void fill_random(uint8_t *data, size_t size);

    static void print_hex(const uint8_t *data, size_t size);

    Hash getHash();

private:
    ecc_pair_t _keys{};
    compressed_public_key_t _compressed_pubkey;
    secp256k1_context *_ctx = secp256k1_context_create(SECP256K1_CONTEXT_SIGN | SECP256K1_CONTEXT_VERIFY);
};
