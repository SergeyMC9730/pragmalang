#pragma once

#include "./pragmalang_flags.h"

#define gpufunc __global__
#define wait_gpu cudaDeviceSynchronize()

#define PRAGMALANG_CUDAEXTENSION_REVISION EXTENSION_INDEV