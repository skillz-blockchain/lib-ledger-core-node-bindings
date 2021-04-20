// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSERC20LIKEOPERATIONCALLBACK_HPP
#define DJINNI_GENERATED_NJSERC20LIKEOPERATIONCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/ERC20LikeOperation.hpp"
#include "../include/Error.hpp"
#include "NJSERC20LikeOperationCpp.hpp"
#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/ERC20LikeOperationCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSERC20LikeOperationCallback: public ledger::core::api::ERC20LikeOperationCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::ERC20LikeOperationCallback> &object);
    static Nan::Persistent<ObjectTemplate> ERC20LikeOperationCallback_prototype;
    ~NJSERC20LikeOperationCallback()
    {
        pers_resolver.Reset();
    };
    NJSERC20LikeOperationCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete.
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::shared_ptr<::ledger::core::api::ERC20LikeOperation> & result, const std::experimental::optional<::ledger::core::api::Error> & error);

private:
    /**
     * Method triggered when main task complete.
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSERC20LIKEOPERATIONCALLBACK_HPP
