// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "NJSRippleLikeExtendedPublicKeyCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSRippleLikeExtendedPublicKey::derive) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::derive needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::derive : implementation of RippleLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->derive(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSRippleLikeAddress::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSRippleLikeExtendedPublicKey::derivePublicKey) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::derivePublicKey needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::derivePublicKey : implementation of RippleLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->derivePublicKey(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<String>(djinni::js::hex::toString(result)).ToLocalChecked();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSRippleLikeExtendedPublicKey::deriveHash160) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::deriveHash160 needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::deriveHash160 : implementation of RippleLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->deriveHash160(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<String>(djinni::js::hex::toString(result)).ToLocalChecked();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSRippleLikeExtendedPublicKey::toBase58) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::toBase58 needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::toBase58 : implementation of RippleLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->toBase58();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeExtendedPublicKey::getRootPath) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::getRootPath needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey::getRootPath : implementation of RippleLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->getRootPath();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSRippleLikeExtendedPublicKey::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSRippleLikeExtendedPublicKey function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSRippleLikeExtendedPublicKey::RippleLikeExtendedPublicKey_prototype;

Local<Object> NJSRippleLikeExtendedPublicKey::wrap(const std::shared_ptr<ledger::core::api::RippleLikeExtendedPublicKey> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(RippleLikeExtendedPublicKey_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::RippleLikeExtendedPublicKey>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSRippleLikeExtendedPublicKey::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSRippleLikeExtendedPublicKey::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeExtendedPublicKey>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSRippleLikeExtendedPublicKey::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSRippleLikeExtendedPublicKey::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSRippleLikeExtendedPublicKey").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"derive", derive);
    Nan::SetPrototypeMethod(func_template,"derivePublicKey", derivePublicKey);
    Nan::SetPrototypeMethod(func_template,"deriveHash160", deriveHash160);
    Nan::SetPrototypeMethod(func_template,"toBase58", toBase58);
    Nan::SetPrototypeMethod(func_template,"getRootPath", getRootPath);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    RippleLikeExtendedPublicKey_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSRippleLikeExtendedPublicKey").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
