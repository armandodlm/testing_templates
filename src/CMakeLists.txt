INCLUDE_DIRECTORIES( . )

SET( LIB_NAME templated_lib )

ADD_LIBRARY( ${LIB_NAME} OBJECT templated.cpp )

ADD_LIBRARY( First_lib OBJECT first.cpp )
ADD_LIBRARY( Second_lib OBJECT second.cpp )
