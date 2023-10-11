
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/ModuleLauncher_launch.hxx>
#include <pilot/ModuleLauncher_launch_return.hxx>
#include <vnx/Object.hpp>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 ModuleLauncher_launch::VNX_TYPE_HASH(0x872e70921af200b2ull);
const vnx::Hash64 ModuleLauncher_launch::VNX_CODE_HASH(0x961aa76e3a5a4dceull);

vnx::Hash64 ModuleLauncher_launch::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ModuleLauncher_launch::get_type_name() const {
	return "pilot.ModuleLauncher.launch";
}

const vnx::TypeCode* ModuleLauncher_launch::get_type_code() const {
	return pilot::vnx_native_type_code_ModuleLauncher_launch;
}

std::shared_ptr<ModuleLauncher_launch> ModuleLauncher_launch::create() {
	return std::make_shared<ModuleLauncher_launch>();
}

std::shared_ptr<vnx::Value> ModuleLauncher_launch::clone() const {
	return std::make_shared<ModuleLauncher_launch>(*this);
}

void ModuleLauncher_launch::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ModuleLauncher_launch::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ModuleLauncher_launch::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::vnx_native_type_code_ModuleLauncher_launch;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, config);
	_visitor.type_end(*_type_code);
}

void ModuleLauncher_launch::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.ModuleLauncher.launch\"";
	_out << ", \"config\": "; vnx::write(_out, config);
	_out << "}";
}

void ModuleLauncher_launch::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ModuleLauncher_launch::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.ModuleLauncher.launch";
	_object["config"] = config;
	return _object;
}

void ModuleLauncher_launch::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "config") {
			_entry.second.to(config);
		}
	}
}

vnx::Variant ModuleLauncher_launch::get_field(const std::string& _name) const {
	if(_name == "config") {
		return vnx::Variant(config);
	}
	return vnx::Variant();
}

void ModuleLauncher_launch::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "config") {
		_value.to(config);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ModuleLauncher_launch& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ModuleLauncher_launch& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ModuleLauncher_launch::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ModuleLauncher_launch::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.ModuleLauncher.launch";
	type_code->type_hash = vnx::Hash64(0x872e70921af200b2ull);
	type_code->code_hash = vnx::Hash64(0x961aa76e3a5a4dceull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::pilot::ModuleLauncher_launch);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ModuleLauncher_launch>(); };
	type_code->return_type = ::pilot::ModuleLauncher_launch_return::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "config";
		field.code = {24};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::ModuleLauncher_launch& value, const TypeCode* type_code, const uint16_t* code) {
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
	in.read(type_code->total_field_size);
	if(type_code->is_matched) {
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.config, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::ModuleLauncher_launch& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_ModuleLauncher_launch;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::ModuleLauncher_launch>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.config, type_code, type_code->fields[0].code.data());
}

void read(std::istream& in, ::pilot::ModuleLauncher_launch& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::ModuleLauncher_launch& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::ModuleLauncher_launch& value) {
	value.accept(visitor);
}

} // vnx