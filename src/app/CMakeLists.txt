# The project name is inherited from the top-level CMakeLists.txt

qt_add_executable(${PROJECT_NAME}
    mainwindow.cpp
    main.cpp
    ${CMAKE_SOURCE_DIR}/resources.qrc
)

# Pass the project name to the C++ code as a preprocessor definition
# This now uses the name "Converter" from the parent project() call.
target_compile_definitions(${PROJECT_NAME} PRIVATE APP_NAME="${PROJECT_NAME}")

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)

set_target_properties(${PROJECT_NAME} PROPERTIES
    MACOSX_BUNDLE ON
)