// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ripple_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSRIPPLELIKETRANSACTIONBUILDER_HPP
#define DJINNI_GENERATED_NJSRIPPLELIKETRANSACTIONBUILDER_HPP


#include "../include/AlgorandNetworkParameters.hpp"
#include "../include/BitcoinLikeNetworkParameters.hpp"
#include "../include/CosmosLikeNetworkParameters.hpp"
#include "../include/Currency.hpp"
#include "../include/CurrencyUnit.hpp"
#include "../include/EthereumLikeNetworkParameters.hpp"
#include "../include/RippleLikeMemo.hpp"
#include "../include/RippleLikeNetworkParameters.hpp"
#include "../include/StellarLikeNetworkParameters.hpp"
#include "../include/TezosLikeNetworkParameters.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSRippleLikeTransactionCallback.hpp"
#include "NJSRippleLikeTransactionCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/RippleLikeTransactionBuilder.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSRippleLikeTransactionBuilder final {
public:

    static void Initialize(Local<Object> target);
    NJSRippleLikeTransactionBuilder() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::RippleLikeTransactionBuilder> &object);
    static Nan::Persistent<ObjectTemplate> RippleLikeTransactionBuilder_prototype;

private:
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
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setFees);

    /**
     * Set correlation id
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setCorrelationId);

    /**
     * Add a memo.
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(addMemo);

    /** An arbitrary unsigned 32-bit integer that identifies a reason for payment or a non-Ripple account */
    static NAN_METHOD(setDestinationTag);

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
#endif //DJINNI_GENERATED_NJSRIPPLELIKETRANSACTIONBUILDER_HPP
