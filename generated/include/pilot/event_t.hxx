
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_event_t_HXX_
#define INCLUDE_pilot_event_t_HXX_

#include <vnx/Type.h>
#include <pilot/package.hxx>
#include <pilot/event_type_e.hxx>


namespace pilot {

struct event_t {
	
	
	::pilot::event_type_e type;
	std::string module;
	std::string code_type;
	std::string code;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x40c950ddc1d2e720ull;
	
	event_t() {}
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	std::tuple<std::string, std::string, std::string> get_key() const;
	static ::pilot::event_t create_ex(const ::pilot::event_type_e& type = ::pilot::event_type_e(), const std::string& module = "", const std::string& code_type = "", const std::string& code = "");
	
	static std::shared_ptr<event_t> create();
	std::shared_ptr<event_t> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const event_t& _value);
	friend std::istream& operator>>(std::istream& _in, event_t& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace pilot


namespace vnx {

template<>
struct is_equivalent<::pilot::event_t> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_pilot_event_t_HXX_
