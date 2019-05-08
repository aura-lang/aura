#pragma once

namespace aura
{

    struct memory
    {
        void*   (*reallocate)  (void* data, size_t size);
        void*   (*allocate)   (size_t size);
        void    (*free)     (void* data);
        void*   (*set)   (void* ptr, int value, size_t num);
        void*   (*copy)   (void* dest, const void* src, size_t num);
        void*   (*move)  (void* dest, const void* src, size_t num);
    };

    memory default_allocators();
    memory debug_allocators();
}