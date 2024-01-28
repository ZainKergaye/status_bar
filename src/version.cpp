// Local includes
#include "../src/version.hpp"

namespace stm {

const char* get_runtime_version() {
    return ::stm::compiletime_version;
}

} // namespace stm
