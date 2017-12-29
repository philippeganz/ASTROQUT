///
/// \file src/test/matrix.cpp
/// \brief Implementation of the Matrix class test suite.
/// \author Philippe Ganz <philippe.ganz@gmail.com>
/// \version 0.2.0
/// \date 2017-12-29
/// \copyright GPL-3.0
///

#include "test/matrix.hpp"

namespace astroqut{
namespace test{
namespace matrix{

const Matrix<int> int_square_matrix(new int[9]{1,2,3,4,5,6,7,8,9}, 3, 3);
const Matrix<int> int_rect_matrix(new int[10]{1,2,3,4,5,6,7,8,9,10}, 2, 5);
const Matrix<long> long_square_matrix(new long[9]{1,2,3,4,5,6,7,8,9}, 3, 3);
const Matrix<long> long_rect_matrix(new long[10]{1,2,3,4,5,6,7,8,9,10}, 2, 5);
const Matrix<float> float_square_matrix(new float[9]{1,2,3,4,5,6,7,8,9}, 3, 3);
const Matrix<float> float_rect_matrix(new float[10]{1,2,3,4,5,6,7,8,9,10}, 2, 5);
const Matrix<double> double_square_matrix(new double[9]{1,2,3,4,5,6,7,8,9}, 3, 3);
const Matrix<double> double_rect_matrix(new double[10]{1,2,3,4,5,6,7,8,9,10}, 2, 5);

bool TransposeSquare()
{
    std::cout << "Transpose test with square matrices: ";

    const Matrix<int> int_expected_result(new int[9]{1,4,7,2,5,8,3,6,9}, 3, 3);
    bool int_test = (int_expected_result == int_square_matrix.Transpose());

    const Matrix<long> long_expected_result(new long[9]{1,4,7,2,5,8,3,6,9}, 3, 3);
    bool long_test = (long_expected_result == long_square_matrix.Transpose());

    const Matrix<float> float_expected_result(new float[9]{1,4,7,2,5,8,3,6,9}, 3, 3);
    bool float_test = (float_expected_result == float_square_matrix.Transpose());

    const Matrix<double> double_expected_result(new double[9]{1,4,7,2,5,8,3,6,9}, 3, 3);
    bool double_test = (double_expected_result == double_square_matrix.Transpose());

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

bool TransposeRect()
{
    std::cout << "Transpose test with rect matrices: ";

    const Matrix<int> int_expected_result(new int[10]{1,6,2,7,3,8,4,9,5,10}, 5, 2);
    bool int_test = (int_expected_result == int_rect_matrix.Transpose());

    const Matrix<long> long_expected_result(new long[10]{1,6,2,7,3,8,4,9,5,10}, 5, 2);
    bool long_test = (long_expected_result == long_rect_matrix.Transpose());

    const Matrix<float> float_expected_result(new float[10]{1,6,2,7,3,8,4,9,5,10}, 5, 2);
    bool float_test = (float_expected_result == float_rect_matrix.Transpose());

    const Matrix<double> double_expected_result(new double[10]{1,6,2,7,3,8,4,9,5,10}, 5, 2);
    bool double_test = (double_expected_result == double_rect_matrix.Transpose());

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

bool Add()
{
    std::cout << "Add test : ";

    const Matrix<int> int_expected_result(new int[9]{2,4,6,8,10,12,14,16,18}, 3, 3);
    bool int_test = (int_expected_result == int_square_matrix + int_square_matrix);

    const Matrix<long> long_expected_result(new long[9]{2,4,6,8,10,12,14,16,18}, 3, 3);
    bool long_test = (long_expected_result == long_square_matrix + long_square_matrix);

    const Matrix<float> float_expected_result(new float[9]{2,4,6,8,10,12,14,16,18}, 3, 3);
    bool float_test = (float_expected_result == float_square_matrix + float_square_matrix);

    const Matrix<double> double_expected_result(new double[9]{2,4,6,8,10,12,14,16,18}, 3, 3);
    bool double_test = (double_expected_result == double_square_matrix + double_square_matrix);

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

bool Sub()
{
    std::cout << "Sub test : ";

    const Matrix<int> int_expected_result(new int[9]{0,0,0,0,0,0,0,0,0}, 3, 3);
    bool int_test = (int_expected_result == int_square_matrix - int_square_matrix);

    const Matrix<long> long_expected_result(new long[9]{0,0,0,0,0,0,0,0,0}, 3, 3);
    bool long_test = (long_expected_result == long_square_matrix - long_square_matrix);

    const Matrix<float> float_expected_result(new float[9]{0,0,0,0,0,0,0,0,0}, 3, 3);
    bool float_test = (float_expected_result == float_square_matrix - float_square_matrix);

    const Matrix<double> double_expected_result(new double[9]{0,0,0,0,0,0,0,0,0}, 3, 3);
    bool double_test = (double_expected_result == double_square_matrix - double_square_matrix);

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

bool MultSquare()
{
    std::cout << "Mult test with square matrices : ";

    const Matrix<int> int_expected_result(new int[9]{30,36,42,66,81,96,102,126,150}, 3, 3);
    bool int_test = (int_expected_result == int_square_matrix * int_square_matrix);

    const Matrix<long> long_expected_result(new long[9]{30,36,42,66,81,96,102,126,150}, 3, 3);
    bool long_test = (long_expected_result == long_square_matrix * long_square_matrix);

    const Matrix<float> float_expected_result(new float[9]{30,36,42,66,81,96,102,126,150}, 3, 3);
    bool float_test = (float_expected_result == float_square_matrix * float_square_matrix);

    const Matrix<double> double_expected_result(new double[9]{30,36,42,66,81,96,102,126,150}, 3, 3);
    bool double_test = (double_expected_result == double_square_matrix * double_square_matrix);

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

bool MultRect()
{
    std::cout << "Mult test with rect matrices: ";

    const Matrix<int> int_expected_result(new int[4]{55,130,130,330}, 2, 2);
    bool int_test = (int_expected_result == int_rect_matrix * int_rect_matrix.Transpose());

    const Matrix<long> long_expected_result(new long[4]{55,130,130,330}, 2, 2);
    bool long_test = (long_expected_result == long_rect_matrix * long_rect_matrix.Transpose());

    const Matrix<float> float_expected_result(new float[4]{55,130,130,330}, 2, 2);
    bool float_test = (float_expected_result == float_rect_matrix * float_rect_matrix.Transpose());

    const Matrix<double> double_expected_result(new double[4]{55,130,130,330}, 2, 2);
    bool double_test = (double_expected_result == double_rect_matrix * double_rect_matrix.Transpose());

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

bool NormOne()
{
    std::cout << "Norm one test : ";

    bool int_test = IsEqual(int_square_matrix.Norm(one), 45);
    bool long_test = IsEqual(long_square_matrix.Norm(one), 45L);
    bool float_test = IsEqual(float_square_matrix.Norm(one), 45.0f);
    bool double_test = IsEqual(double_square_matrix.Norm(one), 45.0);

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

bool NormTwo()
{
    std::cout << "Norm two test : ";

    bool int_test = IsEqual(int_square_matrix.Norm(two), 16);
    bool long_test = IsEqual(long_square_matrix.Norm(two), 16L);
    bool float_test = IsEqual(float_square_matrix.Norm(two), 16.881943016134134f);
    bool double_test = IsEqual(double_square_matrix.Norm(two), 16.881943016134134);

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

bool NormInf()
{
    std::cout << "Norm inf test : ";

    bool int_test = IsEqual(int_square_matrix.Norm(inf), 9);
    bool long_test = IsEqual(long_square_matrix.Norm(inf), 9L);
    bool float_test = IsEqual(float_square_matrix.Norm(inf), 9.0f);
    bool double_test = IsEqual(double_square_matrix.Norm(inf), 9.0);

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

bool Shrink()
{
    std::cout << "Shrinkage test : ";

    const Matrix<int> int_expected_result(new int[9]{0,0,1,2,3,4,5,6,7}, 3, 3);
    bool int_test = (int_expected_result == int_square_matrix.Shrink(2));

    const Matrix<long> long_expected_result(new long[9]{0,0,1,2,3,4,5,6,7}, 3, 3);
    bool long_test = (long_expected_result == long_square_matrix.Shrink(2));

    const Matrix<float> float_expected_result(new float[9]{0,0,1,2,3,4,5,6,7}, 3, 3);
    bool float_test = (float_expected_result == float_square_matrix.Shrink(2));

    const Matrix<double> double_expected_result(new double[9]{0,0,1,2,3,4,5,6,7}, 3, 3);
    bool double_test = (double_expected_result == double_square_matrix.Shrink(2));

    bool test_result = int_test && long_test && float_test && double_test;
    std::cout << (test_result ? "Success" : "Failure") << std::endl;

    return test_result;
}

void Time()
{
    const Matrix<int> int_big_matrix(2, 5000, 5000);
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    int_big_matrix * int_big_matrix;
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 integer matrix multiplication : " << elapsed_time.count() << " seconds" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    int_big_matrix.Transpose();
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 integer matrix transpose : " << elapsed_time.count() << " seconds" << std::endl;

    const Matrix<int> int_big_vector(2, 5000, 1);
    start = std::chrono::high_resolution_clock::now();
    int_big_matrix * int_big_vector;
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 integer matrix-vector multiplication : " << elapsed_time.count() << " seconds" << std::endl;


    const Matrix<long> long_big_matrix(2L, 5000, 5000);
    start = std::chrono::high_resolution_clock::now();
    long_big_matrix * long_big_matrix;
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 long matrix multiplication : " << elapsed_time.count() << " seconds" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    long_big_matrix.Transpose();
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 long matrix transpose : " << elapsed_time.count() << " seconds" << std::endl;

    const Matrix<long> long_big_vector(2, 5000, 1);
    start = std::chrono::high_resolution_clock::now();
    long_big_matrix * long_big_vector;
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 long matrix-vector multiplication : " << elapsed_time.count() << " seconds" << std::endl;


    const Matrix<float> float_big_matrix(2.0f, 5000, 5000);
    start = std::chrono::high_resolution_clock::now();
    float_big_matrix * float_big_matrix;
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 float matrix multiplication : " << elapsed_time.count() << " seconds" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    float_big_matrix.Transpose();
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 float matrix transpose : " << elapsed_time.count() << " seconds" << std::endl;

    const Matrix<float> float_big_vector(2, 5000, 1);
    start = std::chrono::high_resolution_clock::now();
    float_big_matrix * float_big_vector;
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 float matrix-vector multiplication : " << elapsed_time.count() << " seconds" << std::endl;


    const Matrix<double> double_big_matrix(2.0, 5000, 5000);
    start = std::chrono::high_resolution_clock::now();
    double_big_matrix * double_big_matrix;
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 double matrix multiplication : " << elapsed_time.count() << " seconds" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    double_big_matrix.Transpose();
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 double matrix transpose : " << elapsed_time.count() << " seconds" << std::endl;

    const Matrix<double> double_big_vector(2, 5000, 1);
    start = std::chrono::high_resolution_clock::now();
    double_big_matrix * double_big_vector;
    end = std::chrono::high_resolution_clock::now();
    elapsed_time = end-start;
    std::cout << "Time for 5'000 x 5'000 double matrix-vector multiplication : " << elapsed_time.count() << " seconds" << std::endl;
}

} // namespace matrix
} // namespace test
} // namespace astroqut
