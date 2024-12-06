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
void test_RVC_T_00(void)
{
    printf("-----------------------------------\n");
    char input[] = "0000";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_01(void)
{
    printf("-----------------------------------\n");
    char input[] = "0001";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,3}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_02(void)
{
    printf("-----------------------------------\n");
    char input[] = "0010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_03(void)
{
    printf("-----------------------------------\n");
    char input[] = "0011";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,3}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_04(void)
{
    printf("-----------------------------------\n");
    char input[] = "0100";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_05(void)
{
    printf("-----------------------------------\n");
    char input[] = "0101";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,3}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_06(void)
{
    printf("-----------------------------------\n");
    char input[] = "0110";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_07(void)
{
    printf("-----------------------------------\n");
    char input[] = "0111";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,3}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_08(void)
{
    printf("-----------------------------------\n");
    char input[] = "1110";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,6}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_09(void)
{
    printf("-----------------------------------\n");
    char input[] = "1111";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,6}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_10(void)
{
    printf("-----------------------------------\n");
    char input[] = "1100";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,5}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_11(void)
{
    printf("-----------------------------------\n");
    char input[] = "1101";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,5}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_12(void)
{
    printf("-----------------------------------\n");
    char input[] = "1010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_13(void)
{
    printf("-----------------------------------\n");
    char input[] = "1011";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_14(void)
{
    printf("-----------------------------------\n");
    char input[] = "1000";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_15(void)
{
    printf("-----------------------------------\n");
    char input[] = "1001";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_16(void)
{
    printf("-----------------------------------\n");
    char input[] = "0001 0000";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[3] = {2,3,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_17(void)
{
    printf("-----------------------------------\n");
    char input[] = "1000 0010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[3] = {2,4,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_18(void)
{
    printf("-----------------------------------\n");
    char input[] = "0000 1110";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[3] = {2,2,6}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_19(void)
{
    printf("-----------------------------------\n");
    char input[] = "0000 1100";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[3] = {2,2,5}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_20(void)
{
    printf("-----------------------------------\n");
    char input[] = "0000 1010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[3] = {2,2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_21(void)
{
    printf("-----------------------------------\n");
    char input[] = "0000 1000";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[3] = {2,2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_22(void)
{
    printf("-----------------------------------\n");
    char input[] = "0100 1100";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[3] = {2,2,5}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_23(void)
{
    printf("-----------------------------------\n");
    char input[] = "0010 1010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[3] = {2,2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_24(void)
{
    printf("-----------------------------------\n");
    char input[] = "0000 1000 0010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[4] = {2,2,4,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_25(void)
{
    printf("-----------------------------------\n");
    char input[] = "0000 1000 0010 1010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[5] = {2,2,4,2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_26(void)
{
    printf("-----------------------------------\n");
    char input[] = "0010 1010 0010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[4] = {2,2,4,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_27(void)
{
    printf("-----------------------------------\n");
    char input[] = "0010 1010 0011 1100 0100";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[6] = {2,2,4,3,5,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_28(void)
{
    printf("-----------------------------------\n");
    char input[] = "0100 1100 0100 1101";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[5] = {2,2,5,2,5}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_29(void)
{
    printf("-----------------------------------\n");
    char input[] = "0010 1010 0011 1010 0010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[6] = {2,2,4,3,4,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_30(void)
{
    printf("-----------------------------------\n");
    char input[] = "00101010001110100010";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[6] = {2,2,4,3,4,2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_31(void)
{
    printf("-----------------------------------\n");
    char input[] = "1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111 1111";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[22] = {2,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,1}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_32(void)
{
    printf("-----------------------------------\n");
    char input[] = "0";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_33(void)
{
    printf("-----------------------------------\n");
    char input[] = "00";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_34(void)
{
    printf("-----------------------------------\n");
    char input[] = "000";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_35(void)
{
    printf("-----------------------------------\n");
    char input[] = "1234";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_36(void)
{
    printf("-----------------------------------\n");
    char input[] = "102938";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_37(void)
{
    printf("-----------------------------------\n");
    char input[] = "1010 1";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_38(void)
{
    printf("-----------------------------------\n");
    char input[] = "1000 00";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[2] = {2,4}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_39(void)
{
    printf("-----------------------------------\n");
    char input[] = "Negative Testing";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_40(void)
{
    printf("-----------------------------------\n");
    char input[] = "01 11";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_41(void)
{
    printf("-----------------------------------\n");
    char input[] = "/";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_42(void)
{
    printf("-----------------------------------\n");
    char input[] = "*/";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}
void test_RVC_T_43(void)
{
    printf("-----------------------------------\n");
    char input[] = "000a";
    input[strlen(input)] = '\0';
    outputSet result = Main_Logic(input);
    int comparison[1] = {2}; // 처음 실행 시 Stimulus 2 출력 + other test case
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(result.outputArray, comparison, result.outputArrayCnt, "Array elements do not match!"); // 입력 유효성 확인
}



#ifdef UNIT_TEST
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_RVC_T_00);
    RUN_TEST(test_RVC_T_01);
    RUN_TEST(test_RVC_T_02);
    RUN_TEST(test_RVC_T_03);
    RUN_TEST(test_RVC_T_04);
    RUN_TEST(test_RVC_T_05);
    RUN_TEST(test_RVC_T_06);
    RUN_TEST(test_RVC_T_07);
    RUN_TEST(test_RVC_T_08);
    RUN_TEST(test_RVC_T_09);
    RUN_TEST(test_RVC_T_10);
    RUN_TEST(test_RVC_T_11);
    RUN_TEST(test_RVC_T_12);
    RUN_TEST(test_RVC_T_13);
    RUN_TEST(test_RVC_T_14);
    RUN_TEST(test_RVC_T_15);
    RUN_TEST(test_RVC_T_16);
    RUN_TEST(test_RVC_T_17);
    RUN_TEST(test_RVC_T_18);
    RUN_TEST(test_RVC_T_19);
    RUN_TEST(test_RVC_T_20);
    RUN_TEST(test_RVC_T_21);
    RUN_TEST(test_RVC_T_22);
    RUN_TEST(test_RVC_T_23);
    RUN_TEST(test_RVC_T_24);
    RUN_TEST(test_RVC_T_25);
    RUN_TEST(test_RVC_T_26);
    RUN_TEST(test_RVC_T_27);
    RUN_TEST(test_RVC_T_28);
    RUN_TEST(test_RVC_T_29);
    RUN_TEST(test_RVC_T_30);
    RUN_TEST(test_RVC_T_31);
    RUN_TEST(test_RVC_T_32);
    RUN_TEST(test_RVC_T_33);
    RUN_TEST(test_RVC_T_34);
    RUN_TEST(test_RVC_T_35);
    RUN_TEST(test_RVC_T_36);
    RUN_TEST(test_RVC_T_37);
    RUN_TEST(test_RVC_T_38);
    RUN_TEST(test_RVC_T_39);
    RUN_TEST(test_RVC_T_40);
    RUN_TEST(test_RVC_T_41);
    RUN_TEST(test_RVC_T_42);
    RUN_TEST(test_RVC_T_43);

    return UNITY_END();
}
#endif
