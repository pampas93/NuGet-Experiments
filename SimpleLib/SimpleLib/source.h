#pragma once

#define EXPORT_FUNC __declspec(dllexport)

class TestClass {

public:
  enum Operator {
    ADD = 0,
    SUBTRACT,
    MULTIPLY
  };

  static float Operation(float a, float b, Operator op);
};