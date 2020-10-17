// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from using_custom_datatypes.djinni

#include "other_record.hpp"  // my header
#include "custom_datatype.hpp"

namespace djinni_generated {

OtherRecord::OtherRecord() = default;

OtherRecord::~OtherRecord() = default;

auto OtherRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<OtherRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni_generated::CustomDatatype::fromCpp(jniEnv, c.customDatatypeData)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto OtherRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<OtherRecord>::get();
    return {::djinni_generated::CustomDatatype::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_customDatatypeData))};
}

}  // namespace djinni_generated
