// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKENETWORKPARAMETERS_HPP
#define DJINNI_GENERATED_BITCOINLIKENETWORKPARAMETERS_HPP

#include "BitcoinLikeDustPolicy.hpp"
#include "BitcoinLikeFeePolicy.hpp"
#include <cstdint>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

namespace ledger { namespace core { namespace api {

/** Bitcoin network parameters. */
struct BitcoinLikeNetworkParameters final {
    /** Name of the network. */
    std::string Identifier;
    /** Version of the Pay To Public Hash standard. */
    std::vector<uint8_t> P2PKHVersion;
    /** Version of the Pay To Script Hash standard. */
    std::vector<uint8_t> P2SHVersion;
    /** Version of the Extended Public Key standard. */
    std::vector<uint8_t> XPUBVersion;
    /** Policy to use when expressing fee amount. */
    BitcoinLikeFeePolicy FeePolicy;
    /** Minimal amount a UTXO should have before being considered BTC dust. */
    int64_t Dust;
    /** Policy to use when expressing dust */
    BitcoinLikeDustPolicy DustPolicy;
    /** Constant prefix to prepend all signature messages. */
    std::string MessagePrefix;
    /** Are transactions encoded with timestamp? */
    bool UsesTimestampedTransaction;
    /** Delay applied to all timestamps. Used to debounce transactions. */
    int64_t TimestampDelay;
    /** Bitcoin signature flag indicating what part of a transaction a signature signs. */
    std::vector<uint8_t> SigHash;
    /** Addition BIPs enabled for this network. */
    std::vector<std::string> AdditionalBIPs;

    BitcoinLikeNetworkParameters(std::string Identifier_,
                                 std::vector<uint8_t> P2PKHVersion_,
                                 std::vector<uint8_t> P2SHVersion_,
                                 std::vector<uint8_t> XPUBVersion_,
                                 BitcoinLikeFeePolicy FeePolicy_,
                                 int64_t Dust_,
                                 BitcoinLikeDustPolicy DustPolicy_,
                                 std::string MessagePrefix_,
                                 bool UsesTimestampedTransaction_,
                                 int64_t TimestampDelay_,
                                 std::vector<uint8_t> SigHash_,
                                 std::vector<std::string> AdditionalBIPs_)
    : Identifier(std::move(Identifier_))
    , P2PKHVersion(std::move(P2PKHVersion_))
    , P2SHVersion(std::move(P2SHVersion_))
    , XPUBVersion(std::move(XPUBVersion_))
    , FeePolicy(std::move(FeePolicy_))
    , Dust(std::move(Dust_))
    , DustPolicy(std::move(DustPolicy_))
    , MessagePrefix(std::move(MessagePrefix_))
    , UsesTimestampedTransaction(std::move(UsesTimestampedTransaction_))
    , TimestampDelay(std::move(TimestampDelay_))
    , SigHash(std::move(SigHash_))
    , AdditionalBIPs(std::move(AdditionalBIPs_))
    {}

    BitcoinLikeNetworkParameters(const BitcoinLikeNetworkParameters& cpy) {
       this->Identifier = cpy.Identifier;
       this->P2PKHVersion = cpy.P2PKHVersion;
       this->P2SHVersion = cpy.P2SHVersion;
       this->XPUBVersion = cpy.XPUBVersion;
       this->FeePolicy = cpy.FeePolicy;
       this->Dust = cpy.Dust;
       this->DustPolicy = cpy.DustPolicy;
       this->MessagePrefix = cpy.MessagePrefix;
       this->UsesTimestampedTransaction = cpy.UsesTimestampedTransaction;
       this->TimestampDelay = cpy.TimestampDelay;
       this->SigHash = cpy.SigHash;
       this->AdditionalBIPs = cpy.AdditionalBIPs;
    }

    BitcoinLikeNetworkParameters() = default;


    BitcoinLikeNetworkParameters& operator=(const BitcoinLikeNetworkParameters& cpy) {
       this->Identifier = cpy.Identifier;
       this->P2PKHVersion = cpy.P2PKHVersion;
       this->P2SHVersion = cpy.P2SHVersion;
       this->XPUBVersion = cpy.XPUBVersion;
       this->FeePolicy = cpy.FeePolicy;
       this->Dust = cpy.Dust;
       this->DustPolicy = cpy.DustPolicy;
       this->MessagePrefix = cpy.MessagePrefix;
       this->UsesTimestampedTransaction = cpy.UsesTimestampedTransaction;
       this->TimestampDelay = cpy.TimestampDelay;
       this->SigHash = cpy.SigHash;
       this->AdditionalBIPs = cpy.AdditionalBIPs;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(Identifier, P2PKHVersion, P2SHVersion, XPUBVersion, FeePolicy, Dust, DustPolicy, MessagePrefix, UsesTimestampedTransaction, TimestampDelay, SigHash, AdditionalBIPs);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(Identifier, P2PKHVersion, P2SHVersion, XPUBVersion, FeePolicy, Dust, DustPolicy, MessagePrefix, UsesTimestampedTransaction, TimestampDelay, SigHash, AdditionalBIPs);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKENETWORKPARAMETERS_HPP
