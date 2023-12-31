
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_charging_state_e_HXX_
#define INCLUDE_pilot_charging_state_e_HXX_

#include <vnx/Type.h>
#include <pilot/package.hxx>


namespace pilot {

struct charging_state_e {
	
	enum enum_t : uint32_t {
		ABORTED = 923729092l,
		BRAKES_OPEN = 2616656314l,
		EM_STOP = 668456764l,
		FINISHED = 421351423l,
		IS_CHARGING = 1047359998l,
		NOT_CHARGING = 2737660238l,
		NO_CHARGER = 407853812l,
	};
	
	::pilot::charging_state_e::enum_t value = ::pilot::charging_state_e::enum_t(0);
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xff0a4aa333cf8b83ull;
	
	charging_state_e() {}
	
	charging_state_e(const enum_t& _value) { value = _value; }
	charging_state_e(const ::pilot::charging_state_e& _other) { value = _other.value; }
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	operator enum_t() const { return value; }
	charging_state_e& operator=(const enum_t& _value) { value = _value; return *this; }
	charging_state_e& operator=(const ::pilot::charging_state_e& _other) { value = _other.value; return *this; }
	
	static std::shared_ptr<charging_state_e> create();
	std::shared_ptr<charging_state_e> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::bool_t is_valid() const;
	std::string to_string() const;
	std::string to_string_value() const;
	std::string to_string_value_full() const;
	
	void from_string(const std::string& str);
	void from_string_value(const std::string& name);
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const charging_state_e& _value);
	friend std::istream& operator>>(std::istream& _in, charging_state_e& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::charging_state_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::pilot::charging_state_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

template<>
std::string to_string(const ::pilot::charging_state_e& _value); ///< \private

template<>
std::string to_string_value(const ::pilot::charging_state_e& _value); ///< \private

template<>
std::string to_string_value_full(const ::pilot::charging_state_e& _value); ///< \private

template<>
std::string to_string(const ::pilot::charging_state_e::enum_t& _value); ///< \private

template<>
std::string to_string_value(const ::pilot::charging_state_e::enum_t& _value); ///< \private

template<>
std::string to_string_value_full(const ::pilot::charging_state_e::enum_t& _value); ///< \private

template<>
struct is_equivalent<::pilot::charging_state_e> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_pilot_charging_state_e_HXX_
