// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from idl.djinni

#include "AlgorandOperationType.hpp"  // my header
#include "enum_from_string.hpp"

namespace ledger { namespace core { namespace api {

std::string to_string(const AlgorandOperationType& algorandOperationType) {
    switch (algorandOperationType) {
        case AlgorandOperationType::PAYMENT: return "PAYMENT";
        case AlgorandOperationType::ACCOUNT_CLOSE: return "ACCOUNT_CLOSE";
        case AlgorandOperationType::ACCOUNT_REGISTER_ONLINE: return "ACCOUNT_REGISTER_ONLINE";
        case AlgorandOperationType::ACCOUNT_REGISTER_OFFLINE: return "ACCOUNT_REGISTER_OFFLINE";
        case AlgorandOperationType::ASSET_CREATE: return "ASSET_CREATE";
        case AlgorandOperationType::ASSET_RECONFIGURE: return "ASSET_RECONFIGURE";
        case AlgorandOperationType::ASSET_DESTROY: return "ASSET_DESTROY";
        case AlgorandOperationType::ASSET_OPT_IN: return "ASSET_OPT_IN";
        case AlgorandOperationType::ASSET_OPT_OUT: return "ASSET_OPT_OUT";
        case AlgorandOperationType::ASSET_TRANSFER: return "ASSET_TRANSFER";
        case AlgorandOperationType::ASSET_REVOKE: return "ASSET_REVOKE";
        case AlgorandOperationType::ASSET_FREEZE: return "ASSET_FREEZE";
        case AlgorandOperationType::UNSUPPORTED: return "UNSUPPORTED";
        default: return "UNKNOWN";
    };
};
template <>
AlgorandOperationType from_string(const std::string& algorandOperationType) {
    if (algorandOperationType == "PAYMENT") return AlgorandOperationType::PAYMENT;
    else if (algorandOperationType == "ACCOUNT_CLOSE") return AlgorandOperationType::ACCOUNT_CLOSE;
    else if (algorandOperationType == "ACCOUNT_REGISTER_ONLINE") return AlgorandOperationType::ACCOUNT_REGISTER_ONLINE;
    else if (algorandOperationType == "ACCOUNT_REGISTER_OFFLINE") return AlgorandOperationType::ACCOUNT_REGISTER_OFFLINE;
    else if (algorandOperationType == "ASSET_CREATE") return AlgorandOperationType::ASSET_CREATE;
    else if (algorandOperationType == "ASSET_RECONFIGURE") return AlgorandOperationType::ASSET_RECONFIGURE;
    else if (algorandOperationType == "ASSET_DESTROY") return AlgorandOperationType::ASSET_DESTROY;
    else if (algorandOperationType == "ASSET_OPT_IN") return AlgorandOperationType::ASSET_OPT_IN;
    else if (algorandOperationType == "ASSET_OPT_OUT") return AlgorandOperationType::ASSET_OPT_OUT;
    else if (algorandOperationType == "ASSET_TRANSFER") return AlgorandOperationType::ASSET_TRANSFER;
    else if (algorandOperationType == "ASSET_REVOKE") return AlgorandOperationType::ASSET_REVOKE;
    else if (algorandOperationType == "ASSET_FREEZE") return AlgorandOperationType::ASSET_FREEZE;
    else return AlgorandOperationType::UNSUPPORTED;
};

std::ostream &operator<<(std::ostream &os, const AlgorandOperationType &o)
{
    switch (o) {
        case AlgorandOperationType::PAYMENT:  return os << "PAYMENT";
        case AlgorandOperationType::ACCOUNT_CLOSE:  return os << "ACCOUNT_CLOSE";
        case AlgorandOperationType::ACCOUNT_REGISTER_ONLINE:  return os << "ACCOUNT_REGISTER_ONLINE";
        case AlgorandOperationType::ACCOUNT_REGISTER_OFFLINE:  return os << "ACCOUNT_REGISTER_OFFLINE";
        case AlgorandOperationType::ASSET_CREATE:  return os << "ASSET_CREATE";
        case AlgorandOperationType::ASSET_RECONFIGURE:  return os << "ASSET_RECONFIGURE";
        case AlgorandOperationType::ASSET_DESTROY:  return os << "ASSET_DESTROY";
        case AlgorandOperationType::ASSET_OPT_IN:  return os << "ASSET_OPT_IN";
        case AlgorandOperationType::ASSET_OPT_OUT:  return os << "ASSET_OPT_OUT";
        case AlgorandOperationType::ASSET_TRANSFER:  return os << "ASSET_TRANSFER";
        case AlgorandOperationType::ASSET_REVOKE:  return os << "ASSET_REVOKE";
        case AlgorandOperationType::ASSET_FREEZE:  return os << "ASSET_FREEZE";
        case AlgorandOperationType::UNSUPPORTED:  return os << "UNSUPPORTED";
    }
}

} } }  // namespace ledger::core::api
