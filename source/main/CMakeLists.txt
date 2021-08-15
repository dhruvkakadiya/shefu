set(EXECUTABLE_NAME "shefu")
set(SOURCE_FILES shefu.cpp)
add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})
target_link_libraries(
  ${EXECUTABLE_NAME}
  PRIVATE
    sfml-graphics
    sfml-window
    sfml-system
    sfml-audio
)
