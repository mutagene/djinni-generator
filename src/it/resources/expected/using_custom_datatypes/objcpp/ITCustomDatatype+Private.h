// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from using_custom_datatypes.djinni

#import "ITCustomDatatype.h"
#include "custom_datatype.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class ITCustomDatatype;

namespace djinni_generated {

struct CustomDatatype
{
    using CppType = ::CustomDatatype;
    using ObjcType = ITCustomDatatype*;

    using Boxed = CustomDatatype;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated