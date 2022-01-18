cmake_minimum_required(VERSION 2.6)

file(GLOB GENERATED_SOURCE_FILES generated/src/*.cpp)

add_library(pilot_kinematics SHARED
	${GENERATED_SOURCE_FILES}
)

target_include_directories(pilot_kinematics PUBLIC
	generated/include
)

target_link_libraries(pilot_kinematics vnx_base)

install(DIRECTORY generated/include/ DESTINATION include)
install(DIRECTORY interface/ DESTINATION interface/pilot/kinematics)

install(TARGETS pilot_kinematics DESTINATION lib)

add_subdirectory(differential)
add_subdirectory(mecanum)
add_subdirectory(omnidrive)

