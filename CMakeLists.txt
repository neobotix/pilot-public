cmake_minimum_required(VERSION 2.6)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB GENERATED generated/src/*.cpp)

add_library(pilot_public SHARED
	${GENERATED}
	src/Event.cpp
	src/Incident.cpp
	src/event_t.cpp
	src/topics.cpp
)

target_include_directories(pilot_public PUBLIC
	include
	generated/include
)

target_link_libraries(pilot_public
	vnx_base
)

add_subdirectory(kinematics)

install(DIRECTORY generated/include/ DESTINATION include)
install(DIRECTORY interface/ DESTINATION interface/pilot)
install(TARGETS pilot_public DESTINATION lib)



