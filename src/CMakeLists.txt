file(GLOB SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

add_executable(${PROJECT_NAME} ${SRC_FILES})

pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 1)

pico_add_extra_outputs(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PRIVATE

	${CMAKE_SOURCE_DIR}/include
	${CMAKE_SOURCE_DIR}/include/lib_headers
)

link_directories(${CMAKE_SOURCE_DIR}/lib)

target_link_libraries(${PROJECT_NAME}
	pico_stdlib
	hardware_gpio
	hardware_adc
	hardware_irq
	hardware_uart
	hardware_spi
	hardware_i2c
	hardware_pwm
	pico_time
	${CMAKE_SOURCE_DIR}/lib/libLCD_1_83.a
)

