///
/// \file include/test/operator.hpp
/// \brief Test suite to validate the Operator class.
/// \author Philippe Ganz <philippe.ganz@gmail.com> 2017-2019
/// \version 1.0.1
/// \date August 2019
/// \copyright GPL-3.0
///

#ifndef ASTROQUT_TEST_OPERATOR_HPP
#define ASTROQUT_TEST_OPERATOR_HPP

#include "utils/linearop/operator/abeltransform.hpp"
#include "utils/linearop/operator/astrooperator.hpp"
#include "utils/linearop/operator/blurring.hpp"
#include "utils/linearop/operator/convolution.hpp"
#include "utils/linearop/operator/fourier.hpp"
#include "utils/linearop/operator/matmult/spline.hpp"
#include "utils/linearop/operator/wavelet.hpp"

#include <chrono>
#include <iostream>
#include <random>

namespace alias
{
namespace test
{
namespace oper
{

bool ConvolutionTest();
void ConvolutionTime(size_t data_length, size_t filter_length);

bool AbelTestBuild();
bool AbelTestApply();
bool AbelTestApply2();
bool AbelTestTransposed();
bool AbelTestTransposed2();
void AbelTime(size_t pic_size);

bool WaveletTest();
bool WaveletTest2();
bool WaveletTest3();

bool SplineTest();

bool BlurTest();

bool FourierTest();

bool AstroTest();
bool AstroTestTransposed();

} // namespace oper
} // namespace test
} // namespace alias

#endif // ASTROQUT_TEST_OPERATOR_HPP
