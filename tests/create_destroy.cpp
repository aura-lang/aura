#include <aura/aura.hpp>


int main()
{
    aura::environment* env = aura::create(aura::default_allocators());
    
    aura::update(env, aura::UPDATE_ALL);

    aura::destroy(env);
}