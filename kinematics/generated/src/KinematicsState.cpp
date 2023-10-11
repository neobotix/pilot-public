
// AUTO GENERATED by vnxcppcodegen

#include <pilot/kinematics/package.hxx>
#include <pilot/kinematics/KinematicsState.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {
namespace kinematics {


const vnx::Hash64 KinematicsState::VNX_TYPE_HASH(0xc5a4cc070d4176eaull);
const vnx::Hash64 KinematicsState::VNX_CODE_HASH(0x926b7d7e676f3ad2ull);

vnx::Hash64 KinematicsState::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string KinematicsState::get_type_name() const {
	return "pilot.kinematics.KinematicsState";
}

const vnx::TypeCode* KinematicsState::get_type_code() const {
	return pilot::kinematics::vnx_native_type_code_KinematicsState;
}

std::shared_ptr<KinematicsState> KinematicsState::create() {
	return std::make_shared<KinematicsState>();
}

std::shared_ptr<vnx::Value> KinematicsState::clone() const {
	return std::make_shared<KinematicsState>(*this);
}

void KinematicsState::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void KinematicsState::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void KinematicsState::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::kinematics::vnx_native_type_code_KinematicsState;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, is_vel_cmd);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, is_moving);
	_visitor.type_end(*_type_code);
}

void KinematicsState::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.kinematics.KinematicsState\"";
	_out << ", \"time\": "; vnx::write(_out, time);
	_out << ", \"is_vel_cmd\": "; vnx::write(_out, is_vel_cmd);
	_out << ", \"is_moving\": "; vnx::write(_out, is_moving);
	_out << "}";
}

void KinematicsState::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object KinematicsState::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.kinematics.KinematicsState";
	_object["time"] = time;
	_object["is_vel_cmd"] = is_vel_cmd;
	_object["is_moving"] = is_moving;
	return _object;
}

void KinematicsState::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "is_moving") {
			_entry.second.to(is_moving);
		} else if(_entry.first == "is_vel_cmd") {
			_entry.second.to(is_vel_cmd);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		}
	}
}

vnx::Variant KinematicsState::get_field(const std::string& _name) const {
	if(_name == "time") {
		return vnx::Variant(time);
	}
	if(_name == "is_vel_cmd") {
		return vnx::Variant(is_vel_cmd);
	}
	if(_name == "is_moving") {
		return vnx::Variant(is_moving);
	}
	return vnx::Variant();
}

void KinematicsState::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "time") {
		_value.to(time);
	} else if(_name == "is_vel_cmd") {
		_value.to(is_vel_cmd);
	} else if(_name == "is_moving") {
		_value.to(is_moving);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const KinematicsState& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, KinematicsState& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* KinematicsState::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> KinematicsState::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.kinematics.KinematicsState";
	type_code->type_hash = vnx::Hash64(0xc5a4cc070d4176eaull);
	type_code->code_hash = vnx::Hash64(0x926b7d7e676f3ad2ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::pilot::kinematics::KinematicsState);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<KinematicsState>(); };
	type_code->fields.resize(3);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 1;
		field.name = "is_vel_cmd";
		field.code = {31};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 1;
		field.name = "is_moving";
		field.code = {31};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot
} // namespace kinematics


namespace vnx {

void read(TypeInput& in, ::pilot::kinematics::KinematicsState& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.is_vel_cmd, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.is_moving, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::kinematics::KinematicsState& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::kinematics::vnx_native_type_code_KinematicsState;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::kinematics::KinematicsState>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(10);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.is_vel_cmd);
	vnx::write_value(_buf + 9, value.is_moving);
}

void read(std::istream& in, ::pilot::kinematics::KinematicsState& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::kinematics::KinematicsState& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::kinematics::KinematicsState& value) {
	value.accept(visitor);
}

} // vnx
