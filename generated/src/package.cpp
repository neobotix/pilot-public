
// AUTO GENERATED by vnxcppcodegen

#include <pilot/BatteryState.hxx>
#include <pilot/EmergencyState.hxx>
#include <pilot/Event.hxx>
#include <pilot/IOBoardData.hxx>
#include <pilot/Incident.hxx>
#include <pilot/ModuleLauncher_add.hxx>
#include <pilot/ModuleLauncher_add_return.hxx>
#include <pilot/ModuleLauncher_get_names.hxx>
#include <pilot/ModuleLauncher_get_names_return.hxx>
#include <pilot/ModuleLauncher_launch.hxx>
#include <pilot/ModuleLauncher_launch_return.hxx>
#include <pilot/ModuleLauncher_stop.hxx>
#include <pilot/ModuleLauncher_stop_return.hxx>
#include <pilot/ModuleLauncher_stop_all.hxx>
#include <pilot/ModuleLauncher_stop_all_return.hxx>
#include <pilot/PlatformInterface_charge.hxx>
#include <pilot/PlatformInterface_charge_return.hxx>
#include <pilot/PlatformInterface_read_analog_input.hxx>
#include <pilot/PlatformInterface_read_analog_input_return.hxx>
#include <pilot/PlatformInterface_read_digital_input.hxx>
#include <pilot/PlatformInterface_read_digital_input_return.hxx>
#include <pilot/PlatformInterface_set_digital_output.hxx>
#include <pilot/PlatformInterface_set_digital_output_return.hxx>
#include <pilot/PlatformInterface_set_display_text.hxx>
#include <pilot/PlatformInterface_set_display_text_return.hxx>
#include <pilot/PlatformInterface_set_led.hxx>
#include <pilot/PlatformInterface_set_led_return.hxx>
#include <pilot/PlatformInterface_set_leds.hxx>
#include <pilot/PlatformInterface_set_leds_return.hxx>
#include <pilot/PlatformInterface_set_relay.hxx>
#include <pilot/PlatformInterface_set_relay_return.hxx>
#include <pilot/PlatformInterface_shutdown.hxx>
#include <pilot/PlatformInterface_shutdown_return.hxx>
#include <pilot/PlatformInterface_start_charging.hxx>
#include <pilot/PlatformInterface_start_charging_return.hxx>
#include <pilot/PlatformInterface_stop_charging.hxx>
#include <pilot/PlatformInterface_stop_charging_return.hxx>
#include <pilot/PlatformInterface_wait_for_digital_input.hxx>
#include <pilot/PlatformInterface_wait_for_digital_input_return.hxx>
#include <pilot/PowerState.hxx>
#include <pilot/RelayBoardData.hxx>
#include <pilot/RelayBoardV3Data.hxx>
#include <pilot/SafetyInterface_select_safety_field.hxx>
#include <pilot/SafetyInterface_select_safety_field_return.hxx>
#include <pilot/SafetyState.hxx>
#include <pilot/SystemState.hxx>
#include <pilot/USBoardData.hxx>
#include <pilot/battery_code_e.hxx>
#include <pilot/battery_type_e.hxx>
#include <pilot/charging_state_e.hxx>
#include <pilot/em_stop_state_e.hxx>
#include <pilot/event_t.hxx>
#include <pilot/event_type_e.hxx>
#include <pilot/keypad_state_t.hxx>
#include <pilot/kinematic_type_e.hxx>
#include <pilot/led_color_e.hxx>
#include <pilot/permission_e.hxx>
#include <pilot/power_system_type_e.hxx>
#include <pilot/safety_code_e.hxx>
#include <pilot/system_error_e.hxx>

#include <pilot/package.hxx>
#include <vnx/vnx.h>



namespace vnx {

void type<::pilot::BatteryState>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::BatteryState());
}

void type<::pilot::BatteryState>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::BatteryState& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::EmergencyState>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::EmergencyState());
}

void type<::pilot::EmergencyState>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::EmergencyState& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::Event>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::Event());
}

void type<::pilot::Event>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::Event& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::IOBoardData>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::IOBoardData());
}

void type<::pilot::IOBoardData>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::IOBoardData& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::Incident>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::Incident());
}

void type<::pilot::Incident>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::Incident& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_add>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_add());
}

void type<::pilot::ModuleLauncher_add>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_add& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_add_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_add_return());
}

