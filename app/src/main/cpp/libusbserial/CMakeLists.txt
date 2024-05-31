cmake_minimum_required(VERSION 3.11)

project(usbserial
	VERSION 0.1
	LANGUAGES C
)

# Find source files
file(GLOB SOURCES ./*.c)

include_directories(
		../libusb
)

add_library(lib-usb SHARED IMPORTED)
set_target_properties(
		lib-usb
		PROPERTIES IMPORTED_LOCATION
		${libs_DIR}/${ANDROID_ABI}/libusb1.0.so
)

# Create shared library
add_library(${PROJECT_NAME} SHARED ${SOURCES} )

target_link_libraries(${PROJECT_NAME}
		# List libraries link to the target library
    	lib-usb
		)