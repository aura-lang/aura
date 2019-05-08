#pragma once

namespace aura
{

    enum update_state {
        STATE_TERMINATED,
        STATE_RUNNING,
        STATE_COMPLETED,
    };

    enum update_steps {
        UPDATE_ALL = 0,
        UPDATE_ONCE = 1,
    };



    struct environment
    {
        memory m_mem;
    };

    environment* 
    create(memory& mem);
    
    void
    destroy(environment* env);
    
    update_state
    update(environment* env, int steps);
}