void type<::pilot::ModuleLauncher_add_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_add_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_get_names>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_get_names());
}

void type<::pilot::ModuleLauncher_get_names>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_get_names& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_get_names_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_get_names_return());
}

void type<::pilot::ModuleLauncher_get_names_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_get_names_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_launch>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_launch());
}

void type<::pilot::ModuleLauncher_launch>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_launch& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_launch_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_launch_return());
}

void type<::pilot::ModuleLauncher_launch_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_launch_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_stop>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_stop());
}

void type<::pilot::ModuleLauncher_stop>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_stop& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_stop_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_stop_return());
}

void type<::pilot::ModuleLauncher_stop_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_stop_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_stop_all>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_stop_all());
}

void type<::pilot::ModuleLauncher_stop_all>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_stop_all& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::ModuleLauncher_stop_all_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::ModuleLauncher_stop_all_return());
}

void type<::pilot::ModuleLauncher_stop_all_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::ModuleLauncher_stop_all_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_charge>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_charge());
}

void type<::pilot::PlatformInterface_charge>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_charge& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_charge_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_charge_return());
}

void type<::pilot::PlatformInterface_charge_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_charge_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_read_analog_input>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_read_analog_input());
}

void type<::pilot::PlatformInterface_read_analog_input>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_read_analog_input& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_read_analog_input_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_read_analog_input_return());
}

void type<::pilot::PlatformInterface_read_analog_input_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_read_analog_input_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_read_digital_input>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_read_digital_input());
}

void type<::pilot::PlatformInterface_read_digital_input>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_read_digital_input& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_read_digital_input_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_read_digital_input_return());
}

void type<::pilot::PlatformInterface_read_digital_input_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_read_digital_input_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_digital_output>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_digital_output());
}

void type<::pilot::PlatformInterface_set_digital_output>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_digital_output& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_digital_output_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_digital_output_return());
}

void type<::pilot::PlatformInterface_set_digital_output_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_digital_output_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_display_text>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_display_text());
}

void type<::pilot::PlatformInterface_set_display_text>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_display_text& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_display_text_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_display_text_return());
}

void type<::pilot::PlatformInterface_set_display_text_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_display_text_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_led>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_led());
}

void type<::pilot::PlatformInterface_set_led>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_led& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_led_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_led_return());
}

void type<::pilot::PlatformInterface_set_led_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_led_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_leds>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_leds());
}

void type<::pilot::PlatformInterface_set_leds>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_leds& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_leds_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_leds_return());
}

void type<::pilot::PlatformInterface_set_leds_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_leds_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_relay>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_relay());
}

void type<::pilot::PlatformInterface_set_relay>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_relay& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_set_relay_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_set_relay_return());
}

void type<::pilot::PlatformInterface_set_relay_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_set_relay_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_shutdown>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_shutdown());
}

void type<::pilot::PlatformInterface_shutdown>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_shutdown& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_shutdown_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_shutdown_return());
}

void type<::pilot::PlatformInterface_shutdown_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_shutdown_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_start_charging>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_start_charging());
}

void type<::pilot::PlatformInterface_start_charging>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_start_charging& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_start_charging_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_start_charging_return());
}

void type<::pilot::PlatformInterface_start_charging_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_start_charging_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_stop_charging>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_stop_charging());
}

void type<::pilot::PlatformInterface_stop_charging>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_stop_charging& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_stop_charging_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_stop_charging_return());
}

void type<::pilot::PlatformInterface_stop_charging_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_stop_charging_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_wait_for_digital_input>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_wait_for_digital_input());
}

void type<::pilot::PlatformInterface_wait_for_digital_input>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_wait_for_digital_input& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PlatformInterface_wait_for_digital_input_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PlatformInterface_wait_for_digital_input_return());
}

void type<::pilot::PlatformInterface_wait_for_digital_input_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PlatformInterface_wait_for_digital_input_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::PowerState>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::PowerState());
}

void type<::pilot::PowerState>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::PowerState& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::RelayBoardData>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::RelayBoardData());
}

void type<::pilot::RelayBoardData>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::RelayBoardData& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::RelayBoardV3Data>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::RelayBoardV3Data());
}

void type<::pilot::RelayBoardV3Data>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::RelayBoardV3Data& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::SafetyInterface_select_safety_field>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::SafetyInterface_select_safety_field());
}

