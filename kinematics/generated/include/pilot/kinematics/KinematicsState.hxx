
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_kinematics_KinematicsState_HXX_
#define INCLUDE_pilot_kinematics_KinematicsState_HXX_

#include <pilot/kinematics/package.hxx>
#include <vnx/Value.h>


namespace pilot {
namespace kinematics {

class KinematicsState : public ::vnx::Value {
public:
	
	int64_t time = 0;
	vnx::bool_t is_vel_cmd = 0;
	vnx::bool_t is_moving = 0;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xc5a4cc070d4176eaull;
	
	KinematicsState() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<KinematicsState> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const KinematicsState& _value);
	friend std::istream& operator>>(std::istream& _in, KinematicsState& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace pilot
} // namespace kinematics


namespace vnx {

} // vnx

#endif // INCLUDE_pilot_kinematics_KinematicsState_HXX_
