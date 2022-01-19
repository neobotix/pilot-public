/*
 * utils.h
 *
 *  Created on: Jun 8, 2020
 *      Author: mad
 */

#ifndef INCLUDE_PILOT_UTILS_H_
#define INCLUDE_PILOT_UTILS_H_

#include <pilot/Event.hxx>
#include <pilot/Incident.hxx>

#include <vnx/Time.h>


namespace pilot {

template<typename T>
std::shared_ptr<Event> create_event(const event_type_e& type,
									const std::string& module,
									const T& code,
									const int32_t level = 0,
									const vnx::Object& info = {})
{
	auto out = Event::create();
	out->time = vnx::get_time_micros();
	out->event = event_t::create_ex(type, module, code.get_type_name(), code.to_string_value());
	out->level = level;
	out->info = info;
	return out;
}

template<typename T>
std::shared_ptr<Incident> create_incident(	const event_type_e& type,
											const std::string& module,
											const T& code,
											const int32_t level = 0,
											const vnx::Object& info = {},
											const bool is_active = false,
											const int timeout_ms = 3000)
{
	auto out = Incident::create();
	out->time = vnx::get_time_micros();
	out->event = event_t::create_ex(type, module, code.get_type_name(), code.to_string_value());
	out->level = level;
	out->info = info;
	out->is_active = is_active;
	out->timeout_ms = timeout_ms;
	return out;
}


} // pilot

#endif /* INCLUDE_PILOT_UTILS_H_ */
