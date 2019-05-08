#include <aura/aura.hpp>

#include <memory>
#include <cstring>

aura::memory
aura::default_allocators()
{
    return {
        std::realloc,
        std::malloc,
        std::free,
        std::memset,
        std::memcpy,
        std::memmove,
    };
}

aura::memory
aura::debug_allocators()
{
    return {
        std::realloc,
        std::malloc,
        std::free,
        std::memset,
        std::memcpy,
        std::memmove,
    };
}

