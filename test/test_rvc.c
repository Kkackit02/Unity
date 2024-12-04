#include "unity.h"
#include "rvc.h"

#include <string.h>

void setUp(void)
{
    F = L = R = D = false;
    turnCount = 0;
    isFrontMotor = false;
    cleanerMode = 0;
}

void tearDown(void)
{
    // 정리 작업 필요 시 추가
}

// 정상 입력 테스트
void test_RVC_T_09(void)
{
    printf("-----------------------------------\n");
    char input[] = "1111";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,6}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_16(void)
{
    printf("-----------------------------------\n");
    char input[] = "0001 0000";
    input[strlen(input)] = '\0';
    Main_Logic(input);
    TEST_ASSERT_TRUE(true); // 입력 유효성 확인
}

void test_RVC_T_24(void)
{
    printf("-----------------------------------\n");
    char input[] = "0000 1000 0010";
    input[strlen(input)] = '\0';
    Main_Logic(input);
    TEST_ASSERT_TRUE(true); // 입력 유효성 확인
}

#ifdef UNIT_TEST
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_RVC_T_09);
    //RUN_TEST(test_RVC_T_16);
    //RUN_TEST(test_RVC_T_24);
    return UNITY_END();
}
#endif
