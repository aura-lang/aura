Aura - Modular programming language
===
Feel your surroundings
---

*Aura is very early in its stage and has yet to reach a prototype.*
*Following documentation is to display the language structure and purpose.*


### Philosophy

Auras primary purpose is to provide a safe and extensible bytecode for describing code.
It does it in a modular and self-contained way to privide partial live analysis of altered code.
By providing a language server with swappable runtimes with ability to add layers of utilities to enhance the development experience.

### Structure

Aura is split into 3 segments, Server, Runtime and Language.

- The language layer provides parsing, lexing and analysis of the language, by compiling into a bytecode that the runtime can translate to its own platform. 
- The Runtime layer handles everything from code translation, filesystem/resource management and context handling.
- The server layer acts as a Host for Editors and IDEs to connect functionality.

The Language layer is the most core layer, it has no dependancies and only parses purely on in-memory buffers.
The runtime layer is dependant on the language layer to parse the bytecode as well as tracking with the debugger.
The server layer is dependant on all above, as its to provide the tooling for development.

All layers are meant to run at realtime, and therefore will communicate via events which each system can hook up to and handle on thier own.

### The language

Aura work primarily as a sort of code generator. It interprets the files as scripts that generate a static file structure. a single file acts as a entry point for a application or library.
One of these environment of compiled code is called a context.
These context can be linked on another and allow a control of scope and security for external code. this requires a runtime layer to be present in the host application. as it needs to translate the loaded library
to runnable code.

The langauge builds upon some main priciples:
  - Blocks
  - Ownership and Lifetime
  - Coroutines and Closures
 
Blocks are any form of collection of code, be it a function, a flow-control statement or a object.

