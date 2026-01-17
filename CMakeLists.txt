cmake_minimum_required(VERSION 3.23)

project(deprecate_moved_exports_via_inline_namespace)

add_executable(${PROJECT_NAME}_example)
target_sources(${PROJECT_NAME}_example PRIVATE main.cc)

## For simplicity this project does not use ${PROJECT_VERSION}
## specified in `project(some_project_name VERSION ...)` but
## it can be achieved using custom functions in order to
## add leading zeros and etc.
set(MY_LIB_VERSION_API 1345689110) # v1.3456.891.10
set(MY_LIB_VERSION_ABI 1345689110) # v1.3456.891.10
if(MY_LIB_VERSION) # can be specified using `cmake -DMY_LIB_VERSION`
  set(MY_LIB_VERSION_API ${MY_LIB_VERSION})
  set(MY_LIB_VERSION_ABI ${MY_LIB_VERSION})
endif()
target_compile_definitions(${PROJECT_NAME}_example
    PRIVATE MY_LIB_VERSION_API=${MY_LIB_VERSION_API}
    PRIVATE MY_LIB_VERSION_ABI=${MY_LIB_VERSION_ABI}
)
