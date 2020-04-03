#include "source.h"

float TestClass::Operation(float a, float b, Operator op)
{
  switch (op)
  {
  case Operator::ADD: return a + b;
  case Operator::SUBTRACT: return a - b;
  case Operator::MULTIPLY: return a * b;
  }
  return 0.0f;
}

extern "C" {

  EXPORT_FUNC float AddNums(float a, float b) {
    return TestClass::Operation(a, b, TestClass::Operator::ADD);
  }

  EXPORT_FUNC float SubtractNums(float a, float b) {
    return TestClass::Operation(a, b, TestClass::Operator::SUBTRACT);
  }

  EXPORT_FUNC float MultiplyNums(float a, float b) {
    return TestClass::Operation(a, b, TestClass::Operator::MULTIPLY);
  }
}