void type<::pilot::SafetyInterface_select_safety_field>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::SafetyInterface_select_safety_field& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::SafetyInterface_select_safety_field_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::SafetyInterface_select_safety_field_return());
}

void type<::pilot::SafetyInterface_select_safety_field_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::SafetyInterface_select_safety_field_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::SafetyState>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::SafetyState());
}

void type<::pilot::SafetyState>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::SafetyState& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::SystemState>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::SystemState());
}

void type<::pilot::SystemState>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::SystemState& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::USBoardData>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::USBoardData());
}

void type<::pilot::USBoardData>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::USBoardData& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::battery_code_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::battery_code_e());
}

void type<::pilot::battery_code_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::battery_code_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::battery_type_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::battery_type_e());
}

void type<::pilot::battery_type_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::battery_type_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::charging_state_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::charging_state_e());
}

void type<::pilot::charging_state_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::charging_state_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::em_stop_state_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::em_stop_state_e());
}

void type<::pilot::em_stop_state_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::em_stop_state_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::event_t>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::event_t());
}

void type<::pilot::event_t>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::event_t& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::event_type_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::event_type_e());
}

void type<::pilot::event_type_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::event_type_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::keypad_state_t>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::keypad_state_t());
}

void type<::pilot::keypad_state_t>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::keypad_state_t& value, bool special) {
	code.push_back(CODE_OBJECT);
}

void type<::pilot::kinematic_type_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::kinematic_type_e());
}

void type<::pilot::kinematic_type_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::kinematic_type_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::led_color_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::led_color_e());
}

void type<::pilot::led_color_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::led_color_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::permission_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::permission_e());
}

void type<::pilot::permission_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::permission_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::power_system_type_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::power_system_type_e());
}

void type<::pilot::power_system_type_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::power_system_type_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::safety_code_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::safety_code_e());
}

void type<::pilot::safety_code_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::safety_code_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

void type<::pilot::system_error_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::pilot::system_error_e());
}

void type<::pilot::system_error_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::pilot::system_error_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}


} // namespace vnx


