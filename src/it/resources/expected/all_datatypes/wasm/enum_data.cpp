// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from all_datatypes.djinni

#include "enum_data.hpp"  // my header
#include <mutex>

namespace djinni_generated {

namespace {
    EM_JS(void, djinni_init__enum_data_consts, (), {
        Module.EnumData =  {
            A : 0,
            B : 1,
        }
    })
}

void EnumData::staticInitializeConstants() {
    static std::once_flag initOnce;
    std::call_once(initOnce, [] {
        djinni_init__enum_data_consts();
    });
}

EMSCRIPTEN_BINDINGS(_enum_data) {
    EnumData::staticInitializeConstants();
}

}  // namespace djinni_generated
