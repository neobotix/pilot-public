/*
 * Velocity2Any.cpp
 *
 *  Created on: Nov 12, 2024
 *      Author: jaw
 */

#include <pilot/kinematics/Velocity2Any.hxx>


namespace pilot {
namespace kinematics {


Velocity2 Velocity2Any::get(const position_code_e &position) const{
	const auto find = velocities.find(position);
	if(find == velocities.end()){
		throw std::logic_error("Position " + vnx::to_string(position) + " not available");
	}
	return find->second;
}


void Velocity2Any::set(const position_code_e &position, const Velocity2 &value){
	velocities[position] = value;
}


} // kinematics
} // pilot
