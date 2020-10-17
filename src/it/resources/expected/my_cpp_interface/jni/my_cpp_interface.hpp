// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from my_cpp_interface.djinni

#pragma once

#include "djinni_support.hpp"
#include "my_cpp_interface.hpp"

namespace djinni_generated {

class MyCppInterface final : ::djinni::JniInterface<::MyCppInterface, MyCppInterface> {
public:
    using CppType = std::shared_ptr<::MyCppInterface>;
    using CppOptType = std::shared_ptr<::MyCppInterface>;
    using JniType = jobject;

    using Boxed = MyCppInterface;

    ~MyCppInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<MyCppInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<MyCppInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    MyCppInterface();
    friend ::djinni::JniClass<MyCppInterface>;
    friend ::djinni::JniInterface<::MyCppInterface, MyCppInterface>;

};

}  // namespace djinni_generated
