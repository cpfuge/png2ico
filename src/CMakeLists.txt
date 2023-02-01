set(SOURCE_FILES 
    main.cpp
    png.cpp
    png.hpp
    ico.cpp
    ico.hpp)

add_executable(png2ico ${SOURCE_FILES})

set_target_properties(png2ico
    PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
    )
