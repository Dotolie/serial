project(ftdi1)
set(MAJOR_VERSION 1)
set(MINOR_VERSION 4)
set(PACKAGE libftdi1)
set(VERSION_STRING ${MAJOR_VERSION}.${MINOR_VERSION})
set(VERSION ${VERSION_STRING})


# Includes
include_directories(BEFORE ${CMAKE_CURRENT_BINARY_DIR}
                     ${CMAKE_CURRENT_SOURCE_DIR}
        ../libusb
                     )




#configure_file(ftdi_version_i.h.in "${CMAKE_CURRENT_BINARY_DIR}/ftdi_version_i.h" @ONLY)

# Targets
set(c_sources     ${CMAKE_CURRENT_SOURCE_DIR}/ftdi.c ${CMAKE_CURRENT_SOURCE_DIR}/ftdi_stream.c CACHE INTERNAL "List of c sources" )
set(c_headers     ${CMAKE_CURRENT_SOURCE_DIR}/ftdi.h CACHE INTERNAL "List of c headers" )

add_library(${PROJECT_NAME} SHARED ${c_sources})

math(EXPR VERSION_FIXUP "${MAJOR_VERSION} + 1")    # Compatiblity with previous releases
set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${VERSION_FIXUP}.${MINOR_VERSION}.0 SOVERSION 2 )
# Prevent clobbering each other during the build
set_target_properties ( ${PROJECT_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1 )


# Dependencies
target_link_libraries(${PROJECT_NAME} PUBLIC
    usb-1.0
)



if ( STATICLIBS )
  add_library(ftdi1-static STATIC ${c_sources})
  target_link_libraries(ftdi1-static PUBLIC ${LIBUSB1_LIBRARIES})
  set_target_properties(ftdi1-static PROPERTIES OUTPUT_NAME "ftdi1")
  set_target_properties(ftdi1-static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
  install ( TARGETS ftdi1-static
            ARCHIVE DESTINATION lib${LIB_SUFFIX}
            COMPONENT staticlibs
          )
  if (UNIX)
    target_compile_options(ftdi1-static PRIVATE -fPIC)
  endif()
endif ()

