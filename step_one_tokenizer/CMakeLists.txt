# Step 1 tokenizer executable
set(STEP_ONE_EXE step_one)
add_executable(${STEP_ONE_EXE})
set_target_properties(${STEP_ONE_EXE} PROPERTIES VERSION 0.0.0 SOVERSION 0)
target_sources(${STEP_ONE_EXE} PRIVATE src/step_one.cpp src/tokenizer.cpp)

# Script Targets
add_custom_target(run 
        COMMENT "Run with default file"
        COMMAND $<TARGET_FILE:${STEP_ONE_EXE}>
        DEPENDS ${STEP_ONE_EXE}
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
