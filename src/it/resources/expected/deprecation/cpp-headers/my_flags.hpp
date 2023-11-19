// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from deprecation.djinni

#pragma once

#include <functional>

/**
 * flags comment
 *
 * @deprecated Use someother flags
 */
enum class [[deprecated("Use someother flags")]] MyFlags : unsigned {
    /** @deprecated Use someother flag */
    FLAG1 = 1u << 0,
    /** not deprecated */
    FLAG2 = 1u << 1,
};
constexpr MyFlags operator|(MyFlags lhs, MyFlags rhs) noexcept {
    return static_cast<MyFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs));
}
inline MyFlags& operator|=(MyFlags& lhs, MyFlags rhs) noexcept {
    return lhs = lhs | rhs;
}
constexpr MyFlags operator&(MyFlags lhs, MyFlags rhs) noexcept {
    return static_cast<MyFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs));
}
inline MyFlags& operator&=(MyFlags& lhs, MyFlags rhs) noexcept {
    return lhs = lhs & rhs;
}
constexpr MyFlags operator^(MyFlags lhs, MyFlags rhs) noexcept {
    return static_cast<MyFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs));
}
inline MyFlags& operator^=(MyFlags& lhs, MyFlags rhs) noexcept {
    return lhs = lhs ^ rhs;
}
constexpr MyFlags operator~(MyFlags x) noexcept {
    return static_cast<MyFlags>(~static_cast<unsigned>(x));
}

namespace std {

template <>
struct hash<::MyFlags> {
    size_t operator()(::MyFlags type) const {
        return std::hash<unsigned>()(static_cast<unsigned>(type));
    }
};

}  // namespace std
