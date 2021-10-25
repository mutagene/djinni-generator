// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from cpp_intefaces_as_lambdas.djinni

#pragma once

#include <cstdint>
#include <functional>
#include <memory>

class LambdaConvertibleCallback;

class InterfaceTakingLambdaConvertibleCallback {
public:
    virtual ~InterfaceTakingLambdaConvertibleCallback() {}

    virtual void method_taking_lambda_convertible_callback(float valueToSet, const std::shared_ptr<LambdaConvertibleCallback> & callback) = 0;

    virtual void second_method_taking_lambda_convertible_callback(int32_t valueToSet, const std::shared_ptr<LambdaConvertibleCallback> & callback) = 0;

    void method_taking_lambda_convertible_callback (float valueToSet, std::function<void(bool)> callbackLambda);

    void second_method_taking_lambda_convertible_callback (int32_t valueToSet, std::function<void(bool)> callbackLambda);
};
