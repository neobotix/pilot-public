cmake_minimum_required(VERSION 3.10)

file(GLOB GENERATED_SOURCE_FILES generated/src/*.cpp)

add_library(pilot_kinematics_diffsteer_interface SHARED
	${GENERATED_SOURCE_FILES}
)

target_include_directories(pilot_kinematics_diffsteer_interface PUBLIC
	generated/include
)

target_link_libraries(pilot_kinematics_diffsteer_interface
	pilot_kinematics_interface
)

install(DIRECTORY generated/include/ DESTINATION include)
install(DIRECTORY interface/ DESTINATION interface/pilot/kinematics/diffsteer)
install(TARGETS pilot_kinematics_diffsteer_interface DESTINATION lib)

