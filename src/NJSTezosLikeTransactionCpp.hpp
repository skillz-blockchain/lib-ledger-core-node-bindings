// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSTEZOSLIKETRANSACTION_HPP
#define DJINNI_GENERATED_NJSTEZOSLIKETRANSACTION_HPP


#include "../include/../utils/optional.hpp"
#include "../include/TezosOperationTag.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSBigIntCpp.hpp"
#include "NJSTezosLikeAddressCpp.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/TezosLikeTransaction.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSTezosLikeTransaction final {
public:

    static void Initialize(Local<Object> target);
    NJSTezosLikeTransaction() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::TezosLikeTransaction> &object);
    static Nan::Persistent<ObjectTemplate> TezosLikeTransaction_prototype;

private:
    /** Get type of operation (transaction, reveal ... cf TezosOperationTag) */
    static NAN_METHOD(getType);

    /** Get the hash of the transaction. */
    static NAN_METHOD(getHash);

    /** Get the operation index in the transaction */
    static NAN_METHOD(getOperationIndexInTransaction);

    /** Get the operation type in the transaction */
    static NAN_METHOD(getOperationTypeInTransaction);

    /**
     * Get Fees (in drop) 
     * It returns the sum of transaction fees and reveal fees (if it exists)
     */
    static NAN_METHOD(getFees);

    /** get transaction fees (without reveal cost) */
    static NAN_METHOD(getTransactionFees);

    /** get reveal fees if the sender envolved is not revealed, else 0 */
    static NAN_METHOD(getRevealFees);

    /** Get destination XTZ. address */
    static NAN_METHOD(getReceiver);

    /** Get XTZ. sender address */
    static NAN_METHOD(getSender);

    /** Get amount of XTZ to send */
    static NAN_METHOD(getValue);

    /** Serialize the transaction to its raw format. */
    static NAN_METHOD(serialize);

    /** Set signature of transaction, when a signature is set serialize method gives back serialized Tx */
    static NAN_METHOD(setSignature);

    /**
     * Get the time when the transaction was issued or the time of the block including
     * this transaction
     */
    static NAN_METHOD(getDate);

    /** Get Signing public Key */
    static NAN_METHOD(getSigningPubKey);

    static NAN_METHOD(getCounter);

    static NAN_METHOD(getGasLimit);

    static NAN_METHOD(getStorageLimit);

    /** Get hash of block in which tx is included */
    static NAN_METHOD(getBlockHash);

    /** Get status of transaction: equals to 1 if succeeded, 0 otherwise */
    static NAN_METHOD(getStatus);

    /** Get the correlation id */
    static NAN_METHOD(getCorrelationId);

    /**
     * Set the correlation id which can be used to debug transaction errors
     * through the full ledger stack
     * @return the OLD Correlation ID, if it was set (empty string if it was unset)
     */
    static NAN_METHOD(setCorrelationId);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSTEZOSLIKETRANSACTION_HPP
