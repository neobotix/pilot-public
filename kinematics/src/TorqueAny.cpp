/*
 * TorqueAny.cpp
 *
 *  Created on: Feb 04, 2022
 *      Author: jaw
 */

#include <pilot/kinematics/TorqueAny.hxx>


namespace pilot {
namespace kinematics {


float TorqueAny::get(const position_code_e &position) const{
	auto find = torques.find(position);
	if(find == torques.end()){
		throw std::logic_error("Position " + vnx::to_string(position) + " not available");
	}
	return find->second;
}


void TorqueAny::set(const position_code_e &position, const float &value){
	torques[position] = value;
}


} // kinematics
} // pilot
