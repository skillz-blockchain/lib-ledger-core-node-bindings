// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKETRANSACTIONBUILDER_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKETRANSACTIONBUILDER_HPP


#include "../include/AlgorandNetworkParameters.hpp"
#include "../include/BitcoinLikeNetworkParameters.hpp"
#include "../include/CosmosLikeNetworkParameters.hpp"
#include "../include/Currency.hpp"
#include "../include/CurrencyUnit.hpp"
#include "../include/EthereumLikeNetworkParameters.hpp"
#include "../include/RippleLikeNetworkParameters.hpp"
#include "../include/StellarLikeNetworkParameters.hpp"
#include "../include/TezosLikeNetworkParameters.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSCosmosLikeMessageCpp.hpp"
#include "NJSCosmosLikeTransactionCallback.hpp"
#include "NJSCosmosLikeTransactionCpp.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/CosmosLikeTransactionBuilder.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeTransactionBuilder final {
public:

    static void Initialize(Local<Object> target);
    NJSCosmosLikeTransactionBuilder() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeTransactionBuilder> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeTransactionBuilder_prototype;

private:
    /**
     * Set memo
     * @param memo the memo to set
     */
    static NAN_METHOD(setMemo);

    /**
     * Set sequence
     * @param sequence The sequence to set
     */
    static NAN_METHOD(setSequence);

    /**
     * Set accountNumber
     * @param accountNumber The accountNumber to set
     */
    static NAN_METHOD(setAccountNumber);

    /**
     * Add a new message in the internal range of messages
     * @param msg a new message
     */
    static NAN_METHOD(addMessage);

    /**
     * Set gas price
     * @param gas The gas to set
     */
    static NAN_METHOD(setGas);

    /**
     * Set gas Adjusment factor when estimating gas
     * @param gasAdjustment The (multiplicative) factor for gas evaluation
     */
    static NAN_METHOD(setGasAdjustment);

    /**
     * Set fee
     * Here the fee represents the gas price multiplied by the gas used
     * @param fee The fee to set
     */
    static NAN_METHOD(setFee);

    /**
     * Set correlation id
     * @param id to track transaction through ledger track
     */
    static NAN_METHOD(setCorrelationId);

    /** Build a transaction from the given builder parameters. */
    static NAN_METHOD(build);

    /**
     * Creates a clone of this builder.
     * @return A copy of the current builder instance.
     */
    static NAN_METHOD(clone);

    /** Reset the current instance to its initial state */
    static NAN_METHOD(reset);

    static NAN_METHOD(parseRawUnsignedTransaction);

    static NAN_METHOD(parseRawSignedTransaction);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSCOSMOSLIKETRANSACTIONBUILDER_HPP
