# - Build sub-script for the MPAGSCipher library

# - Declare the build of the static MPAGSCipher library
add_library(MPAGSCipher STATIC
    CaesarCipher.cpp
    CaesarCipher.hpp
    CipherMode.hpp
    ProcessCommandLine.cpp
    ProcessCommandLine.hpp
    TransformChar.cpp
    TransformChar.hpp
)

target_include_directories(MPAGSCipher
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)
target_compile_features(MPAGSCipher
    PUBLIC cxx_std_17
)
