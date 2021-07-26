FILE(GLOB_RECURSE "CORIUM_SOURCES" "Corium/Source/*.cpp"  "Corium/Source/*.hpp")
ADD_EXECUTABLE("CoriumC" "${CORIUM_SOURCES}")
TARGET_COMPILE_OPTIONS("CoriumC" PRIVATE "-Ofast")
TARGET_LINK_LIBRARIES("CoriumC" "NominaxRuntime")
TARGET_INCLUDE_DIRECTORIES("CoriumC" PRIVATE "Nominax/Include/")
SET_PROPERTY(TARGET "CoriumC" PROPERTY CXX_STANDARD 20)

FILE(GLOB_RECURSE "CORIUM_PARSER_SOURCES" "Corium/Parser/*.cpp" "Corium/Parser/*.h" "Corium/Extern/antlr4/*.cpp"  "Corium/Extern/antlr4/*.h")
ADD_LIBRARY("CoriumParser" STATIC "${CORIUM_PARSER_SOURCES}")
TARGET_COMPILE_OPTIONS("CoriumParser" PRIVATE "-Ofast")
TARGET_COMPILE_DEFINITIONS("CoriumParser" PUBLIC "ANTLR4CPP_STATIC")
TARGET_LINK_LIBRARIES("CoriumC" "CoriumParser")
SET_PROPERTY(TARGET "CoriumParser" PROPERTY CXX_STANDARD 17)
TARGET_INCLUDE_DIRECTORIES("CoriumParser" PRIVATE "Corium/Extern/antlr4/")
TARGET_INCLUDE_DIRECTORIES("CoriumC" PRIVATE "Corium/Extern/antlr4/")

INCLUDE("Corium/CMake/UnitTests.cmake")
