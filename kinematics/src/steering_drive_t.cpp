/*
 * steering_drive.cpp
 *
 *  Created on: Jul 13, 2020
 *      Author: jaw
 *              (mostly copied from ROS node)
 */


#include <pilot/kinematics/steering_drive_t.hxx>
#include <math.h>


namespace pilot {
namespace kinematics {


void steering_drive_t::set_wheel_angle(const double &wheel_angle_){
	wheel_angle = wheel_angle_;
	wheel_pos_x = center_pos_x + lever_arm * -sin(wheel_angle_);
	wheel_pos_y = center_pos_y + lever_arm * cos(wheel_angle_);
}


double steering_drive_t::get_wheel_pos_radius() const {
	return ::hypot(wheel_pos_x, wheel_pos_y);
}


double steering_drive_t::get_wheel_pos_angle() const {
	return ::atan2(wheel_pos_y, wheel_pos_x);
}


} // namespace kinematics
} // namespace pilot

