CMAKE_MINIMUM_REQUIRED( VERSION 3.3.0 )

PROJECT( WithTemplates )

FIND_LIBRARY( GMOCK gmock ${CMAKE_INSTALL_PREFIX} )
FIND_LIBRARY( GTEST_MAIN gmock_main ${CMAKE_INSTALL_PREFIX} )
FIND_LIBRARY( GTEST gtest ${CMAKE_INSTALL_PREFIX} )
INCLUDE_DIRECTORIES( ${CMAKE_INSTALL_PREFIX}/include )

ADD_SUBDIRECTORY( src )
ADD_SUBDIRECTORY( unit_tests )
