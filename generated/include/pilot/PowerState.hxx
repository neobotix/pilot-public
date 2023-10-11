
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_PowerState_HXX_
#define INCLUDE_pilot_PowerState_HXX_

#include <pilot/package.hxx>
#include <pilot/charging_state_e.hxx>
#include <pilot/power_system_type_e.hxx>
#include <vnx/Value.h>


namespace pilot {

class PowerState : public ::vnx::Value {
public:
	
	int64_t time = 0;
	::pilot::power_system_type_e power_system_type;
	::pilot::charging_state_e charging_state;
	vnx::bool_t is_charging = 0;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x83624e8e635643efull;
	
	PowerState() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<PowerState> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const PowerState& _value);
	friend std::istream& operator>>(std::istream& _in, PowerState& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace pilot


namespace vnx {

} // vnx

#endif // INCLUDE_pilot_PowerState_HXX_