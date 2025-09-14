#include <gtest/gtest.h>
#include "../include/replacer.h"


// Тест 1: Базовая проверка
TEST(replacer_test, basic_replacement)
{
    std::string str {"acb"};
    replacer(str);
    ASSERT_EQ(str,"bca");
}

// Тест 2: Более сложная строка
TEST(replacer_test, complex_replacement)
{
    std::string str {"aabacbaa"};
    replacer(str);
    ASSERT_EQ(str, "bbabcabb");
}

// Тест 3: Пустая строка
TEST(replacer_test, empty_string) {
    std::string str{""};
    replacer(str);
    ASSERT_EQ(str, "");
}

// Тест 4: Только символ 'c'
TEST(replacer_test, only_c) {
    std::string str{"ccc"};
    replacer(str);
    ASSERT_EQ(str, "ccc");
}

// Тест 5: Только символ 'a'
TEST(replacer_test, only_a) {
    std::string str{"aaa"};
    replacer(str);
    ASSERT_EQ(str, "bbb");
}

// Тест 6: Только символ 'b'
TEST(replacer_test, only_b) {
    std::string str{"bbb"};
    replacer(str);
    ASSERT_EQ(str, "aaa");
}

// Тест 7: Смешанные символы
TEST(replacer_test, mixed_characters) {
    std::string str{"abcabc"};
    replacer(str);
    ASSERT_EQ(str, "bacbac");
}

// Тест 8: Строка без a и b
TEST(replacer_test, no_a_or_b) {
    std::string str{"cdefg"};
    replacer(str);
    ASSERT_EQ(str, "cdefg");
}

// Тест 9: Одиночный символ 'a'
TEST(replacer_test, single_a) {
    std::string str{"a"};
    replacer(str);
    ASSERT_EQ(str, "b");
}

// Тест 10: Одиночный символ 'b'
TEST(replacer_test, single_b) {
    std::string str{"b"};
    replacer(str);
    ASSERT_EQ(str, "a");
}

// Тест 11: Одиночный символ 'c'
TEST(replacer_test, single_c) {
    std::string str{"c"};
    replacer(str);
    ASSERT_EQ(str, "c");
}

// Тест 12: Другие символы (не a, b, c)
TEST(replacer_test, other_characters) {
    std::string str{"xyz"};
    replacer(str);
    ASSERT_EQ(str, "xyz");
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}