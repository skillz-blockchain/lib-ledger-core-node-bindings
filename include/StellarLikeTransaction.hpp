// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from stellar_like_wallet.djinni

#ifndef DJINNI_GENERATED_STELLARLIKETRANSACTION_HPP
#define DJINNI_GENERATED_STELLARLIKETRANSACTION_HPP

#include <cstdint>
#include <memory>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class Address;
class Amount;
class BigInt;
class StellarLikeMemo;

class LIBCORE_EXPORT StellarLikeTransaction {
public:
    virtual ~StellarLikeTransaction() {}

    virtual std::vector<uint8_t> toRawTransaction() = 0;

    /** Returns the payload which should be signed by the user in order to send the transaction. */
    virtual std::vector<uint8_t> toSignatureBase() = 0;

    /** Add a new signature to the transaction envelope */
    virtual void putSignature(const std::vector<uint8_t> & signature, const std::shared_ptr<Address> & address) = 0;

    /** Returns the author of the transaction */
    virtual std::shared_ptr<Address> getSourceAccount() = 0;

    /** Returns the sequence of the source account used for this transaction */
    virtual std::shared_ptr<BigInt> getSourceAccountSequence() = 0;

    /** Returns the fee paid for this transaction to be validated */
    virtual std::shared_ptr<Amount> getFee() = 0;

    /** Returns the transaction memo */
    virtual std::shared_ptr<StellarLikeMemo> getMemo() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_STELLARLIKETRANSACTION_HPP