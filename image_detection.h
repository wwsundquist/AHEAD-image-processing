#ifndef IMAGE_PROCESSING_H
#define IMAGEPROCESSING_H

#include <stdint.h>
#include <hls_stream.h>

#define N 16
#define M 16

extern "C" {

/*
  Edge Detection

  Arguments:
    input  (input)  --> Input array representing an image
    output  (output) --> Output array represnting the processed image
*/
void detect_edges(int input[N][M], int output[N][M]);

} 

#endif // IMAGE_PROCESSING_H
