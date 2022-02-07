/*
 * VelocityAny.cpp
 *
 *  Created on: Feb 04, 2022
 *      Author: jaw
 */

#include <pilot/kinematics/VelocityAny.hxx>


namespace pilot {
namespace kinematics {


float VelocityAny::get(const position_code_e &position) const{
	auto find = velocities.find(position);
	if(find == velocities.end()){
		throw std::logic_error("Position " + vnx::to_string(position) + " not available");
	}
	return find->second;
}


void VelocityAny::set(const position_code_e &position, const float &value){
	velocities[position] = value;
}


} // kinematics
} // pilot
