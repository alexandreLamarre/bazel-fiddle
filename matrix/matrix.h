#ifndef MATRIX_HPC_H
#define MATRIX_HPC_H

//helpers for allocation

/**
 * @brief Contiguous 2D array allocation
 * 
 * @tparam T the datatype to stored in the 2D array
 * @param col_max number of columns in 2D array
 * @param row_max  number of rows in 2D array
 * @return T** pointer
 */
template <typename T>
T **calloc2D(int col_max, int row_max);

/**
 * @brief Free the memory associated with calloc2D function
 * 
 * @tparam T the datatype to stored in the 2D array
 * @param x the 2D array of type T to free
 * @param col_max number of columns in 2D array
 * @param row_max  number of rows in 2D array
 */
template <typename T>
void free2D(T **x, int col_max, int row_max);

#endif // !MATRIX_HPC_H
