// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace time;
using namespace light;
using namespace switch_;
using namespace sensor;
static logger::Logger *logger_logger_id;
static web_server_base::WebServerBase *web_server_base_webserverbase_id;
static captive_portal::CaptivePortal *captive_portal_captiveportal_id;
static wifi::WiFiComponent *wifi_wificomponent_id;
static mdns::MDNSComponent *mdns_mdnscomponent_id;
static esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
static web_server::WebServerOTAComponent *web_server_webserverotacomponent_id;
static preferences::IntervalSyncer *preferences_intervalsyncer_id;
static safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
static api::APIServer *api_apiserver_id;
using namespace api;
static StartupTrigger *startuptrigger_id;
static Automation<> *automation_id;
static bm8563::ReadAction<> *bm8563_readaction_id;
using namespace i2c;
static i2c::IDFI2CBus *bsp_i2c;
using namespace i2c;
static i2c::IDFI2CBus *cam_i2c;
static psram::PsramComponent *psram_psramcomponent_id;
static esp32_camera::ESP32Camera *esp32_camera_esp32camera_id;
static bm8563::BM8563 *rtc_time;
using namespace output;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
static ledc::LEDCOutput *blue_led;
static gpio::GPIOBinaryOutput *batt_hold_pin;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
static monochromatic::MonochromaticLightOutput *monochromatic_monochromaticlightoutput_id;
static light::LightState *light_lightstate_id;
static output::OutputSwitch *battery_hold;
static adc::ADCSensor *battery_voltage;
static sensor::MultiplyFilter *sensor_multiplyfilter_id;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
static template_::TemplateSensor *battery_percent;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: timer-camera-f
  //   friendly_name: Timer Cam F
  //   on_boot:
  //     - priority: 600.0
  //       then:
  //         - bm8563.read_time:
  //             id: rtc_time
  //           type_id: bm8563_readaction_id
  //       automation_id: automation_id
  //       trigger_id: startuptrigger_id
  //   min_version: 2026.1.5
  //   build_path: build/timer-camera-f
  //   platformio_options: {}
  //   environment_variables: {}
  //   includes: []
  //   includes_c: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  App.pre_setup("timer-camera-f", "Timer Cam F", false);
  // time:
  // light:
  // switch:
  // sensor:
  // logger:
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   runtime_tag_levels: false
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->create_pthread_key();
  logger_logger_id->init_log_buffer(768);
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_DEBUG);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source(LOG_STR("logger"));
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source(LOG_STR("web_server_base"));
  App.register_component(web_server_base_webserverbase_id);
  web_server_base::global_web_server_base = web_server_base_webserverbase_id;
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  //   compression: gzip
  captive_portal_captiveportal_id = new captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  captive_portal_captiveportal_id->set_component_source(LOG_STR("captive_portal"));
  App.register_component(captive_portal_captiveportal_id);
  // wifi:
  //   power_save_mode: NONE
  //   ap:
  //     ssid: TimerCamera-F Fallback
  //     password: HZruGeKzRAfh
  //     id: wifi_wifiap_id
  //     ap_timeout: 90s
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
  //       id: wifi_wifiap_id_2
  //       priority: 0
  //   use_address: timer-camera-f.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("timer-camera-f.local");
  wifi_wificomponent_id->init_sta(1);
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("SSID");
  wifi_wifiap_id_2.set_password("PASSWORD");
  wifi_wifiap_id_2.set_priority(0);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("TimerCamera-F Fallback");
  wifi_wifiap_id.set_password("HZruGeKzRAfh");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(90000);
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
  //   password: b05ede71a13e4841f6805539b579fdfe
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("b05ede71a13e4841f6805539b579fdfe");
  esphome_esphomeotacomponent_id->set_component_source(LOG_STR("esphome.ota"));
  App.register_component(esphome_esphomeotacomponent_id);
  // ota.web_server:
  //   platform: web_server
  //   id: web_server_webserverotacomponent_id
  web_server_webserverotacomponent_id = new web_server::WebServerOTAComponent();
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
  web_server_webserverotacomponent_id->set_component_source(LOG_STR("web_server.ota"));
  App.register_component(web_server_webserverotacomponent_id);
  // api:
  //   encryption:
  //     key: 7JFTWl/7SOz11JinNgajCK88Lu05aTew2D60iRoxpAQ=
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
  api_apiserver_id->set_noise_psk({236, 145, 83, 90, 95, 251, 72, 236, 245, 212, 152, 167, 54, 6, 163, 8, 175, 60, 46, 237, 57, 105, 55, 176, 216, 62, 180, 137, 26, 49, 164, 4});
  startuptrigger_id = new StartupTrigger(600.0f);
  startuptrigger_id->set_component_source(LOG_STR("esphome.coroutine"));
  App.register_component(startuptrigger_id);
  automation_id = new Automation<>(startuptrigger_id);
  bm8563_readaction_id = new bm8563::ReadAction<>();
  // i2c:
  //   id: bsp_i2c
  //   sda: 12
  //   scl: 14
  //   sda_pullup_enabled: true
  //   scl_pullup_enabled: true
  //   frequency: 50000.0
  //   scan: true
  bsp_i2c = new i2c::IDFI2CBus();
  bsp_i2c->set_component_source(LOG_STR("i2c"));
  App.register_component(bsp_i2c);
  bsp_i2c->set_sda_pin(12);
  bsp_i2c->set_sda_pullup_enabled(true);
  bsp_i2c->set_scl_pin(14);
  bsp_i2c->set_scl_pullup_enabled(true);
  bsp_i2c->set_frequency(50000);
  bsp_i2c->set_scan(true);
  // i2c:
  //   id: cam_i2c
  //   sda: 25
  //   scl: 23
  //   sda_pullup_enabled: true
  //   scl_pullup_enabled: true
  //   frequency: 50000.0
  //   scan: true
  cam_i2c = new i2c::IDFI2CBus();
  cam_i2c->set_component_source(LOG_STR("i2c"));
  App.register_component(cam_i2c);
  cam_i2c->set_sda_pin(25);
  cam_i2c->set_sda_pullup_enabled(true);
  cam_i2c->set_scl_pin(23);
  cam_i2c->set_scl_pullup_enabled(true);
  cam_i2c->set_frequency(50000);
  cam_i2c->set_scan(true);
  // substitutions:
  //   device_id: timer-camera-f
  //   device_label: Timer Cam F
  //   cam_label: Cam
  //   led_label: LED
  // esp32:
  //   board: esp32dev
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
  // psram:
  //   mode: quad
  //   speed: 80MHZ
  //   id: psram_psramcomponent_id
  //   enable_ecc: false
  //   disabled: false
  //   ignore_not_found: true
  psram_psramcomponent_id = new psram::PsramComponent();
  psram_psramcomponent_id->set_component_source(LOG_STR("psram"));
  App.register_component(psram_psramcomponent_id);
  // esp32_camera:
  //   name: Cam
  //   external_clock:
  //     pin: 27
  //     frequency: 20000000.0
  //   i2c_id: cam_i2c
  //   data_pins:
  //     - 32
  //     - 35
  //     - 34
  //     - 5
  //     - 39
  //     - 18
  //     - 36
  //     - 19
  //   vsync_pin: 22
  //   href_pin: 26
  //   pixel_clock_pin: 21
  //   reset_pin: 15
  //   vertical_flip: false
  //   horizontal_mirror: false
  //   resolution: 640X480
  //   jpeg_quality: 10
  //   disabled_by_default: false
  //   id: esp32_camera_esp32camera_id
  //   contrast: 0
  //   brightness: 0
  //   saturation: 0
  //   special_effect: NONE
  //   agc_mode: AUTO
  //   aec2: false
  //   ae_level: 0
  //   aec_value: 300
  //   aec_mode: AUTO
  //   agc_value: 0
  //   agc_gain_ceiling: 2X
  //   wb_mode: AUTO
  //   test_pattern: false
  //   max_framerate: 10.0
  //   idle_framerate: 0.1
  //   frame_buffer_count: 1
  //   frame_buffer_location: PSRAM
  esp32_camera_esp32camera_id = new esp32_camera::ESP32Camera();
  esp32_camera_esp32camera_id->set_name("Cam", 983016354);
  esp32_camera_esp32camera_id->set_component_source(LOG_STR("esp32_camera"));
  App.register_component(esp32_camera_esp32camera_id);
  esp32_camera_esp32camera_id->set_data_pins({32, 35, 34, 5, 39, 18, 36, 19});
  esp32_camera_esp32camera_id->set_vsync_pin(22);
  esp32_camera_esp32camera_id->set_href_pin(26);
  esp32_camera_esp32camera_id->set_pixel_clock_pin(21);
  esp32_camera_esp32camera_id->set_reset_pin(15);
  esp32_camera_esp32camera_id->set_jpeg_quality(10);
  esp32_camera_esp32camera_id->set_vertical_flip(false);
  esp32_camera_esp32camera_id->set_horizontal_mirror(false);
  esp32_camera_esp32camera_id->set_contrast(0);
  esp32_camera_esp32camera_id->set_brightness(0);
  esp32_camera_esp32camera_id->set_saturation(0);
  esp32_camera_esp32camera_id->set_special_effect(esp32_camera::ESP32_SPECIAL_EFFECT_NONE);
  esp32_camera_esp32camera_id->set_aec_mode(esp32_camera::ESP32_GC_MODE_AUTO);
  esp32_camera_esp32camera_id->set_aec2(false);
  esp32_camera_esp32camera_id->set_ae_level(0);
  esp32_camera_esp32camera_id->set_aec_value(300);
  esp32_camera_esp32camera_id->set_agc_mode(esp32_camera::ESP32_GC_MODE_AUTO);
  esp32_camera_esp32camera_id->set_agc_value(0);
  esp32_camera_esp32camera_id->set_agc_gain_ceiling(esp32_camera::ESP32_GAINCEILING_2X);
  esp32_camera_esp32camera_id->set_wb_mode(esp32_camera::ESP32_WB_MODE_AUTO);
  esp32_camera_esp32camera_id->set_test_pattern(false);
  esp32_camera_esp32camera_id->set_frame_buffer_location(CAMERA_FB_IN_PSRAM);
  esp32_camera_esp32camera_id->set_external_clock(27, 20000000.0f);
  esp32_camera_esp32camera_id->set_i2c_id(cam_i2c);
  esp32_camera_esp32camera_id->set_max_update_interval(100.0f);
  esp32_camera_esp32camera_id->set_idle_update_interval(10000.0f);
  esp32_camera_esp32camera_id->set_frame_buffer_count(1);
  esp32_camera_esp32camera_id->set_frame_buffer_location(CAMERA_FB_IN_PSRAM);
  esp32_camera_esp32camera_id->set_frame_size(esp32_camera::ESP32_CAMERA_SIZE_640X480);
  // time.bm8563:
  //   platform: bm8563
  //   i2c_id: bsp_i2c
  //   id: rtc_time
  //   timezone: EST5EDT,M3.2.0,M11.1.0
  //   update_interval: 15min
  //   address: 0x51
  rtc_time = new bm8563::BM8563();
  rtc_time->set_update_interval(900000);
  rtc_time->set_component_source(LOG_STR("bm8563.time"));
  App.register_component(rtc_time);
  rtc_time->set_i2c_bus(bsp_i2c);
  rtc_time->set_i2c_address(0x51);
  rtc_time->set_timezone("EST5EDT,M3.2.0,M11.1.0");
  // output:
  // output.ledc:
  //   platform: ledc
  //   id: blue_led
  //   pin:
  //     number: 2
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
  //   zero_means_zero: false
  //   frequency: 1000.0
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_2);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  blue_led = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id);
  blue_led->set_component_source(LOG_STR("ledc.output"));
  App.register_component(blue_led);
  blue_led->set_zero_means_zero(false);
  blue_led->set_frequency(1000.0f);
  // output.gpio:
  //   platform: gpio
  //   id: batt_hold_pin
  //   pin:
  //     number: 33
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  batt_hold_pin = new gpio::GPIOBinaryOutput();
  batt_hold_pin->set_component_source(LOG_STR("gpio.output"));
  App.register_component(batt_hold_pin);
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_33);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  batt_hold_pin->set_pin(esp32_esp32internalgpiopin_id_2);
  // light.monochromatic:
  //   platform: monochromatic
  //   output: blue_led
  //   name: LED
  //   restore_mode: RESTORE_DEFAULT_ON
  //   disabled_by_default: false
  //   id: light_lightstate_id
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: monochromatic_monochromaticlightoutput_id
  monochromatic_monochromaticlightoutput_id = new monochromatic::MonochromaticLightOutput();
  light_lightstate_id = new light::LightState(monochromatic_monochromaticlightoutput_id);
  App.register_light(light_lightstate_id);
  light_lightstate_id->set_component_source(LOG_STR("light"));
  App.register_component(light_lightstate_id);
  light_lightstate_id->set_name("LED", 646037088);
  light_lightstate_id->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_ON);
  light_lightstate_id->set_default_transition_length(1000);
  light_lightstate_id->set_flash_transition_length(0);
  light_lightstate_id->set_gamma_correct(2.8f);
  light_lightstate_id->add_effects({});
  monochromatic_monochromaticlightoutput_id->set_output(blue_led);
  // switch.output:
  //   platform: output
  //   id: battery_hold
  //   internal: true
  //   output: batt_hold_pin
  //   restore_mode: ALWAYS_ON
  //   disabled_by_default: false
  //   name: battery_hold
  battery_hold = new output::OutputSwitch();
  App.register_switch(battery_hold);
  battery_hold->set_name("battery_hold", 3975175956UL);
  battery_hold->set_internal(true);
  battery_hold->set_restore_mode(switch_::SWITCH_ALWAYS_ON);
  battery_hold->set_component_source(LOG_STR("output.switch"));
  App.register_component(battery_hold);
  battery_hold->set_output(batt_hold_pin);
  // sensor.adc:
  //   platform: adc
  //   pin:
  //     number: 38
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_3
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   attenuation: 12db
  //   id: battery_voltage
  //   internal: true
  //   update_interval: 300s
  //   filters:
  //     - multiply: 1.51
  //       type_id: sensor_multiplyfilter_id
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: V
  //   accuracy_decimals: 2
  //   device_class: voltage
  //   state_class: measurement
  //   raw: false
  //   samples: 1
  //   sampling_mode: avg
  //   name: battery_voltage
  battery_voltage = new adc::ADCSensor();
  battery_voltage->set_update_interval(300000);
  battery_voltage->set_component_source(LOG_STR("adc.sensor"));
  App.register_component(battery_voltage);
  App.register_sensor(battery_voltage);
  battery_voltage->set_name("battery_voltage", 1226776003);
  battery_voltage->set_internal(true);
  battery_voltage->set_device_class("voltage");
  battery_voltage->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  battery_voltage->set_unit_of_measurement("V");
  battery_voltage->set_accuracy_decimals(2);
  sensor_multiplyfilter_id = new sensor::MultiplyFilter(1.51f);
  battery_voltage->set_filters({sensor_multiplyfilter_id});
  esp32_esp32internalgpiopin_id_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_38);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_INPUT);
  battery_voltage->set_pin(esp32_esp32internalgpiopin_id_3);
  battery_voltage->set_output_raw(false);
  battery_voltage->set_sample_count(1);
  battery_voltage->set_sampling_mode(adc::SamplingMode::AVG);
  battery_voltage->set_attenuation(adc::ADC_ATTEN_DB_12_COMPAT);
  battery_voltage->set_channel(::adc_unit_t::ADC_UNIT_1, ::adc_channel_t::ADC_CHANNEL_2);
  // sensor.template:
  //   platform: template
  //   id: battery_percent
  //   name: Battery %
  //   unit_of_measurement: '%'
  //   device_class: battery
  //   accuracy_decimals: 0
  //   update_interval: 300s
  //   lambda: !lambda |-
  //     float v = id(battery_voltage).state;
  //     if (v <= 3.35) return 0.0;
  //     if (v >= 4.15) return 100.0;
  //     return (v - 3.35) / 0.80 * 100.0;
  //   disabled_by_default: false
  //   force_update: false
  battery_percent = new template_::TemplateSensor();
  App.register_sensor(battery_percent);
  battery_percent->set_name("Battery %", 1658920974);
  battery_percent->set_device_class("battery");
  battery_percent->set_unit_of_measurement("%");
  battery_percent->set_accuracy_decimals(0);
  battery_percent->set_update_interval(300000);
  battery_percent->set_component_source(LOG_STR("template.sensor"));
  App.register_component(battery_percent);
  battery_percent->set_template([]() -> esphome::optional<float> {
      #line 124 "timer-camera-f.yaml"
      float v = battery_voltage->state;
      if (v <= 3.35) return 0.0;
      if (v >= 4.15) return 100.0;
      return (v - 3.35) / 0.80 * 100.0;
  });
  // md5:
  // sha256:
  //   {}
  // socket:
  //   implementation: bsd_sockets
  // web_server_idf:
  //   {}
  bm8563_readaction_id->set_parent(rtc_time);
  automation_id->add_actions({bm8563_readaction_id});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
