#include "base/Base.h"
#include <gtest/gtest.h>
#include <folly/synchronization/Baton.h>
#include "meta/GflagsManager.h"
#include "fs/TempDir.h"
#include "meta/test/TestUtils.h"

namespace nebula {
namespace meta {

TEST(toThriftValueStrTest, NormalTest) {
    cpp2::ConfigType& type;
    VariantType& value = '123';
    std::string value_s = '123';
    ASSERT_EQ(value_s, toThriftValueStr(cpp2::ConfigType::INT64, value);
    ASSERT_EQ(value_s, toThriftValueStr(cpp2::ConfigType::DOUBLE, value);
    ASSERT_EQ(value_s, toThriftValueStr(cpp2::ConfigType::BOOL, value);
    ASSERT_EQ(value_s, toThriftValueStr(cpp2::ConfigType::STRING, value);
    ASSERT_EQ(value_s, toThriftValueStr(cpp2::ConfigType::NESTED, value);
}

TEST(parseConfigJsonTest, NormalTest) {
    std::string filename = "./TestJson";
    EXPECT_ANY_THROW(parseConfigJson(filename));
    ASSERT_ANY_THROW(parseConfigJson(filename));
}

TEST(declareGflagsTest, NormalTest) {
    EXPECT_ANY_THROW(declareGflags(cpp2::ConfigModule::META));
    ASSERT_ANY_THROW(declareGflags(cpp2::ConfigModule::META));
    EXPECT_ANY_THROW(declareGflags(cpp2::ConfigModule::UNKNOWN));
    ASSERT_ANY_THROW(declareGflags(cpp2::ConfigModule::UNKNOWN));
}

}  // namespace meta
}  // namespace nebula


int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    folly::init(&argc, &argv, true);
    google::SetStderrLogging(google::INFO);
    return RUN_ALL_TESTS();
}