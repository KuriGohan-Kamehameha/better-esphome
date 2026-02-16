// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace text;
using namespace number;
using namespace button;
using namespace event;
using namespace binary_sensor;
using namespace light;
using namespace sensor;
using namespace text_sensor;
static logger::Logger *logger_logger_id;
static wifi::WiFiComponent *wifi_wificomponent_id;
static mdns::MDNSComponent *mdns_mdnscomponent_id;
static esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
static preferences::IntervalSyncer *preferences_intervalsyncer_id;
static safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
static api::APIServer *api_apiserver_id;
static api::UserServiceTrigger<api::enums::SUPPORTS_RESPONSE_STATUS, int32_t, int32_t, int32_t> *api_userservicetrigger_id;
static Automation<uint32_t, int32_t, int32_t, int32_t> *automation_id;
static StatelessLambdaCondition<uint32_t, int32_t, int32_t, int32_t> *lambdacondition_id;
static IfAction<uint32_t, int32_t, int32_t, int32_t> *ifaction_id_2;
using namespace i2c;
static i2c::IDFI2CBus *i2c_idfi2cbus_id;
static esp32_ble_tracker::ESP32BLETracker *esp32_ble_tracker_esp32bletracker_id;
static bluetooth_proxy::BluetoothProxy *bluetooth_proxy_bluetoothproxy_id;
static bluetooth_proxy::BluetoothConnection *bluetooth_proxy_bluetoothconnection_id;
static bluetooth_proxy::BluetoothConnection *bluetooth_proxy_bluetoothconnection_id_2;
static bluetooth_proxy::BluetoothConnection *bluetooth_proxy_bluetoothconnection_id_3;
static template_::TemplateText *atom_ir_nec_address;
static text::TextStateTrigger *text_textstatetrigger_id;
static Automation<std::string> *automation_id_3;
static StatelessLambdaAction<std::string> *lambdaaction_id_9;
static template_::TemplateText *atom_ir_nec_command;
static text::TextStateTrigger *text_textstatetrigger_id_2;
static Automation<std::string> *automation_id_4;
static StatelessLambdaAction<std::string> *lambdaaction_id_10;
static template_::TemplateText *atom_ir_pronto_data;
static text::TextStateTrigger *text_textstatetrigger_id_3;
static Automation<std::string> *automation_id_5;
static StatelessLambdaAction<std::string> *lambdaaction_id_11;
static template_::TemplateNumber *atom_ir_nec_repeats;
static template_::TemplateNumber *atom_ir_pronto_repeats;
static template_::TemplateNumber *atom_ir_gap_ms;
static script::SingleScript<> *ir_process_queue;
static Automation<> *automation_id_6;
static restart::RestartButton *restart_restartbutton_id;
static safe_mode::SafeModeButton *safe_mode_safemodebutton_id;
static template_::TemplateButton *template__templatebutton_id;
static button::ButtonPressTrigger *button_buttonpresstrigger_id;
static Automation<> *automation_id_7;
static template_::TemplateButton *template__templatebutton_id_2;
static button::ButtonPressTrigger *button_buttonpresstrigger_id_2;
static Automation<> *automation_id_8;
static template_::TemplateButton *template__templatebutton_id_3;
static button::ButtonPressTrigger *button_buttonpresstrigger_id_3;
static Automation<> *automation_id_9;
static template_::TemplateButton *template__templatebutton_id_4;
static button::ButtonPressTrigger *button_buttonpresstrigger_id_4;
static Automation<> *automation_id_10;
static template_::TemplateEvent *atom_button_action;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
static remote_transmitter::RemoteTransmitterComponent *atom_ir;
static Automation<> *automation_id_11;
static status::StatusBinarySensor *status_statusbinarysensor_id;
static gpio::GPIOBinarySensor *atom_button;
static binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id;
static binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id;
static binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger_id;
static Automation<> *automation_id_12;
static StatelessLambdaAction<> *lambdaaction_id_24;
static event::TriggerEventAction<> *event_triggereventaction_id;
static binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger_id_2;
static Automation<> *automation_id_13;
static StatelessLambdaAction<> *lambdaaction_id_25;
static event::TriggerEventAction<> *event_triggereventaction_id_2;
static binary_sensor::MultiClickTrigger *binary_sensor_multiclicktrigger_id_3;
static Automation<> *automation_id_14;
static StatelessLambdaAction<> *lambdaaction_id_26;
static event::TriggerEventAction<> *event_triggereventaction_id_3;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
static template_::TemplateBinarySensor *atom_ir_busy_state;
static esp32_rmt_led_strip::ESP32RMTLEDStripLightOutput *esp32_rmt_led_strip_esp32rmtledstriplightoutput_id;
static light::AddressableLightState *atom_light;
static light::RandomLightEffect *light_randomlighteffect_id;
static debug::DebugComponent *debug_debugcomponent_id;
static uptime::UptimeSecondsSensor *uptime_uptimesecondssensor_id;
static wifi_signal::WiFiSignalSensor *wifi_signal_wifisignalsensor_id;
static internal_temperature::InternalTemperatureSensor *internal_temperature_internaltemperaturesensor_id;
static template_::TemplateSensor *atom_ir_busy;
static template_::TemplateSensor *atom_ir_queue_depth;
static sensor::Sensor *sensor_sensor_id;
static sensor::Sensor *sensor_sensor_id_2;
static sensor::Sensor *sensor_sensor_id_3;
static sensor::Sensor *sensor_sensor_id_4;
static version::VersionTextSensor *version_versiontextsensor_id;
static template_::TemplateTextSensor *atom_ir_last_tx;
static template_::TemplateTextSensor *atom_ir_last_error;
static text_sensor::TextSensor *text_sensor_textsensor_id;
static text_sensor::TextSensor *text_sensor_textsensor_id_2;
static wifi_info::SSIDWiFiInfo *wifi_info_ssidwifiinfo_id;
static wifi_info::BSSIDWiFiInfo *wifi_info_bssidwifiinfo_id;
static wifi_info::MacAddressWifiInfo *wifi_info_macaddresswifiinfo_id;
static wifi_info::DNSAddressWifiInfo *wifi_info_dnsaddresswifiinfo_id;
static wifi_info::PowerSaveModeWiFiInfo *wifi_info_powersavemodewifiinfo_id;
static wifi_info::IPAddressWiFiInfo *wifi_info_ipaddresswifiinfo_id;
static esp32_ble::ESP32BLE *esp32_ble_esp32ble_id;
static globals::GlobalsComponent<bool> *ir_busy;
static globals::GlobalsComponent<std::vector<std::string>> *ir_queue;
static globals::GlobalsComponent<uint8_t> *ir_task_proto;
static globals::GlobalsComponent<uint16_t> *ir_task_addr;
static globals::GlobalsComponent<uint16_t> *ir_task_cmd;
static globals::GlobalsComponent<uint8_t> *ir_task_repeats;
static globals::GlobalsComponent<std::string> *ir_task_pronto;
static StatelessLambdaCondition<uint32_t, int32_t, int32_t, int32_t> *lambdacondition_id_2;
static IfAction<uint32_t, int32_t, int32_t, int32_t> *ifaction_id;
static StatelessLambdaAction<uint32_t, int32_t, int32_t, int32_t> *lambdaaction_id;
static script::ScriptExecuteAction<script::Script<>, uint32_t, int32_t, int32_t, int32_t> *script_scriptexecuteaction_id;
static api::APIRespondAction<uint32_t, int32_t, int32_t, int32_t> *api_apirespondaction_id;
static StatelessLambdaAction<uint32_t, int32_t, int32_t, int32_t> *lambdaaction_id_2;
static StatelessLambdaAction<uint32_t, int32_t, int32_t, int32_t> *lambdaaction_id_3;
static api::APIRespondAction<uint32_t, int32_t, int32_t, int32_t> *api_apirespondaction_id_2;
static StatelessLambdaAction<uint32_t, int32_t, int32_t, int32_t> *lambdaaction_id_4;
static api::APIRespondAction<uint32_t, int32_t, int32_t, int32_t> *api_apirespondaction_id_3;
static api::APIUnregisterServiceCallAction<uint32_t, int32_t, int32_t, int32_t> *api_userservicetrigger_id__unregister;
static api::UserServiceTrigger<api::enums::SUPPORTS_RESPONSE_STATUS, std::string, int32_t> *api_userservicetrigger_id_2;
static Automation<uint32_t, std::string, int32_t> *automation_id_2;
static StatelessLambdaCondition<uint32_t, std::string, int32_t> *lambdacondition_id_3;
static IfAction<uint32_t, std::string, int32_t> *ifaction_id_4;
static StatelessLambdaCondition<uint32_t, std::string, int32_t> *lambdacondition_id_4;
static IfAction<uint32_t, std::string, int32_t> *ifaction_id_3;
static StatelessLambdaAction<uint32_t, std::string, int32_t> *lambdaaction_id_5;
static script::ScriptExecuteAction<script::Script<>, uint32_t, std::string, int32_t> *script_scriptexecuteaction_id_2;
static api::APIRespondAction<uint32_t, std::string, int32_t> *api_apirespondaction_id_4;
static StatelessLambdaAction<uint32_t, std::string, int32_t> *lambdaaction_id_6;
static StatelessLambdaAction<uint32_t, std::string, int32_t> *lambdaaction_id_7;
static api::APIRespondAction<uint32_t, std::string, int32_t> *api_apirespondaction_id_5;
static StatelessLambdaAction<uint32_t, std::string, int32_t> *lambdaaction_id_8;
static api::APIRespondAction<uint32_t, std::string, int32_t> *api_apirespondaction_id_6;
static api::APIUnregisterServiceCallAction<uint32_t, std::string, int32_t> *api_userservicetrigger_id_2__unregister;
using namespace api;
static StatelessLambdaCondition<> *lambdacondition_id_5;
static WhileAction<> *whileaction_id;
static StatelessLambdaAction<> *lambdaaction_id_12;
static StatelessLambdaCondition<> *lambdacondition_id_6;
static IfAction<> *ifaction_id_8;
static StatelessLambdaAction<> *lambdaaction_id_13;
static remote_base::NECAction<> *remote_base_necaction_id;
static StatelessLambdaCondition<> *lambdacondition_id_7;
static WaitUntilAction<> *waituntilaction_id;
static StatelessLambdaCondition<> *lambdacondition_id_8;
static IfAction<> *ifaction_id_5;
static StatelessLambdaAction<> *lambdaaction_id_14;
static script::ScriptStopAction<script::SingleScript<>> *script_scriptstopaction_id;
static DelayAction<> *delayaction_id;
static StatelessLambdaCondition<> *lambdacondition_id_9;
static IfAction<> *ifaction_id_7;
static StatelessLambdaAction<> *lambdaaction_id_15;
static remote_base::ProntoAction<> *remote_base_prontoaction_id;
static StatelessLambdaCondition<> *lambdacondition_id_10;
static WaitUntilAction<> *waituntilaction_id_2;
static StatelessLambdaCondition<> *lambdacondition_id_11;
static IfAction<> *ifaction_id_6;
static StatelessLambdaAction<> *lambdaaction_id_16;
static script::ScriptStopAction<script::SingleScript<>> *script_scriptstopaction_id_2;
static DelayAction<> *delayaction_id_2;
static DelayAction<> *delayaction_id_3;
static StatelessLambdaAction<> *lambdaaction_id_17;
static script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_3;
static StatelessLambdaAction<> *lambdaaction_id_18;
static script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_4;
static StatelessLambdaAction<> *lambdaaction_id_19;
static StatelessLambdaAction<> *lambdaaction_id_20;
static StatelessLambdaAction<> *lambdaaction_id_21;
static script::ScriptStopAction<script::SingleScript<>> *script_scriptstopaction_id_3;
static StatelessLambdaAction<> *lambdaaction_id_22;
static StatelessLambdaAction<> *lambdaaction_id_23;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: atom-lite
  //   friendly_name: Atom Lite
  //   min_version: 2025.12.0
  //   project:
  //     name: m5stack.atom_lite_ir_blaster
  //     version: 2.0.0
  //   platformio_options:
  //     board_build.flash_mode: dio
  //   build_path: build/atom-lite
  //   environment_variables: {}
  //   includes: []
  //   includes_c: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  App.pre_setup("atom-lite", "Atom Lite", false);
  // text:
  // number:
  // button:
  // event:
  // binary_sensor:
  // light:
  // sensor:
  // text_sensor:
  // logger:
  //   level: INFO
  //   baud_rate: 0
  //   id: logger_logger_id
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: UART0
  //   logs: {}
  //   runtime_tag_levels: false
  logger_logger_id = new logger::Logger(0, 512);
  logger_logger_id->create_pthread_key();
  logger_logger_id->init_log_buffer(768);
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_INFO);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source(LOG_STR("logger"));
  App.register_component(logger_logger_id);
  // wifi:
  //   power_save_mode: NONE
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   fast_connect: false
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   post_connect_roaming: true
  //   min_auth_mode: WPA2
  //   networks:
  //     - ssid: !secret 'wifi_ssid'
  //       password: !secret 'wifi_password'
  //       id: wifi_wifiap_id
  //       priority: 0
  //   use_address: atom-lite.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("atom-lite.local");
  wifi_wificomponent_id->init_sta(1);
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("SSID");
  wifi_wifiap_id.set_password("PASSWORD");
  wifi_wifiap_id.set_priority(0);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent_id->set_min_auth_mode(wifi::WIFI_MIN_AUTH_MODE_WPA2);
  wifi_wificomponent_id->set_component_source(LOG_STR("wifi"));
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source(LOG_STR("mdns"));
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   password: 946e8243f5520c12bd0a32651e24a86e
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("946e8243f5520c12bd0a32651e24a86e");
  esphome_esphomeotacomponent_id->set_component_source(LOG_STR("esphome.ota"));
  App.register_component(esphome_esphomeotacomponent_id);
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source(LOG_STR("preferences"));
  App.register_component(preferences_intervalsyncer_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source(LOG_STR("safe_mode"));
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  // api:
  //   encryption:
  //     key: zrAdXmH0/NW3OXKp8N0jft8woveyAPkpyi5zCBzJuak=
  //   actions:
  //     - action: ir_send_nec
  //       supports_response: status
  //       variables:
  //         address: int
  //         command: int
  //         send_times: int
  //       then:
  //         - if:
  //             condition:
  //               lambda: !lambda |-
  //                 const bool addr_ok = (address >= 0) && (address <= 0xFFFF);
  //                 const bool cmd_ok  = (command >= 0) && (command <= 0xFFFF);
  //                 return addr_ok && cmd_ok;
  //               type_id: lambdacondition_id
  //             then:
  //               - if:
  //                   condition:
  //                     lambda: !lambda |-
  //                       constexpr size_t IR_QUEUE_MAX = 20;
  //                       return id(ir_queue).size() < IR_QUEUE_MAX;
  //                     type_id: lambdacondition_id_2
  //                   then:
  //                     - lambda: !lambda |-
  //                         int rep = send_times;
  //                         if (rep < 1) rep = 1;
  //                         if (rep > 20) rep = 20;
  //   
  //                         char task[64];
  //                         snprintf(task, sizeof(task), "N|%d|%d|%d", address, command, rep);
  //                         id(ir_queue).push_back(task);
  //   
  //                         char msg[140];
  //                         snprintf(msg, sizeof(msg), "QUEUED NEC addr=0x%04X cmd=0x%04X rep=%d q=%u",
  //                                  (uint16_t) address, (uint16_t) command, rep, (unsigned) id(ir_queue).size());
  //                         id(atom_ir_last_tx).publish_state(msg);
  //                         id(atom_ir_last_error).publish_state("");
  //                         ESP_LOGI("ir", "%s", msg);
  //                       type_id: lambdaaction_id
  //                     - script.execute:
  //                         id: ir_process_queue
  //                       type_id: script_scriptexecuteaction_id
  //                     - api.respond:
  //                         success: true
  //                         id: api_apiserver_id
  //                         error_message: ''
  //                       type_id: api_apirespondaction_id
  //                   else:
  //                     - logger.log:
  //                         level: WARN
  //                         format: 'ir_send_nec: queue full (%u/20)'
  //                         args:
  //                           - !lambda |-
  //                             (unsigned) id(ir_queue).size()
  //                         logger_id: logger_logger_id
  //                         tag: main
  //                       type_id: lambdaaction_id_2
  //                     - lambda: !lambda |-
  //                         id(atom_ir_last_error).publish_state("IR queue full");
  //                       type_id: lambdaaction_id_3
  //                     - api.respond:
  //                         success: false
  //                         error_message: IR queue full
  //                         id: api_apiserver_id
  //                       type_id: api_apirespondaction_id_2
  //                 type_id: ifaction_id
  //             else:
  //               - logger.log:
  //                   level: ERROR
  //                   format: 'ir_send_nec: invalid args address=%d command=%d'
  //                   args:
  //                     - !lambda |-
  //                       address
  //                     - !lambda |-
  //                       command
  //                   logger_id: logger_logger_id
  //                   tag: main
  //                 type_id: lambdaaction_id_4
  //               - api.respond:
  //                   success: false
  //                   error_message: !lambda |-
  //                     char buf[96];
  //                     snprintf(buf, sizeof(buf), "invalid args address=%d command=%d", address, command);
  //                     return std::string(buf);
  //                   id: api_apiserver_id
  //                 type_id: api_apirespondaction_id_3
  //           type_id: ifaction_id_2
  //       automation_id: automation_id
  //       trigger_id: api_userservicetrigger_id
  //     - action: ir_send_pronto
  //       supports_response: status
  //       variables:
  //         data: string
  //         send_times: int
  //       then:
  //         - if:
  //             condition:
  //               lambda: !lambda |-
  //                 return (!data.empty() && data.size() <= 1024);
  //               type_id: lambdacondition_id_3
  //             then:
  //               - if:
  //                   condition:
  //                     lambda: !lambda |-
  //                       constexpr size_t IR_QUEUE_MAX = 20;
  //                       return id(ir_queue).size() < IR_QUEUE_MAX;
  //                     type_id: lambdacondition_id_4
  //                   then:
  //                     - lambda: !lambda |-
  //                         int rep = send_times;
  //                         if (rep < 1) rep = 1;
  //                         if (rep > 10) rep = 10;
  //   
  //                          Accept as-is; worker will normalize whitespace defensively.
  //                         std::string task = "P|" + std::to_string(rep) + "|" + data;
  //                         id(ir_queue).push_back(task);
  //   
  //                         char msg[140];
  //                         snprintf(msg, sizeof(msg), "QUEUED PRONTO len=%u rep=%d q=%u",
  //                                  (unsigned) data.size(), rep, (unsigned) id(ir_queue).size());
  //                         id(atom_ir_last_tx).publish_state(msg);
  //                         id(atom_ir_last_error).publish_state("");
  //                         ESP_LOGI("ir", "%s", msg);
  //                       type_id: lambdaaction_id_5
  //                     - script.execute:
  //                         id: ir_process_queue
  //                       type_id: script_scriptexecuteaction_id_2
  //                     - api.respond:
  //                         success: true
  //                         id: api_apiserver_id
  //                         error_message: ''
  //                       type_id: api_apirespondaction_id_4
  //                   else:
  //                     - logger.log:
  //                         level: WARN
  //                         format: 'ir_send_pronto: queue full (%u/20)'
  //                         args:
  //                           - !lambda |-
  //                             (unsigned) id(ir_queue).size()
  //                         logger_id: logger_logger_id
  //                         tag: main
  //                       type_id: lambdaaction_id_6
  //                     - lambda: !lambda |-
  //                         id(atom_ir_last_error).publish_state("IR queue full");
  //                       type_id: lambdaaction_id_7
  //                     - api.respond:
  //                         success: false
  //                         error_message: IR queue full
  //                         id: api_apiserver_id
  //                       type_id: api_apirespondaction_id_5
  //                 type_id: ifaction_id_3
  //             else:
  //               - logger.log:
  //                   level: ERROR
  //                   format: 'ir_send_pronto: invalid args data_len=%u'
  //                   args:
  //                     - !lambda |-
  //                       (unsigned) data.size()
  //                   logger_id: logger_logger_id
  //                   tag: main
  //                 type_id: lambdaaction_id_8
  //               - api.respond:
  //                   success: false
  //                   error_message: !lambda |-
  //                     char buf[96];
  //                     snprintf(buf, sizeof(buf), "invalid args data_len=%u", (unsigned) data.size());
  //                     return std::string(buf);
  //                   id: api_apiserver_id
  //                 type_id: api_apirespondaction_id_6
  //           type_id: ifaction_id_4
  //       automation_id: automation_id_2
  //       trigger_id: api_userservicetrigger_id_2
  //   id: api_apiserver_id
  //   port: 6053
  //   reboot_timeout: 15min
  //   batch_delay: 100ms
  //   custom_services: false
  //   homeassistant_services: false
  //   homeassistant_states: false
  //   listen_backlog: 4
  //   max_connections: 8
  //   max_send_queue: 8
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source(LOG_STR("api"));
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_listen_backlog(4);
  api_apiserver_id->set_max_connections(8);
  api_userservicetrigger_id = new api::UserServiceTrigger<api::enums::SUPPORTS_RESPONSE_STATUS, int32_t, int32_t, int32_t>("ir_send_nec", {"address", "command", "send_times"});
  automation_id = new Automation<uint32_t, int32_t, int32_t, int32_t>(api_userservicetrigger_id);
  lambdacondition_id = new StatelessLambdaCondition<uint32_t, int32_t, int32_t, int32_t>([](uint32_t call_id, int32_t address, int32_t command, int32_t send_times) -> bool {
      #line 86 "atom-lite.yml"
      const bool addr_ok = (address >= 0) && (address <= 0xFFFF);
      const bool cmd_ok  = (command >= 0) && (command <= 0xFFFF);
      return addr_ok && cmd_ok;
  });
  ifaction_id_2 = new IfAction<uint32_t, int32_t, int32_t, int32_t>(lambdacondition_id);
  // i2c:
  //   sda: 25
  //   scl: 21
  //   scan: true
  //   frequency: 400000.0
  //   id: i2c_idfi2cbus_id
  //   sda_pullup_enabled: true
  //   scl_pullup_enabled: true
  i2c_idfi2cbus_id = new i2c::IDFI2CBus();
  i2c_idfi2cbus_id->set_component_source(LOG_STR("i2c"));
  App.register_component(i2c_idfi2cbus_id);
  i2c_idfi2cbus_id->set_sda_pin(25);
  i2c_idfi2cbus_id->set_sda_pullup_enabled(true);
  i2c_idfi2cbus_id->set_scl_pin(21);
  i2c_idfi2cbus_id->set_scl_pullup_enabled(true);
  i2c_idfi2cbus_id->set_frequency(400000);
  i2c_idfi2cbus_id->set_scan(true);
  // substitutions:
  //   device_name: atom-lite
  //   friendly_name: Atom Lite
  //   pin_ir_tx: GPIO12
  //   pin_rgb: GPIO27
  //   pin_button: GPIO39
  //   pin_i2c_scl: GPIO21
  //   pin_i2c_sda: GPIO25
  // esp32:
  //   board: m5stack-atom
  //   framework:
  //     type: esp-idf
  //     version: 5.5.2
  //     sdkconfig_options: {}
  //     log_level: ERROR
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_idf_experimental_features: false
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       ignore_efuse_mac_crc: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_tcpip_core_locking: true
  //       enable_lwip_check_thread_safety: true
  //       disable_libc_locks_in_iram: true
  //       disable_vfs_support_termios: true
  //       disable_vfs_support_select: true
  //       disable_vfs_support_dir: true
  //       freertos_in_iram: false
  //       ringbuf_in_iram: false
  //       heap_in_iram: false
  //       execute_from_psram: false
  //       loop_task_stack_size: 8192
  //       enable_ota_rollback: true
  //     components: []
  //     platform_version: https:github.com/pioarduino/platform-espressif32/releases/download/55.03.35/platform-espressif32.zip
  //     source: pioarduino/framework-espidf@https:github.com/pioarduino/esp-idf/releases/download/v5.5.2/esp-idf-v5.5.2.tar.xz
  //   flash_size: 4MB
  //   variant: ESP32
  //   cpu_frequency: 160MHZ
  // esp32_ble_tracker:
  //   id: esp32_ble_tracker_esp32bletracker_id
  //   ble_id: esp32_ble_esp32ble_id
  //   scan_parameters:
  //     duration: 5min
  //     interval: 320ms
  //     window: 30ms
  //     active: true
  //     continuous: true
  //   software_coexistence: true
  esp32_ble_tracker_esp32bletracker_id = new esp32_ble_tracker::ESP32BLETracker();
  esp32_ble_tracker_esp32bletracker_id->set_component_source(LOG_STR("esp32_ble_tracker"));
  App.register_component(esp32_ble_tracker_esp32bletracker_id);
  // bluetooth_proxy:
  //   active: true
  //   cache_services: true
  //   connection_slots: 3
  //   id: bluetooth_proxy_bluetoothproxy_id
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  //   connections:
  //     - esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  //       id: bluetooth_proxy_bluetoothconnection_id
  //     - esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  //       id: bluetooth_proxy_bluetoothconnection_id_2
  //     - esp32_ble_id: esp32_ble_tracker_esp32bletracker_id
  //       id: bluetooth_proxy_bluetoothconnection_id_3
  bluetooth_proxy_bluetoothproxy_id = new bluetooth_proxy::BluetoothProxy();
  bluetooth_proxy_bluetoothproxy_id->set_component_source(LOG_STR("bluetooth_proxy"));
  App.register_component(bluetooth_proxy_bluetoothproxy_id);
  bluetooth_proxy_bluetoothproxy_id->set_active(true);
  esp32_ble_tracker_esp32bletracker_id->register_listener(bluetooth_proxy_bluetoothproxy_id);
  bluetooth_proxy_bluetoothconnection_id = new bluetooth_proxy::BluetoothConnection();
  bluetooth_proxy_bluetoothconnection_id->set_component_source(LOG_STR("bluetooth_proxy"));
  App.register_component(bluetooth_proxy_bluetoothconnection_id);
  bluetooth_proxy_bluetoothproxy_id->register_connection(bluetooth_proxy_bluetoothconnection_id);
  esp32_ble_tracker_esp32bletracker_id->register_client(bluetooth_proxy_bluetoothconnection_id);
  bluetooth_proxy_bluetoothconnection_id_2 = new bluetooth_proxy::BluetoothConnection();
  bluetooth_proxy_bluetoothconnection_id_2->set_component_source(LOG_STR("bluetooth_proxy"));
  App.register_component(bluetooth_proxy_bluetoothconnection_id_2);
  bluetooth_proxy_bluetoothproxy_id->register_connection(bluetooth_proxy_bluetoothconnection_id_2);
  esp32_ble_tracker_esp32bletracker_id->register_client(bluetooth_proxy_bluetoothconnection_id_2);
  bluetooth_proxy_bluetoothconnection_id_3 = new bluetooth_proxy::BluetoothConnection();
  bluetooth_proxy_bluetoothconnection_id_3->set_component_source(LOG_STR("bluetooth_proxy"));
  App.register_component(bluetooth_proxy_bluetoothconnection_id_3);
  bluetooth_proxy_bluetoothproxy_id->register_connection(bluetooth_proxy_bluetoothconnection_id_3);
  esp32_ble_tracker_esp32bletracker_id->register_client(bluetooth_proxy_bluetoothconnection_id_3);
  // text.template:
  //   platform: template
  //   name: Atom Lite IR NEC Address
  //   id: atom_ir_nec_address
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   min_length: 1
  //   max_length: 10
  //   initial_value: '0x0000'
  //   on_value:
  //     - then:
  //         - lambda: !lambda |-
  //              Trim whitespace for copy/paste friendliness
  //             std::string s = x;
  //             auto trim = [](std::string &v) {
  //               while (!v.empty() && (v.front() == ' ' || v.front() == '\t' || v.front() == '\r' || v.front() == '\n')) v.erase(v.begin());
  //               while (!v.empty() && (v.back()  == ' ' || v.back()  == '\t' || v.back()  == '\r' || v.back()  == '\n')) v.pop_back();
  //             };
  //             std::string t = s;
  //             trim(t);
  //             if (t != s) {
  //               auto call = id(atom_ir_nec_address).make_call();
  //               call.set_value(t);
  //               call.perform();
  //             }
  //           type_id: lambdaaction_id_9
  //       automation_id: automation_id_3
  //       trigger_id: text_textstatetrigger_id
  //   disabled_by_default: false
  //   update_interval: 60s
  atom_ir_nec_address = new template_::TemplateText();
  App.register_text(atom_ir_nec_address);
  atom_ir_nec_address->set_name("Atom Lite IR NEC Address", 3145616795UL);
  atom_ir_nec_address->traits.set_min_length(1);
  atom_ir_nec_address->traits.set_max_length(10);
  atom_ir_nec_address->traits.set_mode(text::TEXT_MODE_TEXT);
  text_textstatetrigger_id = new text::TextStateTrigger(atom_ir_nec_address);
  automation_id_3 = new Automation<std::string>(text_textstatetrigger_id);
  lambdaaction_id_9 = new StatelessLambdaAction<std::string>([](std::string x) -> void {
      #line 236 "atom-lite.yml"
       
      std::string s = x;
      auto trim = [](std::string &v) {
        while (!v.empty() && (v.front() == ' ' || v.front() == '\t' || v.front() == '\r' || v.front() == '\n')) v.erase(v.begin());
        while (!v.empty() && (v.back()  == ' ' || v.back()  == '\t' || v.back()  == '\r' || v.back()  == '\n')) v.pop_back();
      };
      std::string t = s;
      trim(t);
      if (t != s) {
        auto call = atom_ir_nec_address->make_call();
        call.set_value(t);
        call.perform();
      }
  });
  automation_id_3->add_actions({lambdaaction_id_9});
  atom_ir_nec_address->set_update_interval(60000);
  atom_ir_nec_address->set_component_source(LOG_STR("template.text"));
  App.register_component(atom_ir_nec_address);
  atom_ir_nec_address->set_optimistic(true);
  atom_ir_nec_address->set_initial_value("0x0000");
  atom_ir_nec_address->set_value_saver(new template_::TextSaver<10>());
  // text.template:
  //   platform: template
  //   name: Atom Lite IR NEC Command
  //   id: atom_ir_nec_command
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   min_length: 1
  //   max_length: 10
  //   initial_value: '0x0000'
  //   on_value:
  //     - then:
  //         - lambda: !lambda |-
  //             std::string s = x;
  //             auto trim = [](std::string &v) {
  //               while (!v.empty() && (v.front() == ' ' || v.front() == '\t' || v.front() == '\r' || v.front() == '\n')) v.erase(v.begin());
  //               while (!v.empty() && (v.back()  == ' ' || v.back()  == '\t' || v.back()  == '\r' || v.back()  == '\n')) v.pop_back();
  //             };
  //             std::string t = s;
  //             trim(t);
  //             if (t != s) {
  //               auto call = id(atom_ir_nec_command).make_call();
  //               call.set_value(t);
  //               call.perform();
  //             }
  //           type_id: lambdaaction_id_10
  //       automation_id: automation_id_4
  //       trigger_id: text_textstatetrigger_id_2
  //   disabled_by_default: false
  //   update_interval: 60s
  atom_ir_nec_command = new template_::TemplateText();
  App.register_text(atom_ir_nec_command);
  atom_ir_nec_command->set_name("Atom Lite IR NEC Command", 1300801312);
  atom_ir_nec_command->traits.set_min_length(1);
  atom_ir_nec_command->traits.set_max_length(10);
  atom_ir_nec_command->traits.set_mode(text::TEXT_MODE_TEXT);
  text_textstatetrigger_id_2 = new text::TextStateTrigger(atom_ir_nec_command);
  automation_id_4 = new Automation<std::string>(text_textstatetrigger_id_2);
  lambdaaction_id_10 = new StatelessLambdaAction<std::string>([](std::string x) -> void {
      #line 262 "atom-lite.yml"
      std::string s = x;
      auto trim = [](std::string &v) {
        while (!v.empty() && (v.front() == ' ' || v.front() == '\t' || v.front() == '\r' || v.front() == '\n')) v.erase(v.begin());
        while (!v.empty() && (v.back()  == ' ' || v.back()  == '\t' || v.back()  == '\r' || v.back()  == '\n')) v.pop_back();
      };
      std::string t = s;
      trim(t);
      if (t != s) {
        auto call = atom_ir_nec_command->make_call();
        call.set_value(t);
        call.perform();
      }
  });
  automation_id_4->add_actions({lambdaaction_id_10});
  atom_ir_nec_command->set_update_interval(60000);
  atom_ir_nec_command->set_component_source(LOG_STR("template.text"));
  App.register_component(atom_ir_nec_command);
  atom_ir_nec_command->set_optimistic(true);
  atom_ir_nec_command->set_initial_value("0x0000");
  atom_ir_nec_command->set_value_saver(new template_::TextSaver<10>());
  // text.template:
  //   platform: template
  //   name: Atom Lite IR Pronto Data
  //   id: atom_ir_pronto_data
  //   mode: TEXT
  //   optimistic: true
  //   restore_value: true
  //   min_length: 255
  //   max_length: 255
  //   initial_value: ''
  //   on_value:
  //     - then:
  //         - lambda: !lambda |-
  //              Normalize whitespace (newlines/tabs -> spaces, collapse runs, trim)
  //             std::string raw = x;
  //             std::string cleaned;
  //             cleaned.reserve(raw.size());
  //             bool last_space = true;
  //   
  //             for (char c : raw) {
  //               if (c == '\r' || c == '\n' || c == '\t') c = ' ';
  //               if (c == ' ') {
  //                 if (!last_space) cleaned.push_back(' ');
  //                 last_space = true;
  //               } else {
  //                 cleaned.push_back(c);
  //                 last_space = false;
  //               }
  //             }
  //             while (!cleaned.empty() && cleaned.back() == ' ') cleaned.pop_back();
  //             size_t start = 0;
  //             while (start < cleaned.size() && cleaned[start] == ' ') start++;
  //             if (start > 0) cleaned.erase(0, start);
  //   
  //             if (cleaned != raw) {
  //               auto call = id(atom_ir_pronto_data).make_call();
  //               call.set_value(cleaned);
  //               call.perform();
  //             }
  //           type_id: lambdaaction_id_11
  //       automation_id: automation_id_5
  //       trigger_id: text_textstatetrigger_id_3
  //   disabled_by_default: false
  //   update_interval: 60s
  atom_ir_pronto_data = new template_::TemplateText();
  App.register_text(atom_ir_pronto_data);
  atom_ir_pronto_data->set_name("Atom Lite IR Pronto Data", 3164458529UL);
  atom_ir_pronto_data->traits.set_min_length(255);
  atom_ir_pronto_data->traits.set_max_length(255);
  atom_ir_pronto_data->traits.set_mode(text::TEXT_MODE_TEXT);
  text_textstatetrigger_id_3 = new text::TextStateTrigger(atom_ir_pronto_data);
  automation_id_5 = new Automation<std::string>(text_textstatetrigger_id_3);
  lambdaaction_id_11 = new StatelessLambdaAction<std::string>([](std::string x) -> void {
      #line 287 "atom-lite.yml"
       
      std::string raw = x;
      std::string cleaned;
      cleaned.reserve(raw.size());
      bool last_space = true;
      
      for (char c : raw) {
        if (c == '\r' || c == '\n' || c == '\t') c = ' ';
        if (c == ' ') {
          if (!last_space) cleaned.push_back(' ');
          last_space = true;
        } else {
          cleaned.push_back(c);
          last_space = false;
        }
      }
      while (!cleaned.empty() && cleaned.back() == ' ') cleaned.pop_back();
      size_t start = 0;
      while (start < cleaned.size() && cleaned[start] == ' ') start++;
      if (start > 0) cleaned.erase(0, start);
      
      if (cleaned != raw) {
        auto call = atom_ir_pronto_data->make_call();
        call.set_value(cleaned);
        call.perform();
      }
  });
  automation_id_5->add_actions({lambdaaction_id_11});
  atom_ir_pronto_data->set_update_interval(60000);
  atom_ir_pronto_data->set_component_source(LOG_STR("template.text"));
  App.register_component(atom_ir_pronto_data);
  atom_ir_pronto_data->set_optimistic(true);
  atom_ir_pronto_data->set_value_saver(new template_::TextSaver<255>());
  // number.template:
  //   platform: template
  //   name: Atom Lite IR NEC Repeats
  //   id: atom_ir_nec_repeats
  //   entity_category: config
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 1.0
  //   min_value: 1.0
  //   max_value: 20.0
  //   step: 1.0
  //   mode: BOX
  //   disabled_by_default: false
  //   update_interval: 60s
  atom_ir_nec_repeats = new template_::TemplateNumber();
  atom_ir_nec_repeats->set_update_interval(60000);
  atom_ir_nec_repeats->set_component_source(LOG_STR("template.number"));
  App.register_component(atom_ir_nec_repeats);
  App.register_number(atom_ir_nec_repeats);
  atom_ir_nec_repeats->set_name("Atom Lite IR NEC Repeats", 2649336663UL);
  atom_ir_nec_repeats->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  atom_ir_nec_repeats->traits.set_min_value(1.0f);
  atom_ir_nec_repeats->traits.set_max_value(20.0f);
  atom_ir_nec_repeats->traits.set_step(1.0f);
  atom_ir_nec_repeats->traits.set_mode(number::NUMBER_MODE_BOX);
  atom_ir_nec_repeats->set_optimistic(true);
  atom_ir_nec_repeats->set_initial_value(1.0f);
  atom_ir_nec_repeats->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Atom Lite IR Pronto Repeats
  //   id: atom_ir_pronto_repeats
  //   entity_category: config
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 1.0
  //   min_value: 1.0
  //   max_value: 10.0
  //   step: 1.0
  //   mode: BOX
  //   disabled_by_default: false
  //   update_interval: 60s
  atom_ir_pronto_repeats = new template_::TemplateNumber();
  atom_ir_pronto_repeats->set_update_interval(60000);
  atom_ir_pronto_repeats->set_component_source(LOG_STR("template.number"));
  App.register_component(atom_ir_pronto_repeats);
  App.register_number(atom_ir_pronto_repeats);
  atom_ir_pronto_repeats->set_name("Atom Lite IR Pronto Repeats", 3364727919UL);
  atom_ir_pronto_repeats->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  atom_ir_pronto_repeats->traits.set_min_value(1.0f);
  atom_ir_pronto_repeats->traits.set_max_value(10.0f);
  atom_ir_pronto_repeats->traits.set_step(1.0f);
  atom_ir_pronto_repeats->traits.set_mode(number::NUMBER_MODE_BOX);
  atom_ir_pronto_repeats->set_optimistic(true);
  atom_ir_pronto_repeats->set_initial_value(1.0f);
  atom_ir_pronto_repeats->set_restore_value(true);
  // number.template:
  //   platform: template
  //   name: Atom Lite IR Inter-Command Gap
  //   id: atom_ir_gap_ms
  //   entity_category: config
  //   optimistic: true
  //   restore_value: true
  //   initial_value: 100.0
  //   min_value: 0.0
  //   max_value: 1000.0
  //   step: 10.0
  //   mode: BOX
  //   unit_of_measurement: ms
  //   disabled_by_default: false
  //   update_interval: 60s
  atom_ir_gap_ms = new template_::TemplateNumber();
  atom_ir_gap_ms->set_update_interval(60000);
  atom_ir_gap_ms->set_component_source(LOG_STR("template.number"));
  App.register_component(atom_ir_gap_ms);
  App.register_number(atom_ir_gap_ms);
  atom_ir_gap_ms->set_name("Atom Lite IR Inter-Command Gap", 2745422919UL);
  atom_ir_gap_ms->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  atom_ir_gap_ms->traits.set_min_value(0.0f);
  atom_ir_gap_ms->traits.set_max_value(1000.0f);
  atom_ir_gap_ms->traits.set_step(10.0f);
  atom_ir_gap_ms->traits.set_mode(number::NUMBER_MODE_BOX);
  atom_ir_gap_ms->traits.set_unit_of_measurement("ms");
  atom_ir_gap_ms->set_optimistic(true);
  atom_ir_gap_ms->set_initial_value(100.0f);
  atom_ir_gap_ms->set_restore_value(true);
  // script:
  //   - id: ir_process_queue
  //     mode: single
  //     then:
  //       - while:
  //           condition:
  //             lambda: !lambda |-
  //               return !id(ir_queue).empty();
  //             type_id: lambdacondition_id_5
  //           then:
  //             - lambda: !lambda |-
  //                 std::string task = id(ir_queue).front();
  //                 id(ir_queue).erase(id(ir_queue).begin());
  //   
  //                  Reset parsed task
  //                 id(ir_task_proto) = 0;
  //                 id(ir_task_addr) = 0;
  //                 id(ir_task_cmd) = 0;
  //                 id(ir_task_repeats) = 1;
  //                 id(ir_task_pronto).clear();
  //   
  //                 if (task.size() < 3 || task[1] != '|') {
  //                   char buf[96];
  //                   snprintf(buf, sizeof(buf), "IR queue item malformed (len=%u)", (unsigned) task.size());
  //                   id(atom_ir_last_error).publish_state(buf);
  //                   ESP_LOGE("ir", "%s", buf);
  //                   return;
  //                 }
  //   
  //                 auto parse_u32 = [](const std::string &s, uint32_t minv, uint32_t maxv, uint32_t &out) -> bool {
  //                   if (s.empty()) return false;
  //                   if (s[0] == '-') return false;
  //                   char *end = nullptr;
  //                   const unsigned long v = strtoul(s.c_str(), &end, 0);   decimal or 0x-prefixed hex
  //                   if (end == nullptr || end == s.c_str() || *end != '\0') return false;
  //                   if (v < minv || v > maxv) return false;
  //                   out = (uint32_t) v;
  //                   return true;
  //                 };
  //   
  //                 if (task[0] == 'N') {
  //                   const size_t p1 = task.find('|', 2);
  //                   const size_t p2 = (p1 == std::string::npos) ? std::string::npos : task.find('|', p1 + 1);
  //                   if (p1 == std::string::npos || p2 == std::string::npos) {
  //                     id(atom_ir_last_error).publish_state("IR NEC item malformed");
  //                     ESP_LOGE("ir", "IR NEC item malformed");
  //                     return;
  //                   }
  //   
  //                   const std::string s_addr = task.substr(2, p1 - 2);
  //                   const std::string s_cmd  = task.substr(p1 + 1, p2 - (p1 + 1));
  //                   const std::string s_rep  = task.substr(p2 + 1);
  //   
  //                   uint32_t addr=0, cmd=0, rep=0;
  //                   if (!parse_u32(s_addr, 0, 0xFFFF, addr) ||
  //                       !parse_u32(s_cmd,  0, 0xFFFF, cmd)  ||
  //                       !parse_u32(s_rep,  1, 20,     rep)) {
  //                     char buf[160];
  //                     snprintf(buf, sizeof(buf), "IR NEC item invalid (addr=%s cmd=%s rep=%s)",
  //                              s_addr.c_str(), s_cmd.c_str(), s_rep.c_str());
  //                     id(atom_ir_last_error).publish_state(buf);
  //                     ESP_LOGE("ir", "%s", buf);
  //                     return;
  //                   }
  //   
  //                   id(ir_task_proto) = 1;
  //                   id(ir_task_addr) = (uint16_t) addr;
  //                   id(ir_task_cmd) = (uint16_t) cmd;
  //                   id(ir_task_repeats) = (uint8_t) rep;
  //                   id(atom_ir_last_error).publish_state("");
  //                   return;
  //                 }
  //   
  //                 if (task[0] == 'P') {
  //                   const size_t p1 = task.find('|', 2);
  //                   if (p1 == std::string::npos) {
  //                     id(atom_ir_last_error).publish_state("IR PRONTO item malformed");
  //                     ESP_LOGE("ir", "IR PRONTO item malformed");
  //                     return;
  //                   }
  //   
  //                   const std::string s_rep = task.substr(2, p1 - 2);
  //                   const std::string raw   = task.substr(p1 + 1);
  //   
  //                   uint32_t rep=0;
  //                   if (!parse_u32(s_rep, 1, 10, rep)) {
  //                     char buf[120];
  //                     snprintf(buf, sizeof(buf), "IR PRONTO item invalid repeats=%s", s_rep.c_str());
  //                     id(atom_ir_last_error).publish_state(buf);
  //                     ESP_LOGE("ir", "%s", buf);
  //                     return;
  //                   }
  //   
  //                    Normalize whitespace + trim (copy/paste friendly)
  //                   std::string cleaned;
  //                   cleaned.reserve(raw.size());
  //                   bool last_space = true;
  //                   for (char c : raw) {
  //                     if (c == '\r' || c == '\n' || c == '\t') c = ' ';
  //                     if (c == ' ') {
  //                       if (!last_space) cleaned.push_back(' ');
  //                       last_space = true;
  //                     } else {
  //                       cleaned.push_back(c);
  //                       last_space = false;
  //                     }
  //                   }
  //                   while (!cleaned.empty() && cleaned.back() == ' ') cleaned.pop_back();
  //                   size_t start = 0;
  //                   while (start < cleaned.size() && cleaned[start] == ' ') start++;
  //                   if (start > 0) cleaned.erase(0, start);
  //   
  //                   if (cleaned.empty() || cleaned.size() > 1024) {
  //                     char buf[120];
  //                     snprintf(buf, sizeof(buf), "IR PRONTO data invalid len=%u", (unsigned) cleaned.size());
  //                     id(atom_ir_last_error).publish_state(buf);
  //                     ESP_LOGE("ir", "%s", buf);
  //                     return;
  //                   }
  //   
  //                   id(ir_task_proto) = 2;
  //                   id(ir_task_repeats) = (uint8_t) rep;
  //                   id(ir_task_pronto) = cleaned;
  //                   id(atom_ir_last_error).publish_state("");
  //                   return;
  //                 }
  //   
  //                 {
  //                   char buf[96];
  //                   snprintf(buf, sizeof(buf), "IR queue item unknown proto='%c'", task[0]);
  //                   id(atom_ir_last_error).publish_state(buf);
  //                   ESP_LOGE("ir", "%s", buf);
  //                 }
  //               type_id: lambdaaction_id_12
  //             - if:
  //                 condition:
  //                   lambda: !lambda |-
  //                     return id(ir_task_proto) == 1;
  //                   type_id: lambdacondition_id_6
  //                 then:
  //                   - lambda: !lambda |-
  //                       id(ir_busy) = true;
  //                       char buf[140];
  //                       snprintf(buf, sizeof(buf), "TX NEC addr=0x%04X cmd=0x%04X rep=%u q=%u",
  //                                id(ir_task_addr), id(ir_task_cmd), id(ir_task_repeats),
  //                                (unsigned) id(ir_queue).size());
  //                       id(atom_ir_last_tx).publish_state(buf);
  //                       ESP_LOGI("ir", "%s", buf);
  //                     type_id: lambdaaction_id_13
  //                   - remote_transmitter.transmit_nec:
  //                       transmitter_id: atom_ir
  //                       address: !lambda |-
  //                         return id(ir_task_addr);
  //                       command: !lambda |-
  //                         return id(ir_task_cmd);
  //                       repeat:
  //                         times: !lambda |-
  //                           return (uint32_t) id(ir_task_repeats);
  //                         wait_time: 10ms
  //                       command_repeats: 1
  //                     type_id: remote_base_necaction_id
  //                   - wait_until:
  //                       condition:
  //                         lambda: !lambda |-
  //                           return !id(ir_busy);
  //                         type_id: lambdacondition_id_7
  //                       timeout: 10s
  //                     type_id: waituntilaction_id
  //                   - if:
  //                       condition:
  //                         lambda: !lambda |-
  //                           return id(ir_busy);
  //                         type_id: lambdacondition_id_8
  //                       then:
  //                         - lambda: !lambda |-
  //                             id(atom_ir_last_error).publish_state("IR TIMEOUT (NEC) - queue canceled; use Clear Busy only for recovery");
  //                             ESP_LOGE("ir", "IR TIMEOUT (NEC) - canceling queue");
  //                             id(ir_queue).clear();
  //                           type_id: lambdaaction_id_14
  //                         - script.stop:
  //                             id: ir_process_queue
  //                           type_id: script_scriptstopaction_id
  //                       else:
  //                         - delay: !lambda |-
  //                             float f = id(atom_ir_gap_ms).state;
  //                             if (f != f) f = 100.0f;   NaN guard
  //                             int ms = (f <= 0.0f) ? 0 : (int) (f + 0.5f);
  //                             return (uint32_t) ms;
  //                           type_id: delayaction_id
  //                     type_id: ifaction_id_5
  //                 else:
  //                   - if:
  //                       condition:
  //                         lambda: !lambda |-
  //                           return id(ir_task_proto) == 2;
  //                         type_id: lambdacondition_id_9
  //                       then:
  //                         - lambda: !lambda |-
  //                             id(ir_busy) = true;
  //                             char buf[140];
  //                             snprintf(buf, sizeof(buf), "TX PRONTO len=%u rep=%u q=%u",
  //                                      (unsigned) id(ir_task_pronto).size(), id(ir_task_repeats),
  //                                      (unsigned) id(ir_queue).size());
  //                             id(atom_ir_last_tx).publish_state(buf);
  //                             ESP_LOGI("ir", "%s", buf);
  //                           type_id: lambdaaction_id_15
  //                         - remote_transmitter.transmit_pronto:
  //                             transmitter_id: atom_ir
  //                             data: !lambda |-
  //                               return id(ir_task_pronto);
  //                             repeat:
  //                               times: !lambda |-
  //                                 return (uint32_t) id(ir_task_repeats);
  //                               wait_time: 10ms
  //                             delta: -1
  //                           type_id: remote_base_prontoaction_id
  //                         - wait_until:
  //                             condition:
  //                               lambda: !lambda |-
  //                                 return !id(ir_busy);
  //                               type_id: lambdacondition_id_10
  //                             timeout: 30s
  //                           type_id: waituntilaction_id_2
  //                         - if:
  //                             condition:
  //                               lambda: !lambda |-
  //                                 return id(ir_busy);
  //                               type_id: lambdacondition_id_11
  //                             then:
  //                               - lambda: !lambda |-
  //                                   id(atom_ir_last_error).publish_state("IR TIMEOUT (PRONTO) - queue canceled; use Clear Busy only for recovery");
  //                                   ESP_LOGE("ir", "IR TIMEOUT (PRONTO) - canceling queue");
  //                                   id(ir_queue).clear();
  //                                 type_id: lambdaaction_id_16
  //                               - script.stop:
  //                                   id: ir_process_queue
  //                                 type_id: script_scriptstopaction_id_2
  //                             else:
  //                               - delay: !lambda |-
  //                                   float f = id(atom_ir_gap_ms).state;
  //                                   if (f != f) f = 100.0f;   NaN guard
  //                                   int ms = (f <= 0.0f) ? 0 : (int) (f + 0.5f);
  //                                   return (uint32_t) ms;
  //                                 type_id: delayaction_id_2
  //                           type_id: ifaction_id_6
  //                       else:
  //                         - delay: 1ms
  //                           type_id: delayaction_id_3
  //                     type_id: ifaction_id_7
  //               type_id: ifaction_id_8
  //         type_id: whileaction_id
  //     trigger_id: trigger_id
  //     automation_id: automation_id_6
  //     parameters: {}
  ir_process_queue = new script::SingleScript<>();
  ir_process_queue->set_name(LOG_STR("ir_process_queue"));
  automation_id_6 = new Automation<>(ir_process_queue);
  // button.restart:
  //   platform: restart
  //   name: Atom Lite Restart
  //   disabled_by_default: false
  //   id: restart_restartbutton_id
  //   icon: mdi:restart
  //   entity_category: config
  //   device_class: restart
  restart_restartbutton_id = new restart::RestartButton();
  restart_restartbutton_id->set_component_source(LOG_STR("restart.button"));
  App.register_component(restart_restartbutton_id);
  App.register_button(restart_restartbutton_id);
  restart_restartbutton_id->set_name("Atom Lite Restart", 2708408473UL);
  restart_restartbutton_id->set_icon("mdi:restart");
  restart_restartbutton_id->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  restart_restartbutton_id->set_device_class("restart");
  // button.safe_mode:
  //   platform: safe_mode
  //   name: Atom Lite Restart (Safe Mode)
  //   disabled_by_default: false
  //   id: safe_mode_safemodebutton_id
  //   icon: mdi:restart-alert
  //   entity_category: config
  //   device_class: restart
  //   safe_mode: safe_mode_safemodecomponent_id
  safe_mode_safemodebutton_id = new safe_mode::SafeModeButton();
  App.register_button(safe_mode_safemodebutton_id);
  safe_mode_safemodebutton_id->set_name("Atom Lite Restart (Safe Mode)", 2533941913UL);
  safe_mode_safemodebutton_id->set_icon("mdi:restart-alert");
  safe_mode_safemodebutton_id->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  safe_mode_safemodebutton_id->set_device_class("restart");
  safe_mode_safemodebutton_id->set_component_source(LOG_STR("safe_mode.button"));
  App.register_component(safe_mode_safemodebutton_id);
  safe_mode_safemodebutton_id->set_safe_mode(safe_mode_safemodecomponent_id);
  // button.template:
  //   platform: template
  //   name: Atom Lite IR Send NEC
  //   on_press:
  //     - then:
  //         - lambda: !lambda |-
  //             constexpr size_t IR_QUEUE_MAX = 20;
  //   
  //             auto trim = [](std::string &v) {
  //               while (!v.empty() && (v.front() == ' ' || v.front() == '\t' || v.front() == '\r' || v.front() == '\n')) v.erase(v.begin());
  //               while (!v.empty() && (v.back()  == ' ' || v.back()  == '\t' || v.back()  == '\r' || v.back()  == '\n')) v.pop_back();
  //             };
  //             auto parse_u32 = [](const std::string &s, uint32_t minv, uint32_t maxv, uint32_t &out) -> bool {
  //               if (s.empty()) return false;
  //               if (s[0] == '-') return false;
  //               char *end = nullptr;
  //               const unsigned long v = strtoul(s.c_str(), &end, 0);
  //               if (end == nullptr || end == s.c_str() || *end != '\0') return false;
  //               if (v < minv || v > maxv) return false;
  //               out = (uint32_t) v;
  //               return true;
  //             };
  //   
  //             std::string s_addr = id(atom_ir_nec_address).state;
  //             std::string s_cmd  = id(atom_ir_nec_command).state;
  //             trim(s_addr);
  //             trim(s_cmd);
  //   
  //             uint32_t addr=0, cmd=0;
  //             if (!parse_u32(s_addr, 0, 0xFFFF, addr) || !parse_u32(s_cmd, 0, 0xFFFF, cmd)) {
  //               char buf[160];
  //               snprintf(buf, sizeof(buf), "NEC input invalid (addr='%s' cmd='%s')", s_addr.c_str(), s_cmd.c_str());
  //               id(atom_ir_last_error).publish_state(buf);
  //               ESP_LOGE("ir", "%s", buf);
  //               return;
  //             }
  //   
  //             float f_rep = id(atom_ir_nec_repeats).state;
  //             if (f_rep != f_rep) f_rep = 1.0f;   NaN guard
  //             int rep = (int) (f_rep + 0.5f);
  //             if (rep < 1) rep = 1;
  //             if (rep > 20) rep = 20;
  //   
  //             if (id(ir_queue).size() >= IR_QUEUE_MAX) {
  //               id(atom_ir_last_error).publish_state("IR queue full");
  //               ESP_LOGW("ir", "NEC not queued: queue full (%u/%u)", (unsigned) id(ir_queue).size(), (unsigned) IR_QUEUE_MAX);
  //               return;
  //             }
  //   
  //             char task[64];
  //             snprintf(task, sizeof(task), "N|%u|%u|%d", (unsigned) addr, (unsigned) cmd, rep);
  //             id(ir_queue).push_back(task);
  //   
  //             char msg[140];
  //             snprintf(msg, sizeof(msg), "QUEUED NEC addr=0x%04X cmd=0x%04X rep=%d q=%u",
  //                      (uint16_t) addr, (uint16_t) cmd, rep, (unsigned) id(ir_queue).size());
  //             id(atom_ir_last_tx).publish_state(msg);
  //             id(atom_ir_last_error).publish_state("");
  //             ESP_LOGI("ir", "%s", msg);
  //           type_id: lambdaaction_id_17
  //         - script.execute:
  //             id: ir_process_queue
  //           type_id: script_scriptexecuteaction_id_3
  //       automation_id: automation_id_7
  //       trigger_id: button_buttonpresstrigger_id
  //   disabled_by_default: false
  //   id: template__templatebutton_id
  template__templatebutton_id = new template_::TemplateButton();
  App.register_button(template__templatebutton_id);
  template__templatebutton_id->set_name("Atom Lite IR Send NEC", 3934539977UL);
  button_buttonpresstrigger_id = new button::ButtonPressTrigger(template__templatebutton_id);
  automation_id_7 = new Automation<>(button_buttonpresstrigger_id);
  // button.template:
  //   platform: template
  //   name: Atom Lite IR Send Pronto
  //   on_press:
  //     - then:
  //         - lambda: !lambda |-
  //             constexpr size_t IR_QUEUE_MAX = 20;
  //   
  //             std::string raw = id(atom_ir_pronto_data).state;
  //   
  //              Normalize whitespace + trim (same rules as worker)
  //             std::string cleaned;
  //             cleaned.reserve(raw.size());
  //             bool last_space = true;
  //             for (char c : raw) {
  //               if (c == '\r' || c == '\n' || c == '\t') c = ' ';
  //               if (c == ' ') {
  //                 if (!last_space) cleaned.push_back(' ');
  //                 last_space = true;
  //               } else {
  //                 cleaned.push_back(c);
  //                 last_space = false;
  //               }
  //             }
  //             while (!cleaned.empty() && cleaned.back() == ' ') cleaned.pop_back();
  //             size_t start = 0;
  //             while (start < cleaned.size() && cleaned[start] == ' ') start++;
  //             if (start > 0) cleaned.erase(0, start);
  //   
  //             if (cleaned.empty()) {
  //               id(atom_ir_last_error).publish_state("Pronto data empty");
  //               ESP_LOGE("ir", "Pronto not queued: data empty");
  //               return;
  //             }
  //             if (cleaned.size() > 1024) {
  //               char buf[120];
  //               snprintf(buf, sizeof(buf), "Pronto too long (len=%u)", (unsigned) cleaned.size());
  //               id(atom_ir_last_error).publish_state(buf);
  //               ESP_LOGE("ir", "%s", buf);
  //               return;
  //             }
  //   
  //             float f_rep = id(atom_ir_pronto_repeats).state;
  //             if (f_rep != f_rep) f_rep = 1.0f;   NaN guard
  //             int rep = (int) (f_rep + 0.5f);
  //             if (rep < 1) rep = 1;
  //             if (rep > 10) rep = 10;
  //   
  //             if (id(ir_queue).size() >= IR_QUEUE_MAX) {
  //               id(atom_ir_last_error).publish_state("IR queue full");
  //               ESP_LOGW("ir", "Pronto not queued: queue full (%u/%u)", (unsigned) id(ir_queue).size(), (unsigned) IR_QUEUE_MAX);
  //               return;
  //             }
  //   
  //             std::string task = "P|" + std::to_string(rep) + "|" + cleaned;
  //             id(ir_queue).push_back(task);
  //   
  //             char msg[140];
  //             snprintf(msg, sizeof(msg), "QUEUED PRONTO len=%u rep=%d q=%u",
  //                      (unsigned) cleaned.size(), rep, (unsigned) id(ir_queue).size());
  //             id(atom_ir_last_tx).publish_state(msg);
  //             id(atom_ir_last_error).publish_state("");
  //             ESP_LOGI("ir", "%s", msg);
  //           type_id: lambdaaction_id_18
  //         - script.execute:
  //             id: ir_process_queue
  //           type_id: script_scriptexecuteaction_id_4
  //       automation_id: automation_id_8
  //       trigger_id: button_buttonpresstrigger_id_2
  //   disabled_by_default: false
  //   id: template__templatebutton_id_2
  template__templatebutton_id_2 = new template_::TemplateButton();
  App.register_button(template__templatebutton_id_2);
  template__templatebutton_id_2->set_name("Atom Lite IR Send Pronto", 1046719715);
  button_buttonpresstrigger_id_2 = new button::ButtonPressTrigger(template__templatebutton_id_2);
  automation_id_8 = new Automation<>(button_buttonpresstrigger_id_2);
  // button.template:
  //   platform: template
  //   name: Atom Lite IR Cancel Queue
  //   entity_category: diagnostic
  //   disabled_by_default: true
  //   on_press:
  //     - then:
  //         - lambda: !lambda |-
  //             id(ir_queue).clear();
  //             id(atom_ir_last_error).publish_state("IR queue canceled by user");
  //           type_id: lambdaaction_id_19
  //         - logger.log:
  //             level: WARN
  //             format: IR queue cleared by user
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //           type_id: lambdaaction_id_20
  //       automation_id: automation_id_9
  //       trigger_id: button_buttonpresstrigger_id_3
  //   id: template__templatebutton_id_3
  template__templatebutton_id_3 = new template_::TemplateButton();
  App.register_button(template__templatebutton_id_3);
  template__templatebutton_id_3->set_name("Atom Lite IR Cancel Queue", 3901000646UL);
  template__templatebutton_id_3->set_disabled_by_default(true);
  template__templatebutton_id_3->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  button_buttonpresstrigger_id_3 = new button::ButtonPressTrigger(template__templatebutton_id_3);
  automation_id_9 = new Automation<>(button_buttonpresstrigger_id_3);
  // button.template:
  //   platform: template
  //   name: Atom Lite IR Clear Busy
  //   entity_category: diagnostic
  //   disabled_by_default: true
  //   on_press:
  //     - then:
  //         - lambda: !lambda |-
  //             id(ir_queue).clear();
  //             id(ir_busy) = false;   FORCE: use only for recovery
  //             id(atom_ir_last_error).publish_state("IR busy FORCE-cleared (recovery)");
  //           type_id: lambdaaction_id_21
  //         - script.stop:
  //             id: ir_process_queue
  //           type_id: script_scriptstopaction_id_3
  //         - logger.log:
  //             level: WARN
  //             format: IR busy flag FORCE-cleared (queue cleared). Use only for recovery.
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //           type_id: lambdaaction_id_22
  //       automation_id: automation_id_10
  //       trigger_id: button_buttonpresstrigger_id_4
  //   id: template__templatebutton_id_4
  template__templatebutton_id_4 = new template_::TemplateButton();
  App.register_button(template__templatebutton_id_4);
  template__templatebutton_id_4->set_name("Atom Lite IR Clear Busy", 249040245);
  template__templatebutton_id_4->set_disabled_by_default(true);
  template__templatebutton_id_4->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  button_buttonpresstrigger_id_4 = new button::ButtonPressTrigger(template__templatebutton_id_4);
  automation_id_10 = new Automation<>(button_buttonpresstrigger_id_4);
  // event.template:
  //   platform: template
  //   name: Atom Button Action
  //   id: atom_button_action
  //   device_class: button
  //   event_types:
  //     - single_click
  //     - double_click
  //     - long_press
  //   disabled_by_default: false
  atom_button_action = new template_::TemplateEvent();
  App.register_event(atom_button_action);
  atom_button_action->set_name("Atom Button Action", 2406430050UL);
  atom_button_action->set_event_types({"single_click", "double_click", "long_press"});
  atom_button_action->set_device_class("button");
  atom_button_action->set_component_source(LOG_STR("template.event"));
  App.register_component(atom_button_action);
  // remote_transmitter:
  //   id: atom_ir
  //   pin:
  //     number: 12
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   carrier_duty_percent: 50
  //   rmt_symbols: 448
  //   on_complete:
  //     then:
  //       - lambda: !lambda |-
  //           id(ir_busy) = false;
  //         type_id: lambdaaction_id_23
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_11
  //   non_blocking: true
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_12);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  atom_ir = new remote_transmitter::RemoteTransmitterComponent(esp32_esp32internalgpiopin_id);
  atom_ir->set_rmt_symbols(448);
  atom_ir->set_non_blocking(true);
  atom_ir->set_eot_level(false);
  atom_ir->set_component_source(LOG_STR("remote_transmitter"));
  App.register_component(atom_ir);
  atom_ir->set_carrier_duty_percent(50);
  automation_id_11 = new Automation<>(atom_ir->get_complete_trigger());
  // binary_sensor.status:
  //   platform: status
  //   name: Atom Lite Status
  //   disabled_by_default: false
  //   id: status_statusbinarysensor_id
  //   entity_category: diagnostic
  //   device_class: connectivity
  status_statusbinarysensor_id = new status::StatusBinarySensor();
  App.register_binary_sensor(status_statusbinarysensor_id);
  status_statusbinarysensor_id->set_name("Atom Lite Status", 3053600454UL);
  status_statusbinarysensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  status_statusbinarysensor_id->set_device_class("connectivity");
  status_statusbinarysensor_id->set_trigger_on_initial_state(false);
  status_statusbinarysensor_id->set_component_source(LOG_STR("status.binary_sensor"));
  App.register_component(status_statusbinarysensor_id);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 39
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: true
  //     id: esp32_esp32internalgpiopin_id_2
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Atom Button
  //   id: atom_button
  //   filters:
  //     - delayed_on: 50ms
  //       type_id: binary_sensor_delayedonfilter_id
  //     - delayed_off: 50ms
  //       type_id: binary_sensor_delayedofffilter_id
  //   on_multi_click:
  //     - timing:
  //         - state: true
  //           min_length: 0ms
  //           max_length: 800ms
  //         - state: false
  //           min_length: 0ms
  //           max_length: 500ms
  //         - state: true
  //           min_length: 0ms
  //           max_length: 800ms
  //         - state: false
  //           min_length: 200ms
  //       then:
  //         - logger.log:
  //             format: Double Clicked
  //             level: DEBUG
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //           type_id: lambdaaction_id_24
  //         - event.trigger:
  //             id: atom_button_action
  //             event_type: double_click
  //           type_id: event_triggereventaction_id
  //       automation_id: automation_id_12
  //       trigger_id: binary_sensor_multiclicktrigger_id
  //       invalid_cooldown: 1s
  //     - timing:
  //         - state: true
  //           min_length: 800ms
  //       then:
  //         - logger.log:
  //             format: Long Press
  //             level: DEBUG
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //           type_id: lambdaaction_id_25
  //         - event.trigger:
  //             id: atom_button_action
  //             event_type: long_press
  //           type_id: event_triggereventaction_id_2
  //       automation_id: automation_id_13
  //       trigger_id: binary_sensor_multiclicktrigger_id_2
  //       invalid_cooldown: 1s
  //     - timing:
  //         - state: true
  //           min_length: 0ms
  //           max_length: 800ms
  //         - state: false
  //           min_length: 200ms
  //       then:
  //         - logger.log:
  //             format: Single Click
  //             level: DEBUG
  //             logger_id: logger_logger_id
  //             args: []
  //             tag: main
  //           type_id: lambdaaction_id_26
  //         - event.trigger:
  //             id: atom_button_action
  //             event_type: single_click
  //           type_id: event_triggereventaction_id_3
  //       automation_id: automation_id_14
  //       trigger_id: binary_sensor_multiclicktrigger_id_3
  //       invalid_cooldown: 1s
  //   disabled_by_default: false
  //   use_interrupt: true
  //   interrupt_type: ANY
  atom_button = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(atom_button);
  atom_button->set_name("Atom Button", 2766977057UL);
  atom_button->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id);
  binary_sensor_delayedonfilter_id->set_delay(50);
  binary_sensor_delayedofffilter_id = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id);
  binary_sensor_delayedofffilter_id->set_delay(50);
  atom_button->add_filters({binary_sensor_delayedonfilter_id, binary_sensor_delayedofffilter_id});
  binary_sensor_multiclicktrigger_id = new binary_sensor::MultiClickTrigger(atom_button, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 0,
      .max_length = 800,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 0,
      .max_length = 500,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 0,
      .max_length = 800,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 200,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger_id->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_multiclicktrigger_id);
  automation_id_12 = new Automation<>(binary_sensor_multiclicktrigger_id);
  lambdaaction_id_24 = new StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "Double Clicked");
  });
  event_triggereventaction_id = new event::TriggerEventAction<>();
  event_triggereventaction_id->set_parent(atom_button_action);
  event_triggereventaction_id->set_event_type("double_click");
  automation_id_12->add_actions({lambdaaction_id_24, event_triggereventaction_id});
  binary_sensor_multiclicktrigger_id_2 = new binary_sensor::MultiClickTrigger(atom_button, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 800,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger_id_2->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger_id_2->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_multiclicktrigger_id_2);
  automation_id_13 = new Automation<>(binary_sensor_multiclicktrigger_id_2);
  lambdaaction_id_25 = new StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "Long Press");
  });
  event_triggereventaction_id_2 = new event::TriggerEventAction<>();
  event_triggereventaction_id_2->set_parent(atom_button_action);
  event_triggereventaction_id_2->set_event_type("long_press");
  automation_id_13->add_actions({lambdaaction_id_25, event_triggereventaction_id_2});
  binary_sensor_multiclicktrigger_id_3 = new binary_sensor::MultiClickTrigger(atom_button, {binary_sensor::MultiClickTriggerEvent{
      .state = true,
      .min_length = 0,
      .max_length = 800,
    }, binary_sensor::MultiClickTriggerEvent{
      .state = false,
      .min_length = 200,
      .max_length = 4294967294UL,
  }});
  binary_sensor_multiclicktrigger_id_3->set_invalid_cooldown(1000);
  binary_sensor_multiclicktrigger_id_3->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_multiclicktrigger_id_3);
  automation_id_14 = new Automation<>(binary_sensor_multiclicktrigger_id_3);
  lambdaaction_id_26 = new StatelessLambdaAction<>([]() -> void {
      ESP_LOGD("main", "Single Click");
  });
  event_triggereventaction_id_3 = new event::TriggerEventAction<>();
  event_triggereventaction_id_3->set_parent(atom_button_action);
  event_triggereventaction_id_3->set_event_type("single_click");
  automation_id_14->add_actions({lambdaaction_id_26, event_triggereventaction_id_3});
  atom_button->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(atom_button);
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_39);
  esp32_esp32internalgpiopin_id_2->set_inverted(true);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_INPUT);
  atom_button->set_pin(esp32_esp32internalgpiopin_id_2);
  atom_button->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  // binary_sensor.template:
  //   platform: template
  //   name: Atom Lite IR Busy State
  //   id: atom_ir_busy_state
  //   lambda: !lambda |-
  //     return id(ir_busy) || !id(ir_queue).empty();
  //   entity_category: diagnostic
  //   disabled_by_default: true
  atom_ir_busy_state = new template_::TemplateBinarySensor();
  App.register_binary_sensor(atom_ir_busy_state);
  atom_ir_busy_state->set_name("Atom Lite IR Busy State", 2139751997);
  atom_ir_busy_state->set_disabled_by_default(true);
  atom_ir_busy_state->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  atom_ir_busy_state->set_trigger_on_initial_state(false);
  atom_ir_busy_state->set_component_source(LOG_STR("template.binary_sensor"));
  App.register_component(atom_ir_busy_state);
  // light.esp32_rmt_led_strip:
  //   platform: esp32_rmt_led_strip
  //   name: Atom RGB Light
  //   id: atom_light
  //   pin:
  //     number: 27
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_3
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   num_leds: 1
  //   rgb_order: GRB
  //   chipset: SK6812
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   rmt_symbols: 64
  //   max_refresh_rate: 20ms
  //   use_psram: false
  //   effects:
  //     - random:
  //         name: Random
  //         transition_length: 1s
  //         update_interval: 1s
  //       type_id: light_randomlighteffect_id
  //   disabled_by_default: false
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: esp32_rmt_led_strip_esp32rmtledstriplightoutput_id
  //   is_rgbw: false
  //   is_wrgb: false
  //   reset_high: 0us
  //   reset_low: 0us
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id = new esp32_rmt_led_strip::ESP32RMTLEDStripLightOutput();
  atom_light = new light::AddressableLightState(esp32_rmt_led_strip_esp32rmtledstriplightoutput_id);
  App.register_light(atom_light);
  atom_light->set_component_source(LOG_STR("light"));
  App.register_component(atom_light);
  atom_light->set_name("Atom RGB Light", 3205257499UL);
  atom_light->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  atom_light->set_default_transition_length(1000);
  atom_light->set_flash_transition_length(0);
  atom_light->set_gamma_correct(2.8f);
  light_randomlighteffect_id = new light::RandomLightEffect("Random");
  light_randomlighteffect_id->set_transition_length(1000);
  light_randomlighteffect_id->set_update_interval(1000);
  atom_light->add_effects({light_randomlighteffect_id});
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_component_source(LOG_STR("esp32_rmt_led_strip.light"));
  App.register_component(esp32_rmt_led_strip_esp32rmtledstriplightoutput_id);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_num_leds(1);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_pin(27);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_max_refresh_rate(20000);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_led_params(300, 900, 600, 600, 0, 0);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_rgb_order(esp32_rmt_led_strip::ORDER_GRB);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_is_rgbw(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_is_wrgb(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_use_psram(false);
  esp32_rmt_led_strip_esp32rmtledstriplightoutput_id->set_rmt_symbols(64);
  // debug:
  //   update_interval: 30s
  //   id: debug_debugcomponent_id
  debug_debugcomponent_id = new debug::DebugComponent();
  debug_debugcomponent_id->set_update_interval(30000);
  debug_debugcomponent_id->set_component_source(LOG_STR("debug"));
  App.register_component(debug_debugcomponent_id);
  // sensor.uptime:
  //   platform: uptime
  //   name: Atom Lite Uptime
  //   entity_category: diagnostic
  //   disabled_by_default: true
  //   force_update: false
  //   id: uptime_uptimesecondssensor_id
  //   unit_of_measurement: s
  //   icon: mdi:timer-outline
  //   accuracy_decimals: 0
  //   device_class: duration
  //   state_class: total_increasing
  //   update_interval: 60s
  //   type: seconds
  uptime_uptimesecondssensor_id = new uptime::UptimeSecondsSensor();
  App.register_sensor(uptime_uptimesecondssensor_id);
  uptime_uptimesecondssensor_id->set_name("Atom Lite Uptime", 210047988);
  uptime_uptimesecondssensor_id->set_disabled_by_default(true);
  uptime_uptimesecondssensor_id->set_icon("mdi:timer-outline");
  uptime_uptimesecondssensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  uptime_uptimesecondssensor_id->set_device_class("duration");
  uptime_uptimesecondssensor_id->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  uptime_uptimesecondssensor_id->set_unit_of_measurement("s");
  uptime_uptimesecondssensor_id->set_accuracy_decimals(0);
  uptime_uptimesecondssensor_id->set_update_interval(60000);
  uptime_uptimesecondssensor_id->set_component_source(LOG_STR("uptime.sensor"));
  App.register_component(uptime_uptimesecondssensor_id);
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: Atom Lite WiFi RSSI
  //   update_interval: 60s
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   id: wifi_signal_wifisignalsensor_id
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  wifi_signal_wifisignalsensor_id = new wifi_signal::WiFiSignalSensor();
  App.register_sensor(wifi_signal_wifisignalsensor_id);
  wifi_signal_wifisignalsensor_id->set_name("Atom Lite WiFi RSSI", 3251518179UL);
  wifi_signal_wifisignalsensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_signal_wifisignalsensor_id->set_device_class("signal_strength");
  wifi_signal_wifisignalsensor_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_wifisignalsensor_id->set_unit_of_measurement("dBm");
  wifi_signal_wifisignalsensor_id->set_accuracy_decimals(0);
  wifi_signal_wifisignalsensor_id->set_update_interval(60000);
  wifi_signal_wifisignalsensor_id->set_component_source(LOG_STR("wifi_signal.sensor"));
  App.register_component(wifi_signal_wifisignalsensor_id);
  // sensor.internal_temperature:
  //   platform: internal_temperature
  //   name: Atom Lite Internal Temperature
  //   update_interval: 30s
  //   entity_category: diagnostic
  //   disabled_by_default: true
  //   force_update: false
  //   id: internal_temperature_internaltemperaturesensor_id
  //   unit_of_measurement: °C
  //   accuracy_decimals: 1
  //   device_class: temperature
  //   state_class: measurement
  internal_temperature_internaltemperaturesensor_id = new internal_temperature::InternalTemperatureSensor();
  App.register_sensor(internal_temperature_internaltemperaturesensor_id);
  internal_temperature_internaltemperaturesensor_id->set_name("Atom Lite Internal Temperature", 914334960);
  internal_temperature_internaltemperaturesensor_id->set_disabled_by_default(true);
  internal_temperature_internaltemperaturesensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  internal_temperature_internaltemperaturesensor_id->set_device_class("temperature");
  internal_temperature_internaltemperaturesensor_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  internal_temperature_internaltemperaturesensor_id->set_unit_of_measurement("\302\260C");
  internal_temperature_internaltemperaturesensor_id->set_accuracy_decimals(1);
  internal_temperature_internaltemperaturesensor_id->set_update_interval(30000);
  internal_temperature_internaltemperaturesensor_id->set_component_source(LOG_STR("internal_temperature.sensor"));
  App.register_component(internal_temperature_internaltemperaturesensor_id);
  // sensor.template:
  //   platform: template
  //   name: Atom Lite IR Busy
  //   id: atom_ir_busy
  //   lambda: !lambda |-
  //     return (id(ir_busy) || !id(ir_queue).empty()) ? 1.0f : 0.0f;
  //   update_interval: 500ms
  //   accuracy_decimals: 0
  //   unit_of_measurement: ''
  //   entity_category: diagnostic
  //   disabled_by_default: true
  //   force_update: false
  atom_ir_busy = new template_::TemplateSensor();
  App.register_sensor(atom_ir_busy);
  atom_ir_busy->set_name("Atom Lite IR Busy", 2568216339UL);
  atom_ir_busy->set_disabled_by_default(true);
  atom_ir_busy->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  atom_ir_busy->set_unit_of_measurement("");
  atom_ir_busy->set_accuracy_decimals(0);
  atom_ir_busy->set_update_interval(500);
  atom_ir_busy->set_component_source(LOG_STR("template.sensor"));
  App.register_component(atom_ir_busy);
  // sensor.template:
  //   platform: template
  //   name: Atom Lite IR Queue Depth
  //   id: atom_ir_queue_depth
  //   lambda: !lambda |-
  //     return (float) id(ir_queue).size();
  //   update_interval: 500ms
  //   accuracy_decimals: 0
  //   entity_category: diagnostic
  //   disabled_by_default: true
  //   force_update: false
  atom_ir_queue_depth = new template_::TemplateSensor();
  App.register_sensor(atom_ir_queue_depth);
  atom_ir_queue_depth->set_name("Atom Lite IR Queue Depth", 66423011);
  atom_ir_queue_depth->set_disabled_by_default(true);
  atom_ir_queue_depth->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  atom_ir_queue_depth->set_accuracy_decimals(0);
  atom_ir_queue_depth->set_update_interval(500);
  atom_ir_queue_depth->set_component_source(LOG_STR("template.sensor"));
  App.register_component(atom_ir_queue_depth);
  // sensor.debug:
  //   platform: debug
  //   free:
  //     name: Atom Lite Heap Free
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: sensor_sensor_id
  //     force_update: false
  //     unit_of_measurement: B
  //     icon: mdi:counter
  //     accuracy_decimals: 0
  //   block:
  //     name: Atom Lite Heap Max Block
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: sensor_sensor_id_2
  //     force_update: false
  //     unit_of_measurement: B
  //     icon: mdi:counter
  //     accuracy_decimals: 0
  //   loop_time:
  //     name: Atom Lite Loop Time
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: sensor_sensor_id_3
  //     force_update: false
  //     unit_of_measurement: ms
  //     icon: mdi:timer-outline
  //     accuracy_decimals: 0
  //   cpu_frequency:
  //     name: Atom Lite CPU Frequency
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: sensor_sensor_id_4
  //     force_update: false
  //     unit_of_measurement: Hz
  //     icon: mdi:speedometer
  //     accuracy_decimals: 0
  //   debug_id: debug_debugcomponent_id
  sensor_sensor_id = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id);
  sensor_sensor_id->set_name("Atom Lite Heap Free", 3038370123UL);
  sensor_sensor_id->set_disabled_by_default(true);
  sensor_sensor_id->set_icon("mdi:counter");
  sensor_sensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_id->set_unit_of_measurement("B");
  sensor_sensor_id->set_accuracy_decimals(0);
  debug_debugcomponent_id->set_free_sensor(sensor_sensor_id);
  sensor_sensor_id_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_2);
  sensor_sensor_id_2->set_name("Atom Lite Heap Max Block", 548437119);
  sensor_sensor_id_2->set_disabled_by_default(true);
  sensor_sensor_id_2->set_icon("mdi:counter");
  sensor_sensor_id_2->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_id_2->set_unit_of_measurement("B");
  sensor_sensor_id_2->set_accuracy_decimals(0);
  debug_debugcomponent_id->set_block_sensor(sensor_sensor_id_2);
  sensor_sensor_id_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_3);
  sensor_sensor_id_3->set_name("Atom Lite Loop Time", 1795978430);
  sensor_sensor_id_3->set_disabled_by_default(true);
  sensor_sensor_id_3->set_icon("mdi:timer-outline");
  sensor_sensor_id_3->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_id_3->set_unit_of_measurement("ms");
  sensor_sensor_id_3->set_accuracy_decimals(0);
  debug_debugcomponent_id->set_loop_time_sensor(sensor_sensor_id_3);
  sensor_sensor_id_4 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_4);
  sensor_sensor_id_4->set_name("Atom Lite CPU Frequency", 4180380141UL);
  sensor_sensor_id_4->set_disabled_by_default(true);
  sensor_sensor_id_4->set_icon("mdi:speedometer");
  sensor_sensor_id_4->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_id_4->set_unit_of_measurement("Hz");
  sensor_sensor_id_4->set_accuracy_decimals(0);
  debug_debugcomponent_id->set_cpu_frequency_sensor(sensor_sensor_id_4);
  // text_sensor.version:
  //   platform: version
  //   name: Atom Lite ESPHome Version
  //   hide_timestamp: true
  //   entity_category: diagnostic
  //   disabled_by_default: true
  //   icon: mdi:new-box
  //   id: version_versiontextsensor_id
  version_versiontextsensor_id = new version::VersionTextSensor();
  App.register_text_sensor(version_versiontextsensor_id);
  version_versiontextsensor_id->set_name("Atom Lite ESPHome Version", 2860997888UL);
  version_versiontextsensor_id->set_disabled_by_default(true);
  version_versiontextsensor_id->set_icon("mdi:new-box");
  version_versiontextsensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  version_versiontextsensor_id->set_component_source(LOG_STR("version.text_sensor"));
  App.register_component(version_versiontextsensor_id);
  version_versiontextsensor_id->set_hide_timestamp(true);
  // text_sensor.template:
  //   platform: template
  //   name: Atom Lite IR Last TX
  //   id: atom_ir_last_tx
  //   entity_category: diagnostic
  //   disabled_by_default: true
  //   update_interval: 60s
  atom_ir_last_tx = new template_::TemplateTextSensor();
  App.register_text_sensor(atom_ir_last_tx);
  atom_ir_last_tx->set_name("Atom Lite IR Last TX", 2959713983UL);
  atom_ir_last_tx->set_disabled_by_default(true);
  atom_ir_last_tx->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  atom_ir_last_tx->set_update_interval(60000);
  atom_ir_last_tx->set_component_source(LOG_STR("template.text_sensor"));
  App.register_component(atom_ir_last_tx);
  // text_sensor.template:
  //   platform: template
  //   name: Atom Lite IR Last Error
  //   id: atom_ir_last_error
  //   entity_category: diagnostic
  //   disabled_by_default: true
  //   update_interval: 60s
  atom_ir_last_error = new template_::TemplateTextSensor();
  App.register_text_sensor(atom_ir_last_error);
  atom_ir_last_error->set_name("Atom Lite IR Last Error", 167426975);
  atom_ir_last_error->set_disabled_by_default(true);
  atom_ir_last_error->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  atom_ir_last_error->set_update_interval(60000);
  atom_ir_last_error->set_component_source(LOG_STR("template.text_sensor"));
  App.register_component(atom_ir_last_error);
  // text_sensor.debug:
  //   platform: debug
  //   device:
  //     name: Atom Lite Device Info
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: text_sensor_textsensor_id
  //     icon: mdi:chip
  //   reset_reason:
  //     name: Atom Lite Reset Reason
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: text_sensor_textsensor_id_2
  //     icon: mdi:restart
  //   debug_id: debug_debugcomponent_id
  text_sensor_textsensor_id = new text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id);
  text_sensor_textsensor_id->set_name("Atom Lite Device Info", 40098377);
  text_sensor_textsensor_id->set_disabled_by_default(true);
  text_sensor_textsensor_id->set_icon("mdi:chip");
  text_sensor_textsensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  debug_debugcomponent_id->set_device_info_sensor(text_sensor_textsensor_id);
  text_sensor_textsensor_id_2 = new text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_2);
  text_sensor_textsensor_id_2->set_name("Atom Lite Reset Reason", 337490820);
  text_sensor_textsensor_id_2->set_disabled_by_default(true);
  text_sensor_textsensor_id_2->set_icon("mdi:restart");
  text_sensor_textsensor_id_2->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  debug_debugcomponent_id->set_reset_reason_sensor(text_sensor_textsensor_id_2);
  // text_sensor.wifi_info:
  //   platform: wifi_info
  //   ip_address:
  //     name: Atom Lite IP
  //     entity_category: diagnostic
  //     disabled_by_default: false
  //     id: wifi_info_ipaddresswifiinfo_id
  //   ssid:
  //     name: Atom Lite SSID
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: wifi_info_ssidwifiinfo_id
  //   bssid:
  //     name: Atom Lite BSSID
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: wifi_info_bssidwifiinfo_id
  //   mac_address:
  //     name: Atom Lite MAC
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: wifi_info_macaddresswifiinfo_id
  //   dns_address:
  //     name: Atom Lite DNS
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: wifi_info_dnsaddresswifiinfo_id
  //   power_save_mode:
  //     name: Atom Lite WiFi Power Save
  //     entity_category: diagnostic
  //     disabled_by_default: true
  //     id: wifi_info_powersavemodewifiinfo_id
  wifi_info_ssidwifiinfo_id = new wifi_info::SSIDWiFiInfo();
  App.register_text_sensor(wifi_info_ssidwifiinfo_id);
  wifi_info_ssidwifiinfo_id->set_name("Atom Lite SSID", 4233136657UL);
  wifi_info_ssidwifiinfo_id->set_disabled_by_default(true);
  wifi_info_ssidwifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_ssidwifiinfo_id->set_component_source(LOG_STR("wifi_info.text_sensor"));
  App.register_component(wifi_info_ssidwifiinfo_id);
  wifi_info_bssidwifiinfo_id = new wifi_info::BSSIDWiFiInfo();
  App.register_text_sensor(wifi_info_bssidwifiinfo_id);
  wifi_info_bssidwifiinfo_id->set_name("Atom Lite BSSID", 3913236243UL);
  wifi_info_bssidwifiinfo_id->set_disabled_by_default(true);
  wifi_info_bssidwifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_bssidwifiinfo_id->set_component_source(LOG_STR("wifi_info.text_sensor"));
  App.register_component(wifi_info_bssidwifiinfo_id);
  wifi_info_macaddresswifiinfo_id = new wifi_info::MacAddressWifiInfo();
  App.register_text_sensor(wifi_info_macaddresswifiinfo_id);
  wifi_info_macaddresswifiinfo_id->set_name("Atom Lite MAC", 2887216401UL);
  wifi_info_macaddresswifiinfo_id->set_disabled_by_default(true);
  wifi_info_macaddresswifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_macaddresswifiinfo_id->set_component_source(LOG_STR("wifi_info.text_sensor"));
  App.register_component(wifi_info_macaddresswifiinfo_id);
  wifi_info_dnsaddresswifiinfo_id = new wifi_info::DNSAddressWifiInfo();
  App.register_text_sensor(wifi_info_dnsaddresswifiinfo_id);
  wifi_info_dnsaddresswifiinfo_id->set_name("Atom Lite DNS", 3439450981UL);
  wifi_info_dnsaddresswifiinfo_id->set_disabled_by_default(true);
  wifi_info_dnsaddresswifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_dnsaddresswifiinfo_id->set_component_source(LOG_STR("wifi_info.text_sensor"));
  App.register_component(wifi_info_dnsaddresswifiinfo_id);
  wifi_info_powersavemodewifiinfo_id = new wifi_info::PowerSaveModeWiFiInfo();
  App.register_text_sensor(wifi_info_powersavemodewifiinfo_id);
  wifi_info_powersavemodewifiinfo_id->set_name("Atom Lite WiFi Power Save", 2403096087UL);
  wifi_info_powersavemodewifiinfo_id->set_disabled_by_default(true);
  wifi_info_powersavemodewifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_powersavemodewifiinfo_id->set_component_source(LOG_STR("wifi_info.text_sensor"));
  App.register_component(wifi_info_powersavemodewifiinfo_id);
  wifi_info_ipaddresswifiinfo_id = new wifi_info::IPAddressWiFiInfo();
  App.register_text_sensor(wifi_info_ipaddresswifiinfo_id);
  wifi_info_ipaddresswifiinfo_id->set_name("Atom Lite IP", 2998503019UL);
  wifi_info_ipaddresswifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_ipaddresswifiinfo_id->set_component_source(LOG_STR("wifi_info.text_sensor"));
  App.register_component(wifi_info_ipaddresswifiinfo_id);
  // md5:
  // sha256:
  //   {}
  // socket:
  //   implementation: bsd_sockets
  // esp32_ble:
  //   id: esp32_ble_esp32ble_id
  //   io_capability: none
  //   enable_on_boot: true
  //   advertising: false
  //   advertising_cycle_time: 10s
  //   disable_bt_logs: true
  //   connection_timeout: 20s
  //   max_notifications: 12
  //   max_connections: 3
  esp32_ble_esp32ble_id = new esp32_ble::ESP32BLE();
  esp32_ble_esp32ble_id->set_enable_on_boot(true);
  esp32_ble_esp32ble_id->set_io_capability(esp32_ble::IO_CAP_NONE);
  esp32_ble_esp32ble_id->set_advertising_cycle_time(10000);
  esp32_ble_esp32ble_id->set_component_source(LOG_STR("esp32_ble"));
  App.register_component(esp32_ble_esp32ble_id);
  esp32_ble_esp32ble_id->register_gap_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_gap_scan_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_gattc_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_esp32ble_id->register_ble_status_event_handler(esp32_ble_tracker_esp32bletracker_id);
  esp32_ble_tracker_esp32bletracker_id->set_parent(esp32_ble_esp32ble_id);
  esp32_ble_tracker_esp32bletracker_id->set_scan_duration(300);
  esp32_ble_tracker_esp32bletracker_id->set_scan_interval(512);
  esp32_ble_tracker_esp32bletracker_id->set_scan_window(48);
  esp32_ble_tracker_esp32bletracker_id->set_scan_active(true);
  esp32_ble_tracker_esp32bletracker_id->set_scan_continuous(true);
  // globals:
  //   id: ir_busy
  //   type: bool
  //   restore_value: false
  //   initial_value: 'false'
  ir_busy = new globals::GlobalsComponent<bool>(false);
  ir_busy->set_component_source(LOG_STR("globals"));
  App.register_component(ir_busy);
  // globals:
  //   id: ir_queue
  //   type: std::vector<std::string>
  //   restore_value: false
  ir_queue = new globals::GlobalsComponent<std::vector<std::string>>();
  ir_queue->set_component_source(LOG_STR("globals"));
  App.register_component(ir_queue);
  // globals:
  //   id: ir_task_proto
  //   type: uint8_t
  //   restore_value: false
  //   initial_value: '0'
  ir_task_proto = new globals::GlobalsComponent<uint8_t>(0);
  ir_task_proto->set_component_source(LOG_STR("globals"));
  App.register_component(ir_task_proto);
  // globals:
  //   id: ir_task_addr
  //   type: uint16_t
  //   restore_value: false
  //   initial_value: '0'
  ir_task_addr = new globals::GlobalsComponent<uint16_t>(0);
  ir_task_addr->set_component_source(LOG_STR("globals"));
  App.register_component(ir_task_addr);
  // globals:
  //   id: ir_task_cmd
  //   type: uint16_t
  //   restore_value: false
  //   initial_value: '0'
  ir_task_cmd = new globals::GlobalsComponent<uint16_t>(0);
  ir_task_cmd->set_component_source(LOG_STR("globals"));
  App.register_component(ir_task_cmd);
  // globals:
  //   id: ir_task_repeats
  //   type: uint8_t
  //   restore_value: false
  //   initial_value: '1'
  ir_task_repeats = new globals::GlobalsComponent<uint8_t>(1);
  ir_task_repeats->set_component_source(LOG_STR("globals"));
  App.register_component(ir_task_repeats);
  // globals:
  //   id: ir_task_pronto
  //   type: std::string
  //   restore_value: false
  //   initial_value: '""'
  ir_task_pronto = new globals::GlobalsComponent<std::string>("");
  ir_task_pronto->set_component_source(LOG_STR("globals"));
  App.register_component(ir_task_pronto);
  lambdacondition_id_2 = new StatelessLambdaCondition<uint32_t, int32_t, int32_t, int32_t>([](uint32_t call_id, int32_t address, int32_t command, int32_t send_times) -> bool {
      #line 93 "atom-lite.yml"
      constexpr size_t IR_QUEUE_MAX = 20;
      return ir_queue->value().size() < IR_QUEUE_MAX;
  });
  ifaction_id = new IfAction<uint32_t, int32_t, int32_t, int32_t>(lambdacondition_id_2);
  lambdaaction_id = new StatelessLambdaAction<uint32_t, int32_t, int32_t, int32_t>([](uint32_t call_id, int32_t address, int32_t command, int32_t send_times) -> void {
      #line 97 "atom-lite.yml"
      int rep = send_times;
      if (rep < 1) rep = 1;
      if (rep > 20) rep = 20;
      
      char task[64];
      snprintf(task, sizeof(task), "N|%d|%d|%d", address, command, rep);
      ir_queue->value().push_back(task);
      
      char msg[140];
      snprintf(msg, sizeof(msg), "QUEUED NEC addr=0x%04X cmd=0x%04X rep=%d q=%u",
               (uint16_t) address, (uint16_t) command, rep, (unsigned) ir_queue->value().size());
      atom_ir_last_tx->publish_state(msg);
      atom_ir_last_error->publish_state("");
      ESP_LOGI("ir", "%s", msg);
  });
  script_scriptexecuteaction_id = new script::ScriptExecuteAction<script::Script<>, uint32_t, int32_t, int32_t, int32_t>(ir_process_queue);
  script_scriptexecuteaction_id->set_args();
  api_apirespondaction_id = new api::APIRespondAction<uint32_t, int32_t, int32_t, int32_t>(api_apiserver_id);
  api_apirespondaction_id->set_success(true);
  api_apirespondaction_id->set_error_message("");
  ifaction_id->add_then({lambdaaction_id, script_scriptexecuteaction_id, api_apirespondaction_id});
  lambdaaction_id_2 = new StatelessLambdaAction<uint32_t, int32_t, int32_t, int32_t>([](uint32_t call_id, int32_t address, int32_t command, int32_t send_times) -> void {
      ESP_LOGW("main", "ir_send_nec: queue full (%u/20)", (unsigned) ir_queue->value().size());
  });
  lambdaaction_id_3 = new StatelessLambdaAction<uint32_t, int32_t, int32_t, int32_t>([](uint32_t call_id, int32_t address, int32_t command, int32_t send_times) -> void {
      #line 120 "atom-lite.yml"
      atom_ir_last_error->publish_state("IR queue full");
  });
  api_apirespondaction_id_2 = new api::APIRespondAction<uint32_t, int32_t, int32_t, int32_t>(api_apiserver_id);
  api_apirespondaction_id_2->set_success(false);
  api_apirespondaction_id_2->set_error_message("IR queue full");
  ifaction_id->add_else({lambdaaction_id_2, lambdaaction_id_3, api_apirespondaction_id_2});
  ifaction_id_2->add_then({ifaction_id});
  lambdaaction_id_4 = new StatelessLambdaAction<uint32_t, int32_t, int32_t, int32_t>([](uint32_t call_id, int32_t address, int32_t command, int32_t send_times) -> void {
      ESP_LOGE("main", "ir_send_nec: invalid args address=%d command=%d", address, command);
  });
  api_apirespondaction_id_3 = new api::APIRespondAction<uint32_t, int32_t, int32_t, int32_t>(api_apiserver_id);
  api_apirespondaction_id_3->set_success(false);
  api_apirespondaction_id_3->set_error_message([](uint32_t call_id, int32_t address, int32_t command, int32_t send_times) -> std::string {
      #line 132 "atom-lite.yml"
      char buf[96];
      snprintf(buf, sizeof(buf), "invalid args address=%d command=%d", address, command);
      return std::string(buf);
  });
  ifaction_id_2->add_else({lambdaaction_id_4, api_apirespondaction_id_3});
  automation_id->add_actions({ifaction_id_2});
  api_userservicetrigger_id__unregister = new api::APIUnregisterServiceCallAction<uint32_t, int32_t, int32_t, int32_t>(api_apiserver_id);
  automation_id->add_actions({api_userservicetrigger_id__unregister});
  api_userservicetrigger_id_2 = new api::UserServiceTrigger<api::enums::SUPPORTS_RESPONSE_STATUS, std::string, int32_t>("ir_send_pronto", {"data", "send_times"});
  automation_id_2 = new Automation<uint32_t, std::string, int32_t>(api_userservicetrigger_id_2);
  lambdacondition_id_3 = new StatelessLambdaCondition<uint32_t, std::string, int32_t>([](uint32_t call_id, std::string data, int32_t send_times) -> bool {
      #line 147 "atom-lite.yml"
      return (!data.empty() && data.size() <= 1024);
  });
  ifaction_id_4 = new IfAction<uint32_t, std::string, int32_t>(lambdacondition_id_3);
  lambdacondition_id_4 = new StatelessLambdaCondition<uint32_t, std::string, int32_t>([](uint32_t call_id, std::string data, int32_t send_times) -> bool {
      #line 152 "atom-lite.yml"
      constexpr size_t IR_QUEUE_MAX = 20;
      return ir_queue->value().size() < IR_QUEUE_MAX;
  });
  ifaction_id_3 = new IfAction<uint32_t, std::string, int32_t>(lambdacondition_id_4);
  lambdaaction_id_5 = new StatelessLambdaAction<uint32_t, std::string, int32_t>([](uint32_t call_id, std::string data, int32_t send_times) -> void {
      #line 156 "atom-lite.yml"
      int rep = send_times;
      if (rep < 1) rep = 1;
      if (rep > 10) rep = 10;
      
       
      std::string task = "P|" + std::to_string(rep) + "|" + data;
      ir_queue->value().push_back(task);
      
      char msg[140];
      snprintf(msg, sizeof(msg), "QUEUED PRONTO len=%u rep=%d q=%u",
               (unsigned) data.size(), rep, (unsigned) ir_queue->value().size());
      atom_ir_last_tx->publish_state(msg);
      atom_ir_last_error->publish_state("");
      ESP_LOGI("ir", "%s", msg);
  });
  script_scriptexecuteaction_id_2 = new script::ScriptExecuteAction<script::Script<>, uint32_t, std::string, int32_t>(ir_process_queue);
  script_scriptexecuteaction_id_2->set_args();
  api_apirespondaction_id_4 = new api::APIRespondAction<uint32_t, std::string, int32_t>(api_apiserver_id);
  api_apirespondaction_id_4->set_success(true);
  api_apirespondaction_id_4->set_error_message("");
  ifaction_id_3->add_then({lambdaaction_id_5, script_scriptexecuteaction_id_2, api_apirespondaction_id_4});
  lambdaaction_id_6 = new StatelessLambdaAction<uint32_t, std::string, int32_t>([](uint32_t call_id, std::string data, int32_t send_times) -> void {
      ESP_LOGW("main", "ir_send_pronto: queue full (%u/20)", (unsigned) ir_queue->value().size());
  });
  lambdaaction_id_7 = new StatelessLambdaAction<uint32_t, std::string, int32_t>([](uint32_t call_id, std::string data, int32_t send_times) -> void {
      #line 179 "atom-lite.yml"
      atom_ir_last_error->publish_state("IR queue full");
  });
  api_apirespondaction_id_5 = new api::APIRespondAction<uint32_t, std::string, int32_t>(api_apiserver_id);
  api_apirespondaction_id_5->set_success(false);
  api_apirespondaction_id_5->set_error_message("IR queue full");
  ifaction_id_3->add_else({lambdaaction_id_6, lambdaaction_id_7, api_apirespondaction_id_5});
  ifaction_id_4->add_then({ifaction_id_3});
  lambdaaction_id_8 = new StatelessLambdaAction<uint32_t, std::string, int32_t>([](uint32_t call_id, std::string data, int32_t send_times) -> void {
      ESP_LOGE("main", "ir_send_pronto: invalid args data_len=%u", (unsigned) data.size());
  });
  api_apirespondaction_id_6 = new api::APIRespondAction<uint32_t, std::string, int32_t>(api_apiserver_id);
  api_apirespondaction_id_6->set_success(false);
  api_apirespondaction_id_6->set_error_message([](uint32_t call_id, std::string data, int32_t send_times) -> std::string {
      #line 191 "atom-lite.yml"
      char buf[96];
      snprintf(buf, sizeof(buf), "invalid args data_len=%u", (unsigned) data.size());
      return std::string(buf);
  });
  ifaction_id_4->add_else({lambdaaction_id_8, api_apirespondaction_id_6});
  automation_id_2->add_actions({ifaction_id_4});
  api_userservicetrigger_id_2__unregister = new api::APIUnregisterServiceCallAction<uint32_t, std::string, int32_t>(api_apiserver_id);
  automation_id_2->add_actions({api_userservicetrigger_id_2__unregister});
  api_apiserver_id->initialize_user_services({api_userservicetrigger_id, api_userservicetrigger_id_2});
  api_apiserver_id->set_noise_psk({206, 176, 29, 94, 97, 244, 252, 213, 183, 57, 114, 169, 240, 221, 35, 126, 223, 48, 162, 247, 178, 0, 249, 41, 202, 46, 115, 8, 28, 201, 185, 169});
  lambdacondition_id_5 = new StatelessLambdaCondition<>([]() -> bool {
      #line 358 "atom-lite.yml"
      return !ir_queue->value().empty();
  });
  whileaction_id = new WhileAction<>(lambdacondition_id_5);
  lambdaaction_id_12 = new StatelessLambdaAction<>([]() -> void {
      #line 362 "atom-lite.yml"
      std::string task = ir_queue->value().front();
      ir_queue->value().erase(ir_queue->value().begin());
      
       
      ir_task_proto->value() = 0;
      ir_task_addr->value() = 0;
      ir_task_cmd->value() = 0;
      ir_task_repeats->value() = 1;
      ir_task_pronto->value().clear();
      
      if (task.size() < 3 || task[1] != '|') {
        char buf[96];
        snprintf(buf, sizeof(buf), "IR queue item malformed (len=%u)", (unsigned) task.size());
        atom_ir_last_error->publish_state(buf);
        ESP_LOGE("ir", "%s", buf);
        return;
      }
      
      auto parse_u32 = [](const std::string &s, uint32_t minv, uint32_t maxv, uint32_t &out) -> bool {
        if (s.empty()) return false;
        if (s[0] == '-') return false;
        char *end = nullptr;
        const unsigned long v = strtoul(s.c_str(), &end, 0);   
        if (end == nullptr || end == s.c_str() || *end != '\0') return false;
        if (v < minv || v > maxv) return false;
        out = (uint32_t) v;
        return true;
      };
      
      if (task[0] == 'N') {
        const size_t p1 = task.find('|', 2);
        const size_t p2 = (p1 == std::string::npos) ? std::string::npos : task.find('|', p1 + 1);
        if (p1 == std::string::npos || p2 == std::string::npos) {
          atom_ir_last_error->publish_state("IR NEC item malformed");
          ESP_LOGE("ir", "IR NEC item malformed");
          return;
        }
      
        const std::string s_addr = task.substr(2, p1 - 2);
        const std::string s_cmd  = task.substr(p1 + 1, p2 - (p1 + 1));
        const std::string s_rep  = task.substr(p2 + 1);
      
        uint32_t addr=0, cmd=0, rep=0;
        if (!parse_u32(s_addr, 0, 0xFFFF, addr) ||
            !parse_u32(s_cmd,  0, 0xFFFF, cmd)  ||
            !parse_u32(s_rep,  1, 20,     rep)) {
          char buf[160];
          snprintf(buf, sizeof(buf), "IR NEC item invalid (addr=%s cmd=%s rep=%s)",
                   s_addr.c_str(), s_cmd.c_str(), s_rep.c_str());
          atom_ir_last_error->publish_state(buf);
          ESP_LOGE("ir", "%s", buf);
          return;
        }
      
        ir_task_proto->value() = 1;
        ir_task_addr->value() = (uint16_t) addr;
        ir_task_cmd->value() = (uint16_t) cmd;
        ir_task_repeats->value() = (uint8_t) rep;
        atom_ir_last_error->publish_state("");
        return;
      }
      
      if (task[0] == 'P') {
        const size_t p1 = task.find('|', 2);
        if (p1 == std::string::npos) {
          atom_ir_last_error->publish_state("IR PRONTO item malformed");
          ESP_LOGE("ir", "IR PRONTO item malformed");
          return;
        }
      
        const std::string s_rep = task.substr(2, p1 - 2);
        const std::string raw   = task.substr(p1 + 1);
      
        uint32_t rep=0;
        if (!parse_u32(s_rep, 1, 10, rep)) {
          char buf[120];
          snprintf(buf, sizeof(buf), "IR PRONTO item invalid repeats=%s", s_rep.c_str());
          atom_ir_last_error->publish_state(buf);
          ESP_LOGE("ir", "%s", buf);
          return;
        }
      
         
        std::string cleaned;
        cleaned.reserve(raw.size());
        bool last_space = true;
        for (char c : raw) {
          if (c == '\r' || c == '\n' || c == '\t') c = ' ';
          if (c == ' ') {
            if (!last_space) cleaned.push_back(' ');
            last_space = true;
          } else {
            cleaned.push_back(c);
            last_space = false;
          }
        }
        while (!cleaned.empty() && cleaned.back() == ' ') cleaned.pop_back();
        size_t start = 0;
        while (start < cleaned.size() && cleaned[start] == ' ') start++;
        if (start > 0) cleaned.erase(0, start);
      
        if (cleaned.empty() || cleaned.size() > 1024) {
          char buf[120];
          snprintf(buf, sizeof(buf), "IR PRONTO data invalid len=%u", (unsigned) cleaned.size());
          atom_ir_last_error->publish_state(buf);
          ESP_LOGE("ir", "%s", buf);
          return;
        }
      
        ir_task_proto->value() = 2;
        ir_task_repeats->value() = (uint8_t) rep;
        ir_task_pronto->value() = cleaned;
        atom_ir_last_error->publish_state("");
        return;
      }
      
      {
        char buf[96];
        snprintf(buf, sizeof(buf), "IR queue item unknown proto='%c'", task[0]);
        atom_ir_last_error->publish_state(buf);
        ESP_LOGE("ir", "%s", buf);
      }
  });
  lambdacondition_id_6 = new StatelessLambdaCondition<>([]() -> bool {
      #line 488 "atom-lite.yml"
      return ir_task_proto->value() == 1;
  });
  ifaction_id_8 = new IfAction<>(lambdacondition_id_6);
  lambdaaction_id_13 = new StatelessLambdaAction<>([]() -> void {
      #line 491 "atom-lite.yml"
      ir_busy->value() = true;
      char buf[140];
      snprintf(buf, sizeof(buf), "TX NEC addr=0x%04X cmd=0x%04X rep=%u q=%u",
               ir_task_addr->value(), ir_task_cmd->value(), ir_task_repeats->value(),
               (unsigned) ir_queue->value().size());
      atom_ir_last_tx->publish_state(buf);
      ESP_LOGI("ir", "%s", buf);
  });
  remote_base_necaction_id = new remote_base::NECAction<>();
  remote_base_necaction_id->set_transmitter(atom_ir);
  remote_base_necaction_id->set_send_times([]() -> uint32_t {
      #line 503 "atom-lite.yml"
      return (uint32_t) ir_task_repeats->value();
  });
  remote_base_necaction_id->set_send_wait(10000);
  remote_base_necaction_id->set_address([]() -> uint16_t {
      #line 500 "atom-lite.yml"
      return ir_task_addr->value();
  });
  remote_base_necaction_id->set_command([]() -> uint16_t {
      #line 501 "atom-lite.yml"
      return ir_task_cmd->value();
  });
  remote_base_necaction_id->set_command_repeats(1);
  lambdacondition_id_7 = new StatelessLambdaCondition<>([]() -> bool {
      #line 507 "atom-lite.yml"
      return !ir_busy->value();
  });
  waituntilaction_id = new WaitUntilAction<>(lambdacondition_id_7);
  waituntilaction_id->set_timeout_value(10000);
  waituntilaction_id->set_component_source(LOG_STR("script"));
  App.register_component(waituntilaction_id);
  lambdacondition_id_8 = new StatelessLambdaCondition<>([]() -> bool {
      #line 511 "atom-lite.yml"
      return ir_busy->value();
  });
  ifaction_id_5 = new IfAction<>(lambdacondition_id_8);
  lambdaaction_id_14 = new StatelessLambdaAction<>([]() -> void {
      #line 514 "atom-lite.yml"
      atom_ir_last_error->publish_state("IR TIMEOUT (NEC) - queue canceled; use Clear Busy only for recovery");
      ESP_LOGE("ir", "IR TIMEOUT (NEC) - canceling queue");
      ir_queue->value().clear();
  });
  script_scriptstopaction_id = new script::ScriptStopAction<script::SingleScript<>>(ir_process_queue);
  ifaction_id_5->add_then({lambdaaction_id_14, script_scriptstopaction_id});
  delayaction_id = new DelayAction<>();
  delayaction_id->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id);
  delayaction_id->set_delay([]() -> uint32_t {
      #line 520 "atom-lite.yml"
      float f = atom_ir_gap_ms->state;
      if (f != f) f = 100.0f;   
      int ms = (f <= 0.0f) ? 0 : (int) (f + 0.5f);
      return (uint32_t) ms;
  });
  ifaction_id_5->add_else({delayaction_id});
  ifaction_id_8->add_then({lambdaaction_id_13, remote_base_necaction_id, waituntilaction_id, ifaction_id_5});
  lambdacondition_id_9 = new StatelessLambdaCondition<>([]() -> bool {
      #line 528 "atom-lite.yml"
      return ir_task_proto->value() == 2;
  });
  ifaction_id_7 = new IfAction<>(lambdacondition_id_9);
  lambdaaction_id_15 = new StatelessLambdaAction<>([]() -> void {
      #line 531 "atom-lite.yml"
      ir_busy->value() = true;
      char buf[140];
      snprintf(buf, sizeof(buf), "TX PRONTO len=%u rep=%u q=%u",
               (unsigned) ir_task_pronto->value().size(), ir_task_repeats->value(),
               (unsigned) ir_queue->value().size());
      atom_ir_last_tx->publish_state(buf);
      ESP_LOGI("ir", "%s", buf);
  });
  remote_base_prontoaction_id = new remote_base::ProntoAction<>();
  remote_base_prontoaction_id->set_transmitter(atom_ir);
  remote_base_prontoaction_id->set_send_times([]() -> uint32_t {
      #line 542 "atom-lite.yml"
      return (uint32_t) ir_task_repeats->value();
  });
  remote_base_prontoaction_id->set_send_wait(10000);
  remote_base_prontoaction_id->set_data([]() -> std::string {
      #line 540 "atom-lite.yml"
      return ir_task_pronto->value();
  });
  lambdacondition_id_10 = new StatelessLambdaCondition<>([]() -> bool {
      #line 546 "atom-lite.yml"
      return !ir_busy->value();
  });
  waituntilaction_id_2 = new WaitUntilAction<>(lambdacondition_id_10);
  waituntilaction_id_2->set_timeout_value(30000);
  waituntilaction_id_2->set_component_source(LOG_STR("script"));
  App.register_component(waituntilaction_id_2);
  lambdacondition_id_11 = new StatelessLambdaCondition<>([]() -> bool {
      #line 550 "atom-lite.yml"
      return ir_busy->value();
  });
  ifaction_id_6 = new IfAction<>(lambdacondition_id_11);
  lambdaaction_id_16 = new StatelessLambdaAction<>([]() -> void {
      #line 553 "atom-lite.yml"
      atom_ir_last_error->publish_state("IR TIMEOUT (PRONTO) - queue canceled; use Clear Busy only for recovery");
      ESP_LOGE("ir", "IR TIMEOUT (PRONTO) - canceling queue");
      ir_queue->value().clear();
  });
  script_scriptstopaction_id_2 = new script::ScriptStopAction<script::SingleScript<>>(ir_process_queue);
  ifaction_id_6->add_then({lambdaaction_id_16, script_scriptstopaction_id_2});
  delayaction_id_2 = new DelayAction<>();
  delayaction_id_2->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_2);
  delayaction_id_2->set_delay([]() -> uint32_t {
      #line 559 "atom-lite.yml"
      float f = atom_ir_gap_ms->state;
      if (f != f) f = 100.0f;   
      int ms = (f <= 0.0f) ? 0 : (int) (f + 0.5f);
      return (uint32_t) ms;
  });
  ifaction_id_6->add_else({delayaction_id_2});
  ifaction_id_7->add_then({lambdaaction_id_15, remote_base_prontoaction_id, waituntilaction_id_2, ifaction_id_6});
  delayaction_id_3 = new DelayAction<>();
  delayaction_id_3->set_component_source(LOG_STR("script"));
  App.register_component(delayaction_id_3);
  delayaction_id_3->set_delay(1);
  ifaction_id_7->add_else({delayaction_id_3});
  ifaction_id_8->add_else({ifaction_id_7});
  whileaction_id->add_then({lambdaaction_id_12, ifaction_id_8});
  automation_id_6->add_actions({whileaction_id});
  lambdaaction_id_17 = new StatelessLambdaAction<>([]() -> void {
      #line 578 "atom-lite.yml"
      constexpr size_t IR_QUEUE_MAX = 20;
      
      auto trim = [](std::string &v) {
        while (!v.empty() && (v.front() == ' ' || v.front() == '\t' || v.front() == '\r' || v.front() == '\n')) v.erase(v.begin());
        while (!v.empty() && (v.back()  == ' ' || v.back()  == '\t' || v.back()  == '\r' || v.back()  == '\n')) v.pop_back();
      };
      auto parse_u32 = [](const std::string &s, uint32_t minv, uint32_t maxv, uint32_t &out) -> bool {
        if (s.empty()) return false;
        if (s[0] == '-') return false;
        char *end = nullptr;
        const unsigned long v = strtoul(s.c_str(), &end, 0);
        if (end == nullptr || end == s.c_str() || *end != '\0') return false;
        if (v < minv || v > maxv) return false;
        out = (uint32_t) v;
        return true;
      };
      
      std::string s_addr = atom_ir_nec_address->state;
      std::string s_cmd  = atom_ir_nec_command->state;
      trim(s_addr);
      trim(s_cmd);
      
      uint32_t addr=0, cmd=0;
      if (!parse_u32(s_addr, 0, 0xFFFF, addr) || !parse_u32(s_cmd, 0, 0xFFFF, cmd)) {
        char buf[160];
        snprintf(buf, sizeof(buf), "NEC input invalid (addr='%s' cmd='%s')", s_addr.c_str(), s_cmd.c_str());
        atom_ir_last_error->publish_state(buf);
        ESP_LOGE("ir", "%s", buf);
        return;
      }
      
      float f_rep = atom_ir_nec_repeats->state;
      if (f_rep != f_rep) f_rep = 1.0f;   
      int rep = (int) (f_rep + 0.5f);
      if (rep < 1) rep = 1;
      if (rep > 20) rep = 20;
      
      if (ir_queue->value().size() >= IR_QUEUE_MAX) {
        atom_ir_last_error->publish_state("IR queue full");
        ESP_LOGW("ir", "NEC not queued: queue full (%u/%u)", (unsigned) ir_queue->value().size(), (unsigned) IR_QUEUE_MAX);
        return;
      }
      
      char task[64];
      snprintf(task, sizeof(task), "N|%u|%u|%d", (unsigned) addr, (unsigned) cmd, rep);
      ir_queue->value().push_back(task);
      
      char msg[140];
      snprintf(msg, sizeof(msg), "QUEUED NEC addr=0x%04X cmd=0x%04X rep=%d q=%u",
               (uint16_t) addr, (uint16_t) cmd, rep, (unsigned) ir_queue->value().size());
      atom_ir_last_tx->publish_state(msg);
      atom_ir_last_error->publish_state("");
      ESP_LOGI("ir", "%s", msg);
  });
  script_scriptexecuteaction_id_3 = new script::ScriptExecuteAction<script::Script<>>(ir_process_queue);
  script_scriptexecuteaction_id_3->set_args();
  automation_id_7->add_actions({lambdaaction_id_17, script_scriptexecuteaction_id_3});
  lambdaaction_id_18 = new StatelessLambdaAction<>([]() -> void {
      #line 637 "atom-lite.yml"
      constexpr size_t IR_QUEUE_MAX = 20;
      
      std::string raw = atom_ir_pronto_data->state;
      
       
      std::string cleaned;
      cleaned.reserve(raw.size());
      bool last_space = true;
      for (char c : raw) {
        if (c == '\r' || c == '\n' || c == '\t') c = ' ';
        if (c == ' ') {
          if (!last_space) cleaned.push_back(' ');
          last_space = true;
        } else {
          cleaned.push_back(c);
          last_space = false;
        }
      }
      while (!cleaned.empty() && cleaned.back() == ' ') cleaned.pop_back();
      size_t start = 0;
      while (start < cleaned.size() && cleaned[start] == ' ') start++;
      if (start > 0) cleaned.erase(0, start);
      
      if (cleaned.empty()) {
        atom_ir_last_error->publish_state("Pronto data empty");
        ESP_LOGE("ir", "Pronto not queued: data empty");
        return;
      }
      if (cleaned.size() > 1024) {
        char buf[120];
        snprintf(buf, sizeof(buf), "Pronto too long (len=%u)", (unsigned) cleaned.size());
        atom_ir_last_error->publish_state(buf);
        ESP_LOGE("ir", "%s", buf);
        return;
      }
      
      float f_rep = atom_ir_pronto_repeats->state;
      if (f_rep != f_rep) f_rep = 1.0f;   
      int rep = (int) (f_rep + 0.5f);
      if (rep < 1) rep = 1;
      if (rep > 10) rep = 10;
      
      if (ir_queue->value().size() >= IR_QUEUE_MAX) {
        atom_ir_last_error->publish_state("IR queue full");
        ESP_LOGW("ir", "Pronto not queued: queue full (%u/%u)", (unsigned) ir_queue->value().size(), (unsigned) IR_QUEUE_MAX);
        return;
      }
      
      std::string task = "P|" + std::to_string(rep) + "|" + cleaned;
      ir_queue->value().push_back(task);
      
      char msg[140];
      snprintf(msg, sizeof(msg), "QUEUED PRONTO len=%u rep=%d q=%u",
               (unsigned) cleaned.size(), rep, (unsigned) ir_queue->value().size());
      atom_ir_last_tx->publish_state(msg);
      atom_ir_last_error->publish_state("");
      ESP_LOGI("ir", "%s", msg);
  });
  script_scriptexecuteaction_id_4 = new script::ScriptExecuteAction<script::Script<>>(ir_process_queue);
  script_scriptexecuteaction_id_4->set_args();
  automation_id_8->add_actions({lambdaaction_id_18, script_scriptexecuteaction_id_4});
  lambdaaction_id_19 = new StatelessLambdaAction<>([]() -> void {
      #line 702 "atom-lite.yml"
      ir_queue->value().clear();
      atom_ir_last_error->publish_state("IR queue canceled by user");
  });
  lambdaaction_id_20 = new StatelessLambdaAction<>([]() -> void {
      ESP_LOGW("main", "IR queue cleared by user");
  });
  automation_id_9->add_actions({lambdaaction_id_19, lambdaaction_id_20});
  lambdaaction_id_21 = new StatelessLambdaAction<>([]() -> void {
      #line 715 "atom-lite.yml"
      ir_queue->value().clear();
      ir_busy->value() = false;   
      atom_ir_last_error->publish_state("IR busy FORCE-cleared (recovery)");
  });
  script_scriptstopaction_id_3 = new script::ScriptStopAction<script::SingleScript<>>(ir_process_queue);
  lambdaaction_id_22 = new StatelessLambdaAction<>([]() -> void {
      ESP_LOGW("main", "IR busy flag FORCE-cleared (queue cleared). Use only for recovery.");
  });
  automation_id_10->add_actions({lambdaaction_id_21, script_scriptstopaction_id_3, lambdaaction_id_22});
  lambdaaction_id_23 = new StatelessLambdaAction<>([]() -> void {
      #line 743 "atom-lite.yml"
      ir_busy->value() = false;
  });
  automation_id_11->add_actions({lambdaaction_id_23});
  atom_ir_busy_state->set_template([]() -> esphome::optional<bool> {
      #line 793 "atom-lite.yml"
      return ir_busy->value() || !ir_queue->value().empty();
  });
  atom_ir_busy->set_template([]() -> esphome::optional<float> {
      #line 841 "atom-lite.yml"
      return (ir_busy->value() || !ir_queue->value().empty()) ? 1.0f : 0.0f;
  });
  atom_ir_queue_depth->set_template([]() -> esphome::optional<float> {
      #line 852 "atom-lite.yml"
      return (float) ir_queue->value().size();
  });
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
