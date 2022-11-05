// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from all_datatypes_json.djinni

#pragma once

#include "enum_data+json.hpp"
#include "json+extension.hpp"
#include "my_flags+json.hpp"
#include <chrono>
#include <cstdint>
#include <nlohmann/json.hpp>
#include <optional>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

inline void from_json(const nlohmann::json & j, all_datatypes_json& result)  {
    if (j.contains("booleanData")) {
        j.at("booleanData").get_to(result.booleanData);
    }
    if (j.contains("integer8Data")) {
        j.at("integer8Data").get_to(result.integer8Data);
    }
    if (j.contains("integer16Data")) {
        j.at("integer16Data").get_to(result.integer16Data);
    }
    if (j.contains("integer32Data")) {
        j.at("integer32Data").get_to(result.integer32Data);
    }
    if (j.contains("integer64Data")) {
        j.at("integer64Data").get_to(result.integer64Data);
    }
    if (j.contains("float32Data")) {
        j.at("float32Data").get_to(result.float32Data);
    }
    if (j.contains("float64Data")) {
        j.at("float64Data").get_to(result.float64Data);
    }
    if (j.contains("stringData")) {
        j.at("stringData").get_to(result.stringData);
    }
    if (j.contains("binaryData")) {
        j.at("binaryData").get_to(result.binaryData);
    }
    if (j.contains("dateData")) {
        j.at("dateData").get_to(result.dateData);
    }
    if (j.contains("listData")) {
        j.at("listData").get_to(result.listData);
    }
    if (j.contains("setData")) {
        j.at("setData").get_to(result.setData);
    }
    if (j.contains("mapData")) {
        j.at("mapData").get_to(result.mapData);
    }
    if (j.contains("optionalData")) {
        j.at("optionalData").get_to(result.optionalData);
    }
    if (j.contains("enum_data")) {
        j.at("enum_data").get_to(result.enum_data);
    }
    if (j.contains("myFlags")) {
        j.at("myFlags").get_to(result.myFlags);
    }
}
inline void to_json(nlohmann::json & j, const all_datatypes_json & item)  {
    j = nlohmann::json {
        {"booleanData", item.booleanData},
        {"integer8Data", item.integer8Data},
        {"integer16Data", item.integer16Data},
        {"integer32Data", item.integer32Data},
        {"integer64Data", item.integer64Data},
        {"float32Data", item.float32Data},
        {"float64Data", item.float64Data},
        {"stringData", item.stringData},
        {"binaryData", item.binaryData},
        {"dateData", item.dateData},
        {"listData", item.listData},
        {"setData", item.setData},
        {"mapData", item.mapData},
        {"optionalData", item.optionalData},
        {"enum_data", item.enum_data},
        {"myFlags", item.myFlags}
    };
}
