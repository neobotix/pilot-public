cmake_minimum_required(VERSION 3.10)

file(GLOB GENERATED_SOURCE_FILES generated/src/*.cpp)

add_library(pilot_kinematics_omnidrive_interface SHARED
	${GENERATED_SOURCE_FILES}
)

target_include_directories(pilot_kinematics_omnidrive_interface PUBLIC
	generated/include
)

target_link_libraries(pilot_kinematics_omnidrive_interface
	pilot_kinematics_interface
)

if(PILOT_CODEGEN)
	install(DIRECTORY generated/include/ DESTINATION include)
endif()
install(DIRECTORY interface/ DESTINATION interface/pilot/kinematics/omnidrive)
install(TARGETS pilot_kinematics_omnidrive_interface DESTINATION lib)

