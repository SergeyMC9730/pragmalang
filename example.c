#include "example.h"

func(somefunc) func_args_end // int somefunc();
  ret(0)

extendedfunc(air, somefunc2) func_args_end // void somefunc2();
  ret()

extendedfunc(air, somefunc3) number t func_args_end // void somefunc3(int t); 
  t to(64)
  t mul(64) equend
  ret()

extendedfunc(number, somefunc4) number t func_args_end // int somefunc4(int t);
  t to(2)
  ret(t)

runner // Creates internal functions and main function
  number j to(5) // Create integer variable with value of 5
  print textfmt("Hello, world! %d", last_variable) // Print formatted.
  print newline
  ret(0)

// last_variable => Last to() action. If to(1024) was executed then last_variable will equal to 1024