#pragma once

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define air void
#define letter char
#define number int
#define bignumber long
#define supernumber long long
#define unspec ;
#define equend unspec
#define jump(x) goto x equend
#define end ) equend
#define codepart(x) x:
#define extendedfunc(a, b) a b(
#define func(x) extendedfunc(number, x)
#define linit air langinit() { srand(1024) equend }
#define main linit func(main) func_args_end langinit();
#define runner main
#define addressify &
#define addressify_revert *
#define reference addressify_revert
#define reference_convert(x, c) (c)x
#define argcreate number
#define var argcreate
#define varp argcreate reference
#define arg argcreate
#define argp argcreate reference
#define func_args_end ) { jump(execution) codepart(execution)
#define placeholder extendedfunc(letter, placeholder) func_args_end ret(0)
#define ret(x) return x equend }
#define as(x) x
#define to(x) = x equend
#define and ,
#define add(x) += x equend
#define mul(x) *= x equend
#define div(x) /= x equend
#define print printf(
#define newline "\n" end
#define textdata(x) x) equend
#define textfmt(x, ...) x and __VA_ARGS__ end
#define data(x) x equend
#define err varp as(err_variable) to(0) reference err_variable add(1)
#define exec(x) x(
#define setarg(x) x
#define new(x) (x *)malloc(sizeof(x))
#define no free(
#define loop(a, b) while(a < b) {
#define loopend(a) a add(1) }
#define Ccode(x) x
#define data_getarray(i) [i]
#define equcheck(e) if(e) {
#define equcheck_end }
#define loopstop break equend
#define copydata(dst, src, bytes) memcpy(dst, src, bytes) equend

#define PRAGMALANG_REVISION 0x0001
