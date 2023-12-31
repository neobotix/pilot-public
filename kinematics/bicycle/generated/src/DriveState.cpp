
// AUTO GENERATED by vnxcppcodegen

#include <pilot/kinematics/bicycle/package.hxx>
#include <pilot/kinematics/bicycle/DriveState.hxx>
#include <pilot/kinematics/Position1.hxx>
#include <pilot/kinematics/Torque1.hxx>
#include <pilot/kinematics/Velocity1.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {
namespace kinematics {
namespace bicycle {


const vnx::Hash64 DriveState::VNX_TYPE_HASH(0x5c1d7427a54840d3ull);
const vnx::Hash64 DriveState::VNX_CODE_HASH(0xf5dccc9e2a4ff858ull);

vnx::Hash64 DriveState::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string DriveState::get_type_name() const {
	return "pilot.kinematics.bicycle.DriveState";
}

const vnx::TypeCode* DriveState::get_type_code() const {
	return pilot::kinematics::bicycle::vnx_native_type_code_DriveState;
}

std::shared_ptr<DriveState> DriveState::create() {
	return std::make_shared<DriveState>();
}

std::shared_ptr<vnx::Value> DriveState::clone() const {
	return std::make_shared<DriveState>(*this);
}

void DriveState::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void DriveState::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void DriveState::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::kinematics::bicycle::vnx_native_type_code_DriveState;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, steer_pos);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, drive_vel);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, torque);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, has_torque);
	_visitor.type_end(*_type_code);
}

void DriveState::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.kinematics.bicycle.DriveState\"";
	_out << ", \"time\": "; vnx::write(_out, time);
	_out << ", \"steer_pos\": "; vnx::write(_out, steer_pos);
	_out << ", \"drive_vel\": "; vnx::write(_out, drive_vel);
	_out << ", \"torque\": "; vnx::write(_out, torque);
	_out << ", \"has_torque\": "; vnx::write(_out, has_torque);
	_out << "}";
}

void DriveState::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object DriveState::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.kinematics.bicycle.DriveState";
	_object["time"] = time;
	_object["steer_pos"] = steer_pos;
	_object["drive_vel"] = drive_vel;
	_object["torque"] = torque;
	_object["has_torque"] = has_torque;
	return _object;
}

void DriveState::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "drive_vel") {
			_entry.second.to(drive_vel);
		} else if(_entry.first == "has_torque") {
			_entry.second.to(has_torque);
		} else if(_entry.first == "steer_pos") {
			_entry.second.to(steer_pos);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		} else if(_entry.first == "torque") {
			_entry.second.to(torque);
		}
	}
}

vnx::Variant DriveState::get_field(const std::string& _name) const {
	if(_name == "time") {
		return vnx::Variant(time);
	}
	if(_name == "steer_pos") {
		return vnx::Variant(steer_pos);
	}
	if(_name == "drive_vel") {
		return vnx::Variant(drive_vel);
	}
	if(_name == "torque") {
		return vnx::Variant(torque);
	}
	if(_name == "has_torque") {
		return vnx::Variant(has_torque);
	}
	return vnx::Variant();
}

void DriveState::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "time") {
		_value.to(time);
	} else if(_name == "steer_pos") {
		_value.to(steer_pos);
	} else if(_name == "drive_vel") {
		_value.to(drive_vel);
	} else if(_name == "torque") {
		_value.to(torque);
	} else if(_name == "has_torque") {
		_value.to(has_torque);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const DriveState& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, DriveState& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* DriveState::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> DriveState::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.kinematics.bicycle.DriveState";
	type_code->type_hash = vnx::Hash64(0x5c1d7427a54840d3ull);
	type_code->code_hash = vnx::Hash64(0xf5dccc9e2a4ff858ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::pilot::kinematics::bicycle::DriveState);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<DriveState>(); };
	type_code->depends.resize(3);
	type_code->depends[0] = ::pilot::kinematics::Position1::static_get_type_code();
	type_code->depends[1] = ::pilot::kinematics::Velocity1::static_get_type_code();
	type_code->depends[2] = ::pilot::kinematics::Torque1::static_get_type_code();
	type_code->fields.resize(5);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "steer_pos";
		field.code = {19, 0};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "drive_vel";
		field.code = {19, 1};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "torque";
		field.code = {19, 2};
	}
	{
		auto& field = type_code->fields[4];
		field.data_size = 1;
		field.name = "has_torque";
		field.code = {31};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot
} // namespace kinematics
} // namespace bicycle


namespace vnx {

void read(TypeInput& in, ::pilot::kinematics::bicycle::DriveState& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.time, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[4]) {
			vnx::read_value(_buf + _field->offset, value.has_torque, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.steer_pos, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.drive_vel, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.torque, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::kinematics::bicycle::DriveState& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::kinematics::bicycle::vnx_native_type_code_DriveState;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::kinematics::bicycle::DriveState>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(9);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.has_torque);
	vnx::write(out, value.steer_pos, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.drive_vel, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.torque, type_code, type_code->fields[3].code.data());
}

void read(std::istream& in, ::pilot::kinematics::bicycle::DriveState& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::kinematics::bicycle::DriveState& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::kinematics::bicycle::DriveState& value) {
	value.accept(visitor);
}

} // vnx
