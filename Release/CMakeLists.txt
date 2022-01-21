project(Release)

set(CMAKE_BUILD_TYPE "Release")

add_library(G_LR STATIC
    "../src/game.cpp"
)
target_include_directories(G_LR
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(${PROJECT_NAME}
    "../src/main.cpp"
)
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        G_LR
)
