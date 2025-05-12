add_executable(${PROJECT_NAME}
	main.c
	irq_handler.c
	hw_init.c
	joystick.c
)

pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 1)

pico_add_extra_outputs(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME}
	pico_stdlib
	hardware_gpio
	hardware_adc
	hardware_irq
	pico_time
)

