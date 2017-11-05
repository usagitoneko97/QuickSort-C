#include "unity.h"
#include "QuickSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}


/**
*   2,  3,  5,  6
*  [0],[1],[2],[3]
* swap pos 0 and 2
* expected:
*   5, 3, 2, 6
*
*/
void test_swap_2_3_5_6_expected_5_3_2_6(void){
  int dataInput[] = {2, 3, 5, 6};
  swap(&dataInput[0], &dataInput[2]);
  int ExpectedData[] = {5, 3, 2, 6};
  TEST_ASSERT_EQUAL_INT32_ARRAY(dataInput, ExpectedData, 4);
}

/**
 *    6, 3, 4
 *        \
 *        ->  3, 4, 6
 *
 */
void test_partition_6_4_3_data_0_to_2_expect_3_4_6(void){
  int initData[] = {6, 3, 4};
  partition(initData, 0, 2);
  int expectedData[] = {3, 4, 6};

  TEST_ASSERT_EQUAL_INT32_ARRAY(initData, expectedData, 3);
}

/**
 *            partition from index 1 to 3
 *        3, 4, 2, 1    ---->    3, 1, 2, 4
 *           \-----/
 */
void test_partition_3_4_2_1_data_1_to_3_expect_3_1_4_2(void){
  int initData[] = {3, 4, 2, 1};
  partition(initData, 1, 3);
  int expectedData[] = {3, 1, 2, 4};
  TEST_ASSERT_EQUAL_INT32_ARRAY(initData, expectedData, 4);
}
/**
 *  NULL --> NULL
 */
void test_quictSort_NULL_data(void){
  int *data = NULL;
  quickSort(data, 0, 0);
  TEST_ASSERT_NULL(data);
}

void test_quickSort_1_data(void){
  int data[] = {1};
  quickSort(data, 0, 0);
  TEST_ASSERT_EQUAL_INT32_ARRAY(data, data, 1);

}

/**
 *   3, 1 -->  1, 3
 */
void test_quickSort_2_data(void){
  int data[] = {3, 1};
  quickSort(data, 0, 1);

  int expectedData[] = {1, 3};
  TEST_ASSERT_EQUAL_INT32_ARRAY(data, expectedData, 2);
}
/**
 *   1, 3, 5, 2, 6           1, 3, 5, 2, 6
 *               ^     --->           ^
 *              pivot               pivot
 *
 *   1, 2, 3, 5, 6
 *            ^
 *           pivot
 */

void test_quickSort_5_data(void){
  int data[] = {1, 3, 5, 2, 6};
  quickSort(data, 0, 4);

  int expectedData[] = {1, 2, 3, 5, 6};
  TEST_ASSERT_EQUAL_INT32_ARRAY(data, expectedData, 5);
}

void test_quickSort_signedInt_2_data(void){
  int data[] = {2, -1};
  quickSort(data, 0, 1);

  int expectedData[] = {-1, 2};
  TEST_ASSERT_EQUAL_INT32_ARRAY(expectedData, data, 2);
}