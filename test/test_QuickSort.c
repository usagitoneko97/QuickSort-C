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
  uint8_t dataInput[] = {2, 3, 5, 6};
  swap(&dataInput[0], &dataInput[2]);
  uint8_t ExpectedData[] = {5, 3, 2, 6};
  TEST_ASSERT_EQUAL_UINT8_ARRAY(dataInput, ExpectedData, 4);
}

/**
 *    6, 3, 4
 *        \
 *        ->  3, 4, 6
 *
 */
void test_partition_6_4_3_expect_3_4_6(void){
  uint8_t initData[] = {6, 3, 4};
  partition(initData, 0, 2);
  uint8_t expectedData[] = {3, 4, 6};
  // TEST_ASSERT_EQUAL(initData[0], 3);
  // TEST_ASSERT_EQUAL(initData[1], 4);
  // TEST_ASSERT_EQUAL(initData[2], 6);

  TEST_ASSERT_EQUAL_UINT8_ARRAY(initData, expectedData, 3);
}
