cmake_minimum_required(VERSION 3.10)

file(GLOB GENERATED_SOURCE_FILES generated/src/*.cpp)

add_library(pilot_kinematics_interface SHARED
	${GENERATED_SOURCE_FILES}
	src/PositionAny.cpp
	src/VelocityAny.cpp
	src/TorqueAny.cpp
	src/Position2Any.cpp
	src/Velocity2Any.cpp
)

target_include_directories(pilot_kinematics_interface PUBLIC
	generated/include
)

target_link_libraries(pilot_kinematics_interface vnx_base)

install(DIRECTORY generated/include/ DESTINATION include)
install(DIRECTORY interface/ DESTINATION interface/pilot/kinematics)

install(TARGETS pilot_kinematics_interface DESTINATION lib)

add_subdirectory(differential)
add_subdirectory(bicycle)
add_subdirectory(mecanum)
add_subdirectory(omnidrive)
add_subdirectory(diffsteer)