namespace pilot {


static void register_all_types() {
	vnx::register_type_code(::pilot::BatteryState::static_create_type_code());
	vnx::register_type_code(::pilot::EmergencyState::static_create_type_code());
	vnx::register_type_code(::pilot::Event::static_create_type_code());
	vnx::register_type_code(::pilot::IOBoardData::static_create_type_code());
	vnx::register_type_code(::pilot::Incident::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_add::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_add_return::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_get_names::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_get_names_return::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_launch::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_launch_return::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_stop::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_stop_return::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_stop_all::static_create_type_code());
	vnx::register_type_code(::pilot::ModuleLauncher_stop_all_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_charge::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_charge_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_read_analog_input::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_read_analog_input_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_read_digital_input::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_read_digital_input_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_digital_output::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_digital_output_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_display_text::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_display_text_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_led::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_led_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_leds::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_leds_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_relay::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_set_relay_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_shutdown::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_shutdown_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_start_charging::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_start_charging_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_stop_charging::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_stop_charging_return::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_wait_for_digital_input::static_create_type_code());
	vnx::register_type_code(::pilot::PlatformInterface_wait_for_digital_input_return::static_create_type_code());
	vnx::register_type_code(::pilot::PowerState::static_create_type_code());
	vnx::register_type_code(::pilot::RelayBoardData::static_create_type_code());
	vnx::register_type_code(::pilot::RelayBoardV3Data::static_create_type_code());
	vnx::register_type_code(::pilot::SafetyInterface_select_safety_field::static_create_type_code());
	vnx::register_type_code(::pilot::SafetyInterface_select_safety_field_return::static_create_type_code());
	vnx::register_type_code(::pilot::SafetyState::static_create_type_code());
	vnx::register_type_code(::pilot::SystemState::static_create_type_code());
	vnx::register_type_code(::pilot::USBoardData::static_create_type_code());
	vnx::register_type_code(::pilot::battery_code_e::static_create_type_code());
	vnx::register_type_code(::pilot::battery_type_e::static_create_type_code());
	vnx::register_type_code(::pilot::charging_state_e::static_create_type_code());
	vnx::register_type_code(::pilot::em_stop_state_e::static_create_type_code());
	vnx::register_type_code(::pilot::event_t::static_create_type_code());
	vnx::register_type_code(::pilot::event_type_e::static_create_type_code());
	vnx::register_type_code(::pilot::keypad_state_t::static_create_type_code());
	vnx::register_type_code(::pilot::kinematic_type_e::static_create_type_code());
	vnx::register_type_code(::pilot::led_color_e::static_create_type_code());
	vnx::register_type_code(::pilot::permission_e::static_create_type_code());
	vnx::register_type_code(::pilot::power_system_type_e::static_create_type_code());
	vnx::register_type_code(::pilot::safety_code_e::static_create_type_code());
	vnx::register_type_code(::pilot::system_error_e::static_create_type_code());
}

static struct vnx_static_init {
	vnx_static_init() {
		register_all_types();
	}
} vnx_static_init_;

const vnx::TypeCode* const vnx_native_type_code_BatteryState = vnx::get_type_code(vnx::Hash64(0xc6790e4d7b66f791ull));
const vnx::TypeCode* const vnx_native_type_code_EmergencyState = vnx::get_type_code(vnx::Hash64(0x77fc634da8371a8eull));
const vnx::TypeCode* const vnx_native_type_code_Event = vnx::get_type_code(vnx::Hash64(0xd5e665afbb894f5aull));
const vnx::TypeCode* const vnx_native_type_code_IOBoardData = vnx::get_type_code(vnx::Hash64(0x1ca79bd1e6cc8028ull));
const vnx::TypeCode* const vnx_native_type_code_Incident = vnx::get_type_code(vnx::Hash64(0x80c07ca1b021de76ull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_add = vnx::get_type_code(vnx::Hash64(0xd7b2da9af574a8adull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_add_return = vnx::get_type_code(vnx::Hash64(0x253f3417b6905232ull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_get_names = vnx::get_type_code(vnx::Hash64(0x1d718c85eb5fddfdull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_get_names_return = vnx::get_type_code(vnx::Hash64(0x85453d43e9d88683ull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_launch = vnx::get_type_code(vnx::Hash64(0x872e70921af200b2ull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_launch_return = vnx::get_type_code(vnx::Hash64(0x497b3f5c12a65241ull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_stop = vnx::get_type_code(vnx::Hash64(0xbf9f252ee31001d6ull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_stop_return = vnx::get_type_code(vnx::Hash64(0xaaced720ff1e82fcull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_stop_all = vnx::get_type_code(vnx::Hash64(0xaba9c8ba358a8ef2ull));
const vnx::TypeCode* const vnx_native_type_code_ModuleLauncher_stop_all_return = vnx::get_type_code(vnx::Hash64(0x1e46f94caae8d402ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_charge = vnx::get_type_code(vnx::Hash64(0x76f5e893e710094cull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_charge_return = vnx::get_type_code(vnx::Hash64(0x324c8ace432361c3ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_read_analog_input = vnx::get_type_code(vnx::Hash64(0xbacfd8f81a3f5f78ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_read_analog_input_return = vnx::get_type_code(vnx::Hash64(0xe3d533fe5b6eb850ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_read_digital_input = vnx::get_type_code(vnx::Hash64(0x5954df5913183853ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_read_digital_input_return = vnx::get_type_code(vnx::Hash64(0x8cee176865cb2548ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_digital_output = vnx::get_type_code(vnx::Hash64(0xbc8017b9cf5f54feull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_digital_output_return = vnx::get_type_code(vnx::Hash64(0xd534b29b528e1719ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_display_text = vnx::get_type_code(vnx::Hash64(0xa8e1e5f9a1e592aeull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_display_text_return = vnx::get_type_code(vnx::Hash64(0x20d5a9eeb83fc838ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_led = vnx::get_type_code(vnx::Hash64(0xf2939d7d758ac291ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_led_return = vnx::get_type_code(vnx::Hash64(0xd65c24660059e55full));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_leds = vnx::get_type_code(vnx::Hash64(0xbd363a962f7051b1ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_leds_return = vnx::get_type_code(vnx::Hash64(0x84db8bcec886d15full));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_relay = vnx::get_type_code(vnx::Hash64(0x64b037435060244ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_set_relay_return = vnx::get_type_code(vnx::Hash64(0x55f6eb3503221bc2ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_shutdown = vnx::get_type_code(vnx::Hash64(0xecba2a6f15b5182bull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_shutdown_return = vnx::get_type_code(vnx::Hash64(0x8337482e7e33c439ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_start_charging = vnx::get_type_code(vnx::Hash64(0x41ffa1b32a00f3c6ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_start_charging_return = vnx::get_type_code(vnx::Hash64(0x8e838da1287cf7e0ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_stop_charging = vnx::get_type_code(vnx::Hash64(0x5c5470fff954037eull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_stop_charging_return = vnx::get_type_code(vnx::Hash64(0x5140b83a6ff3d2b5ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_wait_for_digital_input = vnx::get_type_code(vnx::Hash64(0xe5a564f1d0ad3154ull));
const vnx::TypeCode* const vnx_native_type_code_PlatformInterface_wait_for_digital_input_return = vnx::get_type_code(vnx::Hash64(0x98ff16a0c33bc6fcull));
const vnx::TypeCode* const vnx_native_type_code_PowerState = vnx::get_type_code(vnx::Hash64(0x83624e8e635643efull));
const vnx::TypeCode* const vnx_native_type_code_RelayBoardData = vnx::get_type_code(vnx::Hash64(0x94d1b110c5b3bdcbull));
const vnx::TypeCode* const vnx_native_type_code_RelayBoardV3Data = vnx::get_type_code(vnx::Hash64(0x9520c728da2f4f2full));
const vnx::TypeCode* const vnx_native_type_code_SafetyInterface_select_safety_field = vnx::get_type_code(vnx::Hash64(0xc411be3b6bf47152ull));
const vnx::TypeCode* const vnx_native_type_code_SafetyInterface_select_safety_field_return = vnx::get_type_code(vnx::Hash64(0xd81ee9df65045d9dull));
const vnx::TypeCode* const vnx_native_type_code_SafetyState = vnx::get_type_code(vnx::Hash64(0xfe0a52079ba87c3full));
const vnx::TypeCode* const vnx_native_type_code_SystemState = vnx::get_type_code(vnx::Hash64(0x6581fb0fdb31ddaeull));
const vnx::TypeCode* const vnx_native_type_code_USBoardData = vnx::get_type_code(vnx::Hash64(0x4850604e2930c0a0ull));
const vnx::TypeCode* const vnx_native_type_code_battery_code_e = vnx::get_type_code(vnx::Hash64(0xe99a391b92ac5118ull));
const vnx::TypeCode* const vnx_native_type_code_battery_type_e = vnx::get_type_code(vnx::Hash64(0xc14a7ed522456731ull));
const vnx::TypeCode* const vnx_native_type_code_charging_state_e = vnx::get_type_code(vnx::Hash64(0xff0a4aa333cf8b83ull));
const vnx::TypeCode* const vnx_native_type_code_em_stop_state_e = vnx::get_type_code(vnx::Hash64(0x3a08b0535ddc894cull));
const vnx::TypeCode* const vnx_native_type_code_event_t = vnx::get_type_code(vnx::Hash64(0x40c950ddc1d2e720ull));
const vnx::TypeCode* const vnx_native_type_code_event_type_e = vnx::get_type_code(vnx::Hash64(0x6255402631db2a4dull));
const vnx::TypeCode* const vnx_native_type_code_keypad_state_t = vnx::get_type_code(vnx::Hash64(0x44fd5f5ace333b19ull));
const vnx::TypeCode* const vnx_native_type_code_kinematic_type_e = vnx::get_type_code(vnx::Hash64(0xde9757131388e240ull));
const vnx::TypeCode* const vnx_native_type_code_led_color_e = vnx::get_type_code(vnx::Hash64(0x7b75c32561de076ull));
const vnx::TypeCode* const vnx_native_type_code_permission_e = vnx::get_type_code(vnx::Hash64(0x64db946d72fb3e6eull));
const vnx::TypeCode* const vnx_native_type_code_power_system_type_e = vnx::get_type_code(vnx::Hash64(0xb3331aac4fcf37a0ull));
const vnx::TypeCode* const vnx_native_type_code_safety_code_e = vnx::get_type_code(vnx::Hash64(0x3e30cd770f8f7239ull));
const vnx::TypeCode* const vnx_native_type_code_system_error_e = vnx::get_type_code(vnx::Hash64(0x5c6737d8cdf39bfbull));

} // namespace pilot
