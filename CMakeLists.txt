cmake_minimum_required (VERSION 3.26)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})

project (editor VERSION ${PROJECT_VERSION})

add_executable(editor src/main.cpp 
src/controller.cpp
src/view.cpp
src/models/createDoc.cpp
src/models/importDoc.cpp
src/models/expDoc.cpp
src/models/createGraph.cpp
src/models/deleteGraph.cpp
src/primitives/circle.cpp
src/primitives/rect.cpp
)
target_include_directories(editor
    PRIVATE
    includes/	
)

set_target_properties(
	editor PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
)

install(TARGETS editor RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)

enable_testing()