// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from stellar_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSSTELLARLIKEACCOUNT_HPP
#define DJINNI_GENERATED_NJSSTELLARLIKEACCOUNT_HPP


#include "NJSAmountCallback.hpp"
#include "NJSBigIntCallback.hpp"
#include "NJSBoolCallback.hpp"
#include "NJSStellarLikeAccountSignerListCallback.hpp"
#include "NJSStellarLikeFeeStatsCallback.hpp"
#include "NJSStellarLikeTransactionBuilderCpp.hpp"
#include "NJSStellarLikeTransactionCpp.hpp"
#include "NJSStringCallback.hpp"
#include <cstdint>
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/StellarLikeAccount.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSStellarLikeAccount final {
public:

    static void Initialize(Local<Object> target);
    NJSStellarLikeAccount() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::StellarLikeAccount> &object);
    static Nan::Persistent<ObjectTemplate> StellarLikeAccount_prototype;

private:
    /**
     * Checks if the current account exists on the stellar Network. If it doesn't the account needs to be activated by
     * sending an account creation operation with an amount of at least the base reserve.
     * @return Callback with a boolean indicating if the account exists on the Stellar network or not.
     */
    static NAN_METHOD(exists);

    /**
     * Create a new transaction builder to create new transaction
     * @return The transaction builder
     */
    static NAN_METHOD(buildTransaction);

    /** Broadcast the given raw transaction to the network. */
    static NAN_METHOD(broadcastRawTransaction);

    /** Broadcast the given raw transaction to the network. */
    static NAN_METHOD(broadcastTransaction);

    /** Get base reserve of the network */
    static NAN_METHOD(getBaseReserve);

    /** Get sequence number to be used in the next transaction */
    static NAN_METHOD(getSequence);

    /** Get recommended fee */
    static NAN_METHOD(getFeeStats);

    /** Get signers for this account */
    static NAN_METHOD(getSigners);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSSTELLARLIKEACCOUNT_HPP
