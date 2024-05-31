cmake_minimum_required(VERSION 3.11)

project(usb
	VERSION 0.1
	LANGUAGES C
)

# Find source files
file(GLOB SOURCES ./*.c
	./os/linux_usbfs.c
	./os/linux_netlink.c
	./os/events_posix.c
	./os/threads_posix.c
)

include_directories(
	.
	os
)
# Create shared library
add_library(${PROJECT_NAME} SHARED ${SOURCES})

target_link_libraries(${PROJECT_NAME}
		# List libraries link to the target library

		pthread
		log)