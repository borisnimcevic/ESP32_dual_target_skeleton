cmake_minimum_required(VERSION 3.5)

project (local)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

add_executable(${PROJECT_NAME}
  src/LocalMain.cpp
  ${PROJECT_SOURCE_DIR}/src/HardwareDriver/HardwareDriver.cpp
  ${PROJECT_SOURCE_DIR}/../components/ApplicationMain/ApplicationMain.cpp
  )

target_include_directories(${PROJECT_NAME}
    PRIVATE
    ${PROJECT_SOURCE_DIR}/../components/ApplicationMain/include
    ${PROJECT_SOURCE_DIR}/../components/HardwareDriver/include
)

add_subdirectory(tests)
