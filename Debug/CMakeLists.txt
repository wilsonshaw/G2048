project(Debug)

set(CMAKE_BUILD_TYPE "Debug")

add_library(G_Lib STATIC
    "../src/game.cpp"
)
target_include_directories(G_Lib 
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(${PROJECT_NAME}
    "../src/main.cpp"
)
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        G_Lib
)
