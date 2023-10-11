
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_kinematics_steering_drive_t_HXX_
#define INCLUDE_pilot_kinematics_steering_drive_t_HXX_

#include <vnx/Type.h>
#include <pilot/kinematics/package.hxx>
#include <pilot/kinematics/position_code_e.hxx>


namespace pilot {
namespace kinematics {

struct steering_drive_t {
	
	
	::pilot::kinematics::position_code_e position;
	vnx::float64_t center_pos_x = 0;
	vnx::float64_t center_pos_y = 0;
	vnx::float64_t lever_arm = 0;
	vnx::float64_t home_angle = 0;
	vnx::float64_t wheel_pos_x = 0;
	vnx::float64_t wheel_pos_y = 0;
	vnx::float64_t wheel_angle = 0;
	vnx::float64_t last_stop_angle = 0;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xbb66f1b236cdee5bull;
	
	steering_drive_t() {}
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	void set_wheel_angle(const vnx::float64_t& wheel_angle_ = 0);
	vnx::float64_t get_wheel_pos_radius() const;
	vnx::float64_t get_wheel_pos_angle() const;
	
	static std::shared_ptr<steering_drive_t> create();
	std::shared_ptr<steering_drive_t> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const steering_drive_t& _value);
	friend std::istream& operator>>(std::istream& _in, steering_drive_t& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace pilot
} // namespace kinematics


namespace vnx {

template<>
struct is_equivalent<::pilot::kinematics::steering_drive_t> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_pilot_kinematics_steering_drive_t_HXX_
