project(RunAllTests)

# include CppUTest headers
include_directories($ENV{CPPUTEST_HOME}/include)

# add cpputest library
add_library(imp_cpputest STATIC IMPORTED)
set_property(TARGET imp_cpputest PROPERTY
             IMPORTED_LOCATION $ENV{CPPUTEST_HOME}/lib/libCppUTest.a)

add_executable(${PROJECT_NAME} 
  RunAllTests.cpp
  ${PROJECT_SOURCE_DIR}/ApplicationMain/ApplicationMainTest.cpp
) 

target_include_directories(${PROJECT_NAME}
  PRIVATE
  ${PROJECT_SOURCE_DIR}/../../components/BlinkyMain/include
)

target_link_libraries(${PROJECT_NAME} 
  imp_cpputest
)

# message("Project dir for tests = ${PROJECT_SOURCE_DIR}")
