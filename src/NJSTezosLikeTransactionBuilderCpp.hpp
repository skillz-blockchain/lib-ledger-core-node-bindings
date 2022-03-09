// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSTEZOSLIKETRANSACTIONBUILDER_HPP
#define DJINNI_GENERATED_NJSTEZOSLIKETRANSACTIONBUILDER_HPP


#include "../include/AlgorandNetworkParameters.hpp"
#include "../include/BitcoinLikeNetworkParameters.hpp"
#include "../include/CosmosLikeNetworkParameters.hpp"
#include "../include/Currency.hpp"
#include "../include/CurrencyUnit.hpp"
#include "../include/EthereumLikeNetworkParameters.hpp"
#include "../include/RippleLikeNetworkParameters.hpp"
#include "../include/StellarLikeNetworkParameters.hpp"
#include "../include/TezosLikeNetworkParameters.hpp"
#include "../include/TezosOperationTag.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSBigIntCpp.hpp"
#include "NJSTezosLikeTransactionCallback.hpp"
#include "NJSTezosLikeTransactionCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/TezosLikeTransactionBuilder.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSTezosLikeTransactionBuilder final {
public:

    static void Initialize(Local<Object> target);
    NJSTezosLikeTransactionBuilder() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::TezosLikeTransactionBuilder> &object);
    static Nan::Persistent<ObjectTemplate> TezosLikeTransactionBuilder_prototype;

private:
    /**
     * Set type of operation (transaction, origination, reveal ...)
     * Default operation is "transaction" type
     */
    static NAN_METHOD(setType);

    /**
     * Send funds to the given address. This method can be called multiple times to send to multiple addresses.
     * @param amount The value to send
     * @param address Address of the recipient
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(sendToAddress);

    /**
     * Send all available funds to the given address.
     * @param address Address of the recipient
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(wipeToAddress);

    /**
     * Set fees (in drop) the originator is willing to pay
     * Set transaction and (if needed) reveal fees with 'fees'
     * equivalent to call both functions setTransactionFees(fees) and setRevealFees(fees)
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setFees);

    /**
     * Set transaction fees (in drop) the originator is willing to pay (reveal is not included)
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setTransactionFees);

    /**
     * Set reveal fees (in drop) the originator is willing to pay 
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setRevealFees);

    /**
     * Set gas limit the originator is not willing to exceed.
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setGasLimit);

    /**
     * Set storage limit the originator is not willing to exceed.
     * Reference : https://tezos.gitlab.io/zeronet/whitedoc/michelson.html
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setStorageLimit);

    /**
     * Set the correlation id (used to track a transaction)
     * @return A reference on the same builder in order to chain calls.
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
#endif //DJINNI_GENERATED_NJSTEZOSLIKETRANSACTIONBUILDER_HPP
