#include "Example2.h"

void Entry(float const *in, float *out) {
  #pragma HLS INTERFACE m_axi port=in bundle=gmem0 offset=slave 
  #pragma HLS INTERFACE m_axi port=out bundle=gmem1 offset=slave 
  #pragma HLS INTERFACE s_axilite port=in
  #pragma HLS INTERFACE s_axilite port=out
  #pragma HLS INTERFACE s_axilite port=return
  Stencil2D(in, out);
}
