cmake_minimum_required(VERSION 2.6)

file(GLOB GENERATED_SOURCE_FILES generated/src/*.cpp)

add_library(pilot_kinematics_mecanum_interface SHARED
	${GENERATED_SOURCE_FILES}
)

target_include_directories(pilot_kinematics_mecanum_interface PUBLIC
	generated/include
)

target_link_libraries(pilot_kinematics_mecanum_interface
	pilot_kinematics_interface
)

install(DIRECTORY generated/include/ DESTINATION include)
install(DIRECTORY interface/ DESTINATION interface/pilot/kinematics/mecanum)
install(TARGETS pilot_kinematics_mecanum_interface DESTINATION lib)

