
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_kinematics_PACKAGE_HXX_
#define INCLUDE_pilot_kinematics_PACKAGE_HXX_

#include <vnx/Type.h>

#include <vnx/package.hxx>


namespace pilot {
namespace kinematics {


class KinematicsState;
class Position1;
class Position2;
class Position2Any;
class Position4;
class PositionAny;
class Torque1;
class Torque2;
class Torque4;
class TorqueAny;
class Velocity1;
class Velocity2;
class Velocity2Any;
class Velocity4;
class VelocityAny;
struct position_code_e;

extern const vnx::TypeCode* const vnx_native_type_code_KinematicsState; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Position1; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Position2; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Position2Any; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Position4; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_PositionAny; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Torque1; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Torque2; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Torque4; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_TorqueAny; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Velocity1; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Velocity2; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Velocity2Any; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_Velocity4; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_VelocityAny; ///< \private
extern const vnx::TypeCode* const vnx_native_type_code_position_code_e; ///< \private

} // namespace pilot
} // namespace kinematics


namespace vnx {

void read(TypeInput& in, ::pilot::kinematics::KinematicsState& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Position1& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Position2& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Position2Any& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Position4& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::PositionAny& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Torque1& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Torque2& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Torque4& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::TorqueAny& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Velocity1& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Velocity2& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Velocity2Any& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::Velocity4& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::VelocityAny& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::pilot::kinematics::position_code_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::pilot::kinematics::KinematicsState& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Position1& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Position2& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Position2Any& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Position4& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::PositionAny& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Torque1& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Torque2& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Torque4& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::TorqueAny& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Velocity1& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Velocity2& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Velocity2Any& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::Velocity4& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::VelocityAny& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::pilot::kinematics::position_code_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void read(std::istream& in, ::pilot::kinematics::KinematicsState& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Position1& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Position2& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Position2Any& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Position4& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::PositionAny& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Torque1& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Torque2& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Torque4& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::TorqueAny& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Velocity1& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Velocity2& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Velocity2Any& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::Velocity4& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::VelocityAny& value); ///< \private
void read(std::istream& in, ::pilot::kinematics::position_code_e& value); ///< \private

void write(std::ostream& out, const ::pilot::kinematics::KinematicsState& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Position1& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Position2& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Position2Any& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Position4& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::PositionAny& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Torque1& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Torque2& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Torque4& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::TorqueAny& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Velocity1& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Velocity2& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Velocity2Any& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::Velocity4& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::VelocityAny& value); ///< \private
void write(std::ostream& out, const ::pilot::kinematics::position_code_e& value); ///< \private

void accept(Visitor& visitor, const ::pilot::kinematics::KinematicsState& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Position1& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Position2& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Position2Any& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Position4& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::PositionAny& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Torque1& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Torque2& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Torque4& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::TorqueAny& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Velocity1& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Velocity2& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Velocity2Any& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::Velocity4& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::VelocityAny& value); ///< \private
void accept(Visitor& visitor, const ::pilot::kinematics::position_code_e& value); ///< \private

/// \private
template<>
struct type<::pilot::kinematics::KinematicsState> {
	void read(TypeInput& in, ::pilot::kinematics::KinematicsState& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::KinematicsState& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::KinematicsState& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::KinematicsState& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::KinematicsState& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::KinematicsState& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Position1> {
	void read(TypeInput& in, ::pilot::kinematics::Position1& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Position1& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Position1& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Position1& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Position1& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Position1& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Position2> {
	void read(TypeInput& in, ::pilot::kinematics::Position2& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Position2& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Position2& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Position2& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Position2& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Position2& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Position2Any> {
	void read(TypeInput& in, ::pilot::kinematics::Position2Any& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Position2Any& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Position2Any& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Position2Any& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Position2Any& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Position2Any& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Position4> {
	void read(TypeInput& in, ::pilot::kinematics::Position4& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Position4& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Position4& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Position4& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Position4& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Position4& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::PositionAny> {
	void read(TypeInput& in, ::pilot::kinematics::PositionAny& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::PositionAny& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::PositionAny& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::PositionAny& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::PositionAny& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::PositionAny& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Torque1> {
	void read(TypeInput& in, ::pilot::kinematics::Torque1& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Torque1& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Torque1& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Torque1& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Torque1& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Torque1& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Torque2> {
	void read(TypeInput& in, ::pilot::kinematics::Torque2& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Torque2& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Torque2& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Torque2& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Torque2& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Torque2& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Torque4> {
	void read(TypeInput& in, ::pilot::kinematics::Torque4& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Torque4& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Torque4& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Torque4& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Torque4& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Torque4& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::TorqueAny> {
	void read(TypeInput& in, ::pilot::kinematics::TorqueAny& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::TorqueAny& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::TorqueAny& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::TorqueAny& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::TorqueAny& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::TorqueAny& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Velocity1> {
	void read(TypeInput& in, ::pilot::kinematics::Velocity1& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Velocity1& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Velocity1& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Velocity1& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Velocity1& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Velocity1& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Velocity2> {
	void read(TypeInput& in, ::pilot::kinematics::Velocity2& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Velocity2& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Velocity2& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Velocity2& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Velocity2& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Velocity2& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Velocity2Any> {
	void read(TypeInput& in, ::pilot::kinematics::Velocity2Any& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Velocity2Any& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Velocity2Any& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Velocity2Any& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Velocity2Any& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Velocity2Any& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::Velocity4> {
	void read(TypeInput& in, ::pilot::kinematics::Velocity4& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::Velocity4& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::Velocity4& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::Velocity4& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::Velocity4& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::Velocity4& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::VelocityAny> {
	void read(TypeInput& in, ::pilot::kinematics::VelocityAny& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::VelocityAny& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::VelocityAny& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::VelocityAny& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::VelocityAny& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::VelocityAny& value, bool special = false);
};

/// \private
template<>
struct type<::pilot::kinematics::position_code_e> {
	void read(TypeInput& in, ::pilot::kinematics::position_code_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::pilot::kinematics::position_code_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::pilot::kinematics::position_code_e& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::pilot::kinematics::position_code_e& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::pilot::kinematics::position_code_e& value) {
		vnx::accept(visitor, value);
	}
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::position_code_e& value, bool special = false);
};


} // namespace vnx

#endif // INCLUDE_pilot_kinematics_PACKAGE_HXX_
