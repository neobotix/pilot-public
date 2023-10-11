
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_kinematics_mecanum_DriveCmd_HXX_
#define INCLUDE_pilot_kinematics_mecanum_DriveCmd_HXX_

#include <pilot/kinematics/mecanum/package.hxx>
#include <pilot/kinematics/Velocity4.hxx>
#include <vnx/Value.h>


namespace pilot {
namespace kinematics {
namespace mecanum {

class DriveCmd : public ::vnx::Value {
public:
	
	int64_t time = 0;
	::pilot::kinematics::Velocity4 velocity;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xcc0eace0f53289dfull;
	
	DriveCmd() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<DriveCmd> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const DriveCmd& _value);
	friend std::istream& operator>>(std::istream& _in, DriveCmd& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace pilot
} // namespace kinematics
} // namespace mecanum


namespace vnx {

} // vnx

#endif // INCLUDE_pilot_kinematics_mecanum_DriveCmd_HXX_
