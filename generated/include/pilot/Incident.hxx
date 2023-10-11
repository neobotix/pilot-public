
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_Incident_HXX_
#define INCLUDE_pilot_Incident_HXX_

#include <pilot/package.hxx>
#include <pilot/Event.hxx>
#include <pilot/event_t.hxx>
#include <vnx/Object.hpp>


namespace pilot {

class Incident : public ::pilot::Event {
public:
	
	vnx::bool_t is_active = 0;
	vnx::bool_t is_cleared = 0;
	int32_t timeout_ms = 3000;
	
	typedef ::pilot::Event Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x80c07ca1b021de76ull;
	
	Incident() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<const ::pilot::Incident> create_ex(const int64_t& time = 0, const ::pilot::event_t& event = ::pilot::event_t(), const int32_t& level = 0, const ::vnx::Object& info = ::vnx::Object(), const vnx::bool_t& is_active = 0, const int32_t& timeout_ms = 3000);
	
	static std::shared_ptr<Incident> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const Incident& _value);
	friend std::istream& operator>>(std::istream& _in, Incident& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace pilot


namespace vnx {

} // vnx

#endif // INCLUDE_pilot_Incident_HXX_