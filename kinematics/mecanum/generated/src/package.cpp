
// AUTO GENERATED by vnxcppcodegen

#include <pilot/kinematics/mecanum/DriveCmd.hxx>
#include <pilot/kinematics/mecanum/DriveState.hxx>

#include <pilot/kinematics/mecanum/package.hxx>
#include <vnx/vnx.h>



namespace vnx {

void type<::pilot::kinematics::mecanum::DriveCmd>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::kinematics::mecanum::DriveCmd());
}

void type<::pilot::kinematics::mecanum::DriveCmd>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::mecanum::DriveCmd& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::kinematics::mecanum::DriveState>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::kinematics::mecanum::DriveState());
}

void type<::pilot::kinematics::mecanum::DriveState>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematics::mecanum::DriveState& value, bool special) {
	code.push_back(CODE_OBJECT);
}


} // namespace vnx


namespace pilot {
namespace kinematics {
namespace mecanum {


static void register_all_types() {
	vnx::register_type_code(::pilot::kinematics::mecanum::DriveCmd::static_create_type_code());
	vnx::register_type_code(::pilot::kinematics::mecanum::DriveState::static_create_type_code());
}

static struct vnx_static_init {
	vnx_static_init() {
		register_all_types();
	}
} vnx_static_init_;

const vnx::TypeCode* const vnx_native_type_code_DriveCmd = vnx::get_type_code(vnx::Hash64(0xcc0eace0f53289dfull));
const vnx::TypeCode* const vnx_native_type_code_DriveState = vnx::get_type_code(vnx::Hash64(0x746ce8edadd78a68ull));

} // namespace pilot
} // namespace kinematics
} // namespace mecanum
