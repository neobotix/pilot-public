
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_SafetyInterface_ASYNC_CLIENT_HXX_
#define INCLUDE_pilot_SafetyInterface_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>


namespace pilot {

class SafetyInterfaceAsyncClient : public vnx::AsyncClient {
public:
	SafetyInterfaceAsyncClient(const std::string& service_name);
	
	SafetyInterfaceAsyncClient(vnx::Hash64 service_addr);
	
	uint64_t select_safety_field(const uint32_t& field_id = 0, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
protected:
	int32_t vnx_purge_request(uint64_t _request_id, const vnx::exception& _ex) override;
	
	int32_t vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) override;
	
private:
	std::unordered_map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_select_safety_field;
	
};


} // namespace pilot

#endif // INCLUDE_pilot_SafetyInterface_ASYNC_CLIENT_HXX_