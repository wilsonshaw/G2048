cmake_minimum_required(VERSION 3.5.0)
project(G2048 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)


add_library(G_lib STATIC
	"src/game.cpp"
)
target_include_directories(G_lib
	PUBLIC
		${PROJECT_SOURCE_DIR}/include
		"D:/EasyX/Include"
)
target_link_directories(G_lib
	PUBLIC
		"D:/EasyX/lib/VC2015/x64/"
)

add_executable(2048
	"src/main.cpp"
)
target_link_libraries(2048
	PUBLIC
		G_lib
)