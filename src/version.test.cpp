// External includes
#include <gtest/gtest.h>

// Local includes
#include "../src/version.hpp"

TEST(version_test, runtime_version_matches_compiletime_version) {
    ASSERT_EQ(
            stm::get_runtime_version(),
            stm::compiletime_version);
}
