// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#ifndef DJINNI_GENERATED_NJSALLOCATIONMETRICS_HPP
#define DJINNI_GENERATED_NJSALLOCATIONMETRICS_HPP


#include <cstdint>
#include <memory>
#include <string>
#include <unordered_map>

#include <nan.h>
#include <node.h>
#include "../include/AllocationMetrics.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAllocationMetrics final {
public:

    static void Initialize(Local<Object> target);
    NJSAllocationMetrics() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::AllocationMetrics> &object);
    static Nan::Persistent<ObjectTemplate> AllocationMetrics_prototype;

private:
    static NAN_METHOD(getObjectAllocations);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSALLOCATIONMETRICS_HPP
