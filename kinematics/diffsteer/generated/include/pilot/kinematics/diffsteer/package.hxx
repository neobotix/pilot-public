
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_kinematics_diffsteer_PACKAGE_HXX_
#define INCLUDE_pilot_kinematics_diffsteer_PACKAGE_HXX_

#include <vnx/Type.h>

#include <vnx/package.hxx>


namespace pilot {
namespace kinematics {
namespace diffsteer {


class DriveCmd;
class DriveState;

extern const vnx::TypeCode* const vnx_native_type_code_DriveCmd; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_DriveState; ///< \private

} // namespace pilot
} // namespace kinematics
} // namespace diffsteer


namespace vnx {

void read(TypeInput& in, ::pilot::kinematics::diffsteer::DriveCmd& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::diffsteer::DriveState& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::pilot::kinematics::diffsteer::DriveCmd& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::diffsteer::DriveState& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void read(std::istream& in, ::pilot::kinematics::diffsteer::DriveCmd& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::diffsteer::DriveState& value); ///< \private

void write(std::ostream& out, const ::pilot::kinematics::diffsteer::DriveCmd& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::diffsteer::DriveState& value); ///< \private

void accept(Visitor& visitor, const ::pilot::kinematics::diffsteer::DriveCmd& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::diffsteer::DriveState& value); ///< \private

/// \private
template<>
struct type<::pilot::kinematics::diffsteer::DriveCmd> {
	void read(TypeInput& in, ::pilot::kinematics::diffsteer::DriveCmd& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::diffsteer::DriveCmd& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::diffsteer::DriveCmd& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::diffsteer::DriveCmd& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::diffsteer::DriveCmd& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::diffsteer::DriveCmd& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::diffsteer::DriveState> {
	void read(TypeInput& in, ::pilot::kinematics::diffsteer::DriveState& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::diffsteer::DriveState& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::diffsteer::DriveState& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::diffsteer::DriveState& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::diffsteer::DriveState& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::diffsteer::DriveState& value, bool special = false);
};


} // namespace vnx

#endif // INCLUDE_pilot_kinematics_diffsteer_PACKAGE_HXX_
