// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#include "NJSEventBusCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEventBus::subscribe) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSEventBus::subscribe needs 2 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::ExecutionContext>::Unwrap(njs_arg_0);

    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_1 = djinni::js::ObjectWrapper<ledger::core::api::EventReceiver>::Unwrap(njs_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EventBus>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventBus::subscribe : implementation of EventBus is not valid");
    }
    cpp_impl->subscribe(arg_0,arg_1);
}
NAN_METHOD(NJSEventBus::unsubscribe) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEventBus::unsubscribe needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::EventReceiver>::Unwrap(njs_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::EventBus>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEventBus::unsubscribe : implementation of EventBus is not valid");
    }
    cpp_impl->unsubscribe(arg_0);
}

NAN_METHOD(NJSEventBus::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEventBus function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSEventBus::EventBus_prototype;

Local<Object> NJSEventBus::wrap(const std::shared_ptr<ledger::core::api::EventBus> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EventBus_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::EventBus>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSEventBus::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSEventBus::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::EventBus>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSEventBus::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEventBus::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEventBus").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"subscribe", subscribe);
    Nan::SetPrototypeMethod(func_template,"unsubscribe", unsubscribe);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    EventBus_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSEventBus").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
