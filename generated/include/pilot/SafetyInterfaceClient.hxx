
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_SafetyInterface_CLIENT_HXX_
#define INCLUDE_pilot_SafetyInterface_CLIENT_HXX_

#include <vnx/Client.h>


namespace pilot {

class SafetyInterfaceClient : public vnx::Client {
public:
	SafetyInterfaceClient(const std::string& service_name);
	
	SafetyInterfaceClient(vnx::Hash64 service_addr);
	
	void select_safety_field(const uint32_t& field_id = 0);
	
	void select_safety_field_async(const uint32_t& field_id = 0);
	
};


} // namespace pilot

#endif // INCLUDE_pilot_SafetyInterface_CLIENT_HXX_