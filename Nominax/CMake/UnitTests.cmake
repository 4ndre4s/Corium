IF (${CORIUM_BUILD_UNIT_TESTS})
	FILE(GLOB_RECURSE "NOMINAX_TEST_SOURCES" "Nominax/Tests/*.cpp")
	ADD_EXECUTABLE("NominaxUnitTests" "${NOMINAX_TEST_SOURCES}")
	ADD_TEST(NAME "NominaxUnitTests" COMMAND "NominaxUnitTests")
	TARGET_INCLUDE_DIRECTORIES("NominaxUnitTests" PUBLIC "${TEST_INCLUDE}")
	TARGET_LINK_LIBRARIES("NominaxUnitTests" "gtest")
	TARGET_LINK_LIBRARIES("NominaxUnitTests" "Nominax")

	# with GCC we need to link posix threads
	IF (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
        TARGET_LINK_LIBRARIES("NominaxUnitTests" "pthread")
    ENDIF()
ENDIF()