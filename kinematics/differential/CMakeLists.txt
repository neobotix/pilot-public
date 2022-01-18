cmake_minimum_required(VERSION 2.6)

file(GLOB GENERATED_SOURCE_FILES generated/src/*.cpp)

add_library(pilot_kinematics_differential_interface SHARED
	${GENERATED_SOURCE_FILES}
)

target_include_directories(pilot_kinematics_differential_interface PUBLIC
	include
	generated/include
)

target_link_libraries(pilot_kinematics_differential_interface
	pilot_kinematics
)

install(DIRECTORY generated/include/ DESTINATION include)
install(DIRECTORY modules/ DESTINATION interface/pilot/kinematics/differential)
install(DIRECTORY interface/ DESTINATION interface/pilot/kinematics/differential)
install(TARGETS pilot_kinematics_differential_interface DESTINATION lib)

