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
#define ret(x) return x equend }
#define lpush air push(number x) {}
#define lpop number pop() {number x unspec return equend}
#define linit air langinit() { srand(1024) equend } lpush lpop
#define runnermain linit func(main) func_args_end langinit();
#define linit_decl air langinit() equend
#define main_decl int main() equend
#define runner runnermain
#define runner_decl linit_decl main_decl
#define addressify &
#define addressify_revert *
#define reference addressify_revert
#define reference_convert(x, c) (c)x
#define func_args_end ) { jump(execution) codepart(execution)
#define placeholder extendedfunc(letter, placeholder) func_args_end ret(0)
#define varcreate(x) push(x) equend
#define last_variable pop()
#define as(x) x
#define to(x) = x equend varcreate(x)
#define add(x) += x
#define mul(x) *= x
#define div(x) /= x
#define and ,
#define print printf(
#define newline "\n" end
#define textdata(x) x) equend
#define textfmt(x, ...) x and __VA_ARGS__ end
#define data(x) x equend
#define err varp as(err_variable) to(0) reference err_variable add(1)
#define exec(x) x(
#define setarg(x) x
#define new(x) (x *)malloc(sizeof(x))
#define delete free(
#define loop(a, b) while(a < b) {
#define loopend(a) a add(1) }
#define executeC(x) x
#define array_at(i) [i]
#define equcheck(e) if(e) {
#define equcheck_end }
#define loopstop break equend
#define external extern

#define PRAGMALANG_REVISION 0x0003
