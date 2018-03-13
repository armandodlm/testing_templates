INCLUDE_DIRECTORIES( . )
INCLUDE_DIRECTORIES( ../src )
LINK_DIRECTORIES( ../src )

ADD_EXECUTABLE( template_test template_test.cpp
										$<TARGET_OBJECTS:templated_lib>
										$<TARGET_OBJECTS:First_lib>
										$<TARGET_OBJECTS:Second_lib>
					)

TARGET_LINK_LIBRARIES( template_test ${GTEST_MAIN} ${GTEST} ${GMOCK} )
