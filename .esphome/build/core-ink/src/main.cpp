// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace time;
using namespace display;
using namespace binary_sensor;
using namespace sensor;
using namespace text_sensor;
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
static web_server::WebServer *web_server_webserver_id;
const uint8_t ESPHOME_WEBSERVER_INDEX_HTML[174] PROGMEM = {60, 33, 68, 79, 67, 84, 89, 80, 69, 32, 104, 116, 109, 108, 62, 60, 104, 116, 109, 108, 62, 60, 104, 101, 97, 100, 62, 60, 109, 101, 116, 97, 32, 99, 104, 97, 114, 115, 101, 116, 61, 85, 84, 70, 45, 56, 62, 60, 108, 105, 110, 107, 32, 114, 101, 108, 61, 105, 99, 111, 110, 32, 104, 114, 101, 102, 61, 100, 97, 116, 97, 58, 62, 60, 47, 104, 101, 97, 100, 62, 60, 98, 111, 100, 121, 62, 60, 101, 115, 112, 45, 97, 112, 112, 62, 60, 47, 101, 115, 112, 45, 97, 112, 112, 62, 60, 115, 99, 114, 105, 112, 116, 32, 115, 114, 99, 61, 34, 104, 116, 116, 112, 115, 58, 47, 47, 111, 105, 46, 101, 115, 112, 104, 111, 109, 101, 46, 105, 111, 47, 118, 50, 47, 119, 119, 119, 46, 106, 115, 34, 62, 60, 47, 115, 99, 114, 105, 112, 116, 62, 60, 47, 98, 111, 100, 121, 62, 60, 47, 104, 116, 109, 108, 62};
const size_t ESPHOME_WEBSERVER_INDEX_HTML_SIZE = 174;
using namespace i2c;
static i2c::IDFI2CBus *bus_int;
using namespace i2c;
static i2c::IDFI2CBus *port_a;
using namespace spi;
static spi::SPIComponent *spi_spicomponent_id;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
using namespace json;
static sntp::SNTPComponent *sntp_time;
static time::SyncTrigger *time_synctrigger_id;
static Automation<> *automation_id;
static waveshare_epaper::GDEW0154M09 *my_display;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_4;
static font::Font *helvetica_20;
static interval::IntervalTrigger *interval_intervaltrigger_id;
static Automation<> *automation_id_2;
static UpdateComponentAction<> *updatecomponentaction_id_2;
static gpio::GPIOBinarySensor *gpio_gpiobinarysensor_id;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_7;
static gpio::GPIOBinarySensor *gpio_gpiobinarysensor_id_2;
static binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id;
static binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id;
static binary_sensor::ClickTrigger *binary_sensor_clicktrigger_id;
static Automation<> *automation_id_3;
static UpdateComponentAction<> *updatecomponentaction_id_3;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_8;
static gpio::GPIOBinarySensor *gpio_gpiobinarysensor_id_3;
static binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_2;
static binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_2;
static binary_sensor::ClickTrigger *binary_sensor_clicktrigger_id_2;
static Automation<> *automation_id_4;
static UpdateComponentAction<> *updatecomponentaction_id_4;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_9;
static gpio::GPIOBinarySensor *gpio_gpiobinarysensor_id_4;
static binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter_id_3;
static binary_sensor::DelayedOffFilter *binary_sensor_delayedofffilter_id_3;
static binary_sensor::ClickTrigger *binary_sensor_clicktrigger_id_3;
static Automation<> *automation_id_5;
static UpdateComponentAction<> *updatecomponentaction_id_5;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_10;
static scd4x::SCD4XComponent *scd4x_scd4xcomponent_id;
static sensor::Sensor *sensor_sensor_id;
static sensor::Sensor *sensor_sensor_id_2;
static sensor::Sensor *sensor_sensor_id_3;
static wifi_signal::WiFiSignalSensor *wifi_signal_wifisignalsensor_id;
static wifi_info::SSIDWiFiInfo *wifi_info_ssidwifiinfo_id;
static wifi_info::IPAddressWiFiInfo *coreink_ip;
static UpdateComponentAction<> *updatecomponentaction_id;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_6;
static esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_5;
#undef yield
#define yield() esphome::yield()
#undef millis
#define millis() esphome::millis()
#undef micros
#define micros() esphome::micros()
#undef delay
#define delay(x) esphome::delay(x)
#undef delayMicroseconds
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: core-ink
  //   friendly_name: Core Ink
  //   name_add_mac_suffix: true
  //   platformio_options:
  //     upload_speed: '1500000'
  //     board_build.flash_mode: dio
  //   min_version: 2026.1.5
  //   build_path: build/core-ink
  //   environment_variables: {}
  //   includes: []
  //   includes_c: []
  //   libraries: []
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  App.pre_setup("core-ink", "Core Ink", true);
  // time:
  // display:
  // binary_sensor:
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
  //   use_address: core-ink.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("core-ink.local");
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
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
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
  //   reboot_timeout: 0s
  //   id: api_apiserver_id
  //   port: 6053
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
  api_apiserver_id->set_reboot_timeout(0);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_listen_backlog(4);
  api_apiserver_id->set_max_connections(8);
  // web_server:
  //   port: 80
  //   id: web_server_webserver_id
  //   version: 2
  //   enable_private_network_access: true
  //   web_server_base_id: web_server_base_webserverbase_id
  //   include_internal: false
  //   log: true
  //   compression: gzip
  //   css_url: ''
  //   js_url: https:oi.esphome.io/v2/www.js
  web_server_webserver_id = new web_server::WebServer(web_server_base_webserverbase_id);
  web_server_webserver_id->set_component_source(LOG_STR("web_server"));
  App.register_component(web_server_webserver_id);
  web_server_base_webserverbase_id->set_port(80);
  web_server_webserver_id->set_expose_log(true);
  web_server_webserver_id->set_include_internal(false);
  // i2c:
  //   id: bus_int
  //   sda: 21
  //   scl: 22
  //   sda_pullup_enabled: true
  //   scl_pullup_enabled: true
  //   frequency: 50000.0
  //   scan: true
  bus_int = new i2c::IDFI2CBus();
  bus_int->set_component_source(LOG_STR("i2c"));
  App.register_component(bus_int);
  bus_int->set_sda_pin(21);
  bus_int->set_sda_pullup_enabled(true);
  bus_int->set_scl_pin(22);
  bus_int->set_scl_pullup_enabled(true);
  bus_int->set_frequency(50000);
  bus_int->set_scan(true);
  // i2c:
  //   id: port_a
  //   sda: 32
  //   scl: 33
  //   sda_pullup_enabled: true
  //   scl_pullup_enabled: true
  //   frequency: 50000.0
  //   scan: true
  port_a = new i2c::IDFI2CBus();
  port_a->set_component_source(LOG_STR("i2c"));
  App.register_component(port_a);
  port_a->set_sda_pin(32);
  port_a->set_sda_pullup_enabled(true);
  port_a->set_scl_pin(33);
  port_a->set_scl_pullup_enabled(true);
  port_a->set_frequency(50000);
  port_a->set_scan(true);
  // spi:
  //   - clk_pin:
  //       number: 18
  //       mode:
  //         output: true
  //         input: false
  //         open_drain: false
  //         pullup: false
  //         pulldown: false
  //       id: esp32_esp32internalgpiopin_id
  //       inverted: false
  //       ignore_pin_validation_error: false
  //       ignore_strapping_warning: false
  //       drive_strength: 20.0
  //     mosi_pin:
  //       number: 23
  //       mode:
  //         output: true
  //         input: false
  //         open_drain: false
  //         pullup: false
  //         pulldown: false
  //       id: esp32_esp32internalgpiopin_id_2
  //       inverted: false
  //       ignore_pin_validation_error: false
  //       ignore_strapping_warning: false
  //       drive_strength: 20.0
  //     id: spi_spicomponent_id
  //     interface: any
  //     type: single
  //     interface_index: 0
  spi_spicomponent_id = new spi::SPIComponent();
  spi_spicomponent_id->set_component_source(LOG_STR("spi"));
  App.register_component(spi_spicomponent_id);
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_18);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  spi_spicomponent_id->set_clk(esp32_esp32internalgpiopin_id);
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_23);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  spi_spicomponent_id->set_mosi(esp32_esp32internalgpiopin_id_2);
  spi_spicomponent_id->set_interface(SPI2_HOST);
  spi_spicomponent_id->set_interface_name("SPI2_HOST");
  // json:
  //   {}
  // substitutions:
  //   devicename: core-ink
  //   friendly_name: Core Ink
  // esp32:
  //   board: m5stack-coreink
  //   framework:
  //     type: arduino
  //     version: 3.3.5
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
  //     source: pioarduino/framework-arduinoespressif32@https:github.com/espressif/arduino-esp32/releases/download/3.3.5/esp32-3.3.5.zip
  //   flash_size: 4MB
  //   variant: ESP32
  //   cpu_frequency: 160MHZ
  // external_components:
  //   - source:
  //       url: https:github.com/witasekl/gdew0154m09
  //       ref: master
  //       type: git
  //     components:
  //       - gdew0154m09
  //     refresh: 1d
  // time.sntp:
  //   platform: sntp
  //   id: sntp_time
  //   timezone: EST5EDT,M3.2.0,M11.1.0
  //   on_time_sync:
  //     - then:
  //         - component.update:
  //             id: my_display
  //           type_id: updatecomponentaction_id
  //       automation_id: automation_id
  //       trigger_id: time_synctrigger_id
  //   update_interval: 15min
  //   servers:
  //     - 0.pool.ntp.org
  //     - 1.pool.ntp.org
  //     - 2.pool.ntp.org
  sntp_time = new sntp::SNTPComponent({"0.pool.ntp.org", "1.pool.ntp.org", "2.pool.ntp.org"});
  sntp_time->set_update_interval(900000);
  sntp_time->set_component_source(LOG_STR("sntp.time"));
  App.register_component(sntp_time);
  sntp_time->set_timezone("EST5EDT,M3.2.0,M11.1.0");
  time_synctrigger_id = new time::SyncTrigger(sntp_time);
  time_synctrigger_id->set_component_source(LOG_STR("time"));
  App.register_component(time_synctrigger_id);
  automation_id = new Automation<>(time_synctrigger_id);
  // display.waveshare_epaper:
  //   platform: waveshare_epaper
  //   id: my_display
  //   cs_pin:
  //     number: 9
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
  //   dc_pin:
  //     number: 15
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_4
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   busy_pin:
  //     number: 4
  //     inverted: true
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_5
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   reset_pin:
  //     number: 0
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_6
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   model: 1.54in-m5coreink-m09
  //   update_interval: 8s
  //   lambda: !lambda |-
  //     it.print(5, 5, id(helvetica_20), "ESPHome");
  //   auto_clear_enabled: unspecified
  //   spi_id: spi_spicomponent_id
  my_display = new waveshare_epaper::GDEW0154M09();
  my_display->set_update_interval(8000);
  my_display->set_component_source(LOG_STR("display"));
  App.register_component(my_display);
  my_display->set_auto_clear(true);
  my_display->set_spi_parent(spi_spicomponent_id);
  my_display->set_write_only(true);
  esp32_esp32internalgpiopin_id_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_9);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  my_display->set_cs_pin(esp32_esp32internalgpiopin_id_3);
  esp32_esp32internalgpiopin_id_4 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_4->set_pin(::GPIO_NUM_15);
  esp32_esp32internalgpiopin_id_4->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_4->set_flags(gpio::Flags::FLAG_OUTPUT);
  my_display->set_dc_pin(esp32_esp32internalgpiopin_id_4);
  // font:
  //   file:
  //     family: Roboto
  //     weight: 400
  //     italic: false
  //     refresh: 1d
  //     type: gfonts
  //   id: helvetica_20
  //   size: 20
  //   glyphs:
  //     - ' '
  //     - '!'
  //     - '"'
  //     - '#'
  //     - $
  //     - '%'
  //     - '&'
  //     - ''''
  //     - (
  //     - )
  //     - '*'
  //     - +
  //     - ','
  //     - '-'
  //     - .
  //     - /
  //     - '0'
  //     - '1'
  //     - '2'
  //     - '3'
  //     - '4'
  //     - '5'
  //     - '6'
  //     - '7'
  //     - '8'
  //     - '9'
  //     - ':'
  //     - ;
  //     - <
  //     - '='
  //     - '>'
  //     - '?'
  //     - '@'
  //     - A
  //     - B
  //     - C
  //     - D
  //     - E
  //     - F
  //     - G
  //     - H
  //     - I
  //     - J
  //     - K
  //     - L
  //     - M
  //     - N
  //     - O
  //     - P
  //     - Q
  //     - R
  //     - S
  //     - T
  //     - U
  //     - V
  //     - W
  //     - X
  //     - Y
  //     - Z
  //     - '['
  //     - 
  //     - ']'
  //     - ^
  //     - _
  //     - '`'
  //     - a
  //     - b
  //     - c
  //     - d
  //     - e
  //     - f
  //     - g
  //     - h
  //     - i
  //     - j
  //     - k
  //     - l
  //     - m
  //     - n
  //     - o
  //     - p
  //     - q
  //     - r
  //     - s
  //     - t
  //     - u
  //     - v
  //     - w
  //     - x
  //     - y
  //     - z
  //     - '{'
  //     - '|'
  //     - '}'
  //     - '~'
  //     -  
  //     - ¢
  //     - £
  //     - ¥
  //     - ©
  //     - ®
  //     - °
  //     - ·
  //     - ×
  //     - ÷
  //     - –
  //     - —
  //     - ‘
  //     - ’
  //     - “
  //     - ”
  //     - •
  //     - …
  //     - €
  //     - ™
  //     - −
  //   glyphsets: []
  //   ignore_missing_glyphs: false
  //   bpp: 1
  //   extras: []
  //   raw_data_id: uint8_t_id
  //   raw_glyph_id: font_glyph_id
  static const uint8_t uint8_t_id[] PROGMEM = {0x00, 0xFE, 0xAA, 0xA0, 0xF0, 0xDD, 0xDD, 0x90, 0x0C, 0xC1, 0x98, 0x22, 0x04, 0x47, 0xFE, 0x33, 0x06, 0x60, 0x88, 0x11, 0x1F, 0xF8, 0xCC, 0x19, 0x82, 0x20, 0x44, 0x00, 0x0C, 0x06, 0x0F, 0x8F, 0xE6, 0x1A, 0x0D, 0x86, 0xC0, 0x3C, 0x07, 0x80, 0xE0, 0x3C, 0x1E, 0x0D, 0xFC, 0x7C, 0x08, 0x04, 0x00, 0x78, 0x06, 0x40, 0x23, 0x11, 0x19, 0x08, 0xD8, 0x64, 0x81, 0xE8, 0x00, 0xDE, 0x05, 0x90, 0x48, 0xC6, 0x46, 0x22, 0x31, 0x19, 0x00, 0x78, 0x1E, 0x06, 0xE1, 0x8C, 0x31, 0x86, 0x30, 0x7C, 0x06, 0x03, 0xE3, 0xE6, 0x58, 0xFB, 0x0F, 0x60, 0xC7, 0xFC, 0x7C, 0xC0, 0xF8, 0x08, 0xC4, 0x66, 0x31, 0x88, 0xC6, 0x31, 0x8C, 0x21, 0x8C, 0x61, 0x84, 0x30, 0x80, 0x41, 0x02, 0x0C, 0x10, 0x61, 0x82, 0x08, 0x30, 0xC3, 0x08, 0x21, 0x86, 0x10, 0xC2, 0x10, 0x40, 0x08, 0x08, 0x49, 0xFF, 0x1C, 0x3C, 0x26, 0x22, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0xFF, 0xFF, 0xF0, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x6D, 0xA4, 0xF8, 0xEC, 0x02, 0x02, 0x06, 0x04, 0x0C, 0x08, 0x08, 0x18, 0x10, 0x30, 0x30, 0x20, 0x60, 0x40, 0xC0, 0x3E, 0x3B, 0x98, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xC1, 0xE0, 0xF0, 0x6C, 0x37, 0xF1, 0xF0, 0x1B, 0xF6, 0x31, 0x8C, 0x63, 0x18, 0xC6, 0x31, 0x8C, 0x3E, 0x1D, 0xCC, 0x1B, 0x06, 0x01, 0x80, 0x40, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x3F, 0xF0, 0x3E, 0x3B, 0xB0, 0x78, 0x30, 0x18, 0x18, 0x3C, 0x3C, 0x03, 0x00, 0xF0, 0x78, 0x37, 0xF1, 0xF0, 0x03, 0x01, 0xC0, 0xF0, 0x2C, 0x1B, 0x0C, 0xC2, 0x31, 0x8C, 0xC3, 0x30, 0xCF, 0xFC, 0x0C, 0x03, 0x00, 0xC0, 0x3F, 0x9F, 0xD8, 0x0C, 0x06, 0x03, 0xF1, 0xFE, 0x43, 0x01, 0x80, 0x50, 0x2C, 0x37, 0xF8, 0xF0, 0x0E, 0x0F, 0x0C, 0x0C, 0x04, 0x02, 0xF3, 0xFD, 0xC3, 0xC1, 0xE0, 0xD0, 0x6C, 0x33, 0xF0, 0xF0, 0xFF, 0x80, 0xC0, 0x60, 0x20, 0x30, 0x10, 0x18, 0x08, 0x0C, 0x06, 0x06, 0x03, 0x03, 0x01, 0x80, 0x3E, 0x3B, 0x98, 0x78, 0x36, 0x1B, 0xB8, 0xF8, 0xC6, 0xC1, 0xE0, 0xF0, 0x78, 0x37, 0xF1, 0xF0, 0x3E, 0x3F, 0xB0, 0xD8, 0x3C, 0x1E, 0x0F, 0x06, 0xFF, 0x3D, 0x80, 0xC0, 0xC0, 0x63, 0xE1, 0xC0, 0xD8, 0x00, 0x00, 0x1B, 0x00, 0x6C, 0x00, 0x00, 0x0D, 0xB6, 0x80, 0x01, 0x07, 0x3C, 0xF0, 0xC0, 0xF0, 0x3C, 0x07, 0x01, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFE, 0x80, 0x78, 0x0F, 0x01, 0xE0, 0x18, 0x78, 0xF1, 0xE0, 0x80, 0x00, 0x3C, 0x7E, 0xC3, 0xC3, 0x03, 0x06, 0x0C, 0x18, 0x18, 0x10, 0x00, 0x00, 0x10, 0x10, 0x03, 0xE0, 0x0E, 0x38, 0x18, 0x04, 0x20, 0x06, 0x61, 0xE2, 0x43, 0x23, 0x46, 0x21, 0xC4, 0x21, 0xC4, 0x21, 0xCC, 0x21, 0xCC, 0x63, 0xCC, 0x62, 0xC6, 0xE6, 0x47, 0xBC, 0x60, 0x00, 0x30, 0x00, 0x1C, 0x20, 0x07, 0xE0, 0x03, 0x00, 0x38, 0x01, 0x40, 0x1B, 0x00, 0xD8, 0x04, 0x40, 0x63, 0x03, 0x18, 0x3F, 0xE1, 0xFF, 0x08, 0x08, 0xC0, 0x66, 0x03, 0x60, 0x0C, 0xFE, 0x7F, 0xB0, 0x78, 0x3C, 0x1F, 0xFB, 0xFD, 0x83, 0xC1, 0xE0, 0xF0, 0x78, 0x3F, 0xF7, 0xF0, 0x1F, 0x07, 0xF9, 0x83, 0x30, 0x3C, 0x07, 0x80, 0x30, 0x06, 0x00, 0xC0, 0x18, 0x0D, 0x81, 0xB0, 0x63, 0xFC, 0x3E, 0x00, 0xFC, 0x3F, 0xCC, 0x1B, 0x06, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x1B, 0x06, 0xFF, 0x3F, 0x00, 0xFF, 0xFF, 0xF0, 0x18, 0x0C, 0x06, 0x03, 0xFD, 0xFE, 0xC0, 0x60, 0x30, 0x18, 0x0F, 0xFF, 0xFC, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x1F, 0x87, 0xF9, 0x81, 0xB0, 0x3C, 0x01, 0x80, 0x30, 0xFE, 0x1F, 0xC0, 0x78, 0x0D, 0x81, 0xB8, 0x33, 0xFE, 0x1F, 0x00, 0xC0, 0x78, 0x0F, 0x01, 0xE0, 0x3C, 0x07, 0x80, 0xFF, 0xFF, 0xFF, 0xC0, 0x78, 0x0F, 0x01, 0xE0, 0x3C, 0x07, 0x80, 0xC0, 0xFF, 0xFF, 0xFF, 0xF0, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xE0, 0x58, 0x6F, 0xF1, 0xE0, 0xC1, 0xD8, 0x73, 0x0C, 0x63, 0x0C, 0xC1, 0xB0, 0x3E, 0x07, 0xE0, 0xCC, 0x18, 0xC3, 0x0C, 0x61, 0xCC, 0x19, 0x81, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xC0, 0x1F, 0x80, 0x7E, 0x03, 0xEC, 0x0F, 0xB0, 0x2E, 0x41, 0xB9, 0x86, 0xE6, 0x33, 0xCC, 0xCF, 0x32, 0x3C, 0x58, 0xF1, 0xC3, 0xC7, 0x0F, 0x0C, 0x30, 0xC0, 0x7C, 0x0F, 0x81, 0xF8, 0x3F, 0x87, 0xB0, 0xF3, 0x1E, 0x73, 0xC6, 0x78, 0x6F, 0x0F, 0xE0, 0xFC, 0x0F, 0x81, 0xC0, 0x1F, 0x03, 0xFC, 0x60, 0xE6, 0x06, 0xC0, 0x6C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x06, 0x60, 0x66, 0x0E, 0x3F, 0xC1, 0xF0, 0xFE, 0x3F, 0xEC, 0x1B, 0x03, 0xC0, 0xF0, 0x3C, 0x1F, 0xFE, 0xFF, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x00, 0x1F, 0x03, 0xFC, 0x60, 0xE6, 0x06, 0xC0, 0x6C, 0x02, 0xC0, 0x3C, 0x03, 0xC0, 0x2C, 0x06, 0x60, 0x66, 0x0E, 0x3F, 0xC1, 0xFC, 0x00, 0xE0, 0x02, 0xFE, 0x3F, 0xEC, 0x1B, 0x06, 0xC1, 0xB0, 0x6F, 0xF3, 0xF8, 0xC6, 0x30, 0xCC, 0x33, 0x06, 0xC1, 0xB0, 0x30, 0x1F, 0x1F, 0xEE, 0x0F, 0x03, 0xC0, 0x18, 0x03, 0xC0, 0x3E, 0x01, 0xC0, 0x3C, 0x0F, 0x03, 0x7F, 0x8F, 0xC0, 0xFF, 0xFF, 0xFC, 0x18, 0x03, 0x00, 0x60, 0x0C, 0x01, 0x80, 0x30, 0x06, 0x00, 0xC0, 0x18, 0x03, 0x00, 0x60, 0x0C, 0x00, 0xC0, 0x78, 0x0F, 0x01, 0xE0, 0x3C, 0x07, 0x80, 0xF0, 0x1E, 0x03, 0xC0, 0x78, 0x0F, 0x01, 0xB0, 0x67, 0xF8, 0x3E, 0x00, 0xE0, 0x36, 0x03, 0x60, 0x33, 0x06, 0x30, 0x63, 0x0C, 0x18, 0xC1, 0x8C, 0x19, 0x80, 0xD8, 0x0D, 0x80, 0x70, 0x07, 0x00, 0x60, 0xC1, 0x83, 0xC1, 0x83, 0xC3, 0x83, 0xC3, 0xC2, 0x63, 0xC6, 0x62, 0x46, 0x66, 0x66, 0x66, 0x64, 0x24, 0x2C, 0x3C, 0x2C, 0x3C, 0x3C, 0x38, 0x38, 0x18, 0x18, 0x18, 0x18, 0xC0, 0xEC, 0x19, 0x86, 0x19, 0xC1, 0xB0, 0x3C, 0x03, 0x80, 0x70, 0x1E, 0x07, 0x60, 0xC6, 0x30, 0xC6, 0x0D, 0x81, 0xC0, 0xE0, 0x76, 0x06, 0x30, 0xC3, 0x0C, 0x19, 0x81, 0x98, 0x0F, 0x00, 0xF0, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0xFF, 0xFF, 0xF0, 0x18, 0x0C, 0x03, 0x01, 0x80, 0xC0, 0x70, 0x18, 0x0C, 0x06, 0x01, 0x80, 0xFF, 0xFF, 0xF0, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xF0, 0x40, 0x60, 0x60, 0x30, 0x30, 0x10, 0x18, 0x18, 0x08, 0x0C, 0x04, 0x06, 0x06, 0x02, 0x03, 0xF3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xF0, 0x30, 0x60, 0xE3, 0x44, 0xD9, 0xB1, 0x00, 0xFF, 0x80, 0xC6, 0x20, 0x3E, 0x3B, 0xB0, 0xC0, 0x23, 0xF3, 0x0B, 0x05, 0x82, 0xC3, 0x3F, 0x8F, 0x60, 0xC0, 0x60, 0x30, 0x18, 0x0D, 0xE7, 0xFB, 0x87, 0x83, 0xC1, 0xE0, 0xF0, 0x78, 0x3E, 0x1F, 0xFB, 0x78, 0x3E, 0x3B, 0xB0, 0x78, 0x3C, 0x06, 0x03, 0x01, 0x83, 0xC1, 0x3F, 0x8F, 0x80, 0x01, 0x80, 0xC0, 0x60, 0x33, 0xDB, 0xFF, 0x87, 0x83, 0xC1, 0xE0, 0xF0, 0x78, 0x36, 0x1B, 0xFC, 0xF6, 0x1E, 0x3B, 0x98, 0x58, 0x3C, 0x1F, 0xFF, 0x01, 0x80, 0xE1, 0x3F, 0x8F, 0x80, 0x1C, 0xF6, 0x18, 0xF9, 0x86, 0x18, 0x61, 0x86, 0x18, 0x61, 0x86, 0x00, 0x3D, 0xBF, 0xF8, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0x83, 0x61, 0xBF, 0xCF, 0x60, 0x34, 0x1B, 0xB8, 0xF8, 0xC0, 0x60, 0x30, 0x18, 0x0D, 0xE7, 0xFB, 0x87, 0x83, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x06, 0xC8, 0x04, 0x92, 0x49, 0x24, 0x90, 0x33, 0x00, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0xE0, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x36, 0x33, 0x31, 0xB8, 0xF8, 0x7C, 0x3B, 0x19, 0xCC, 0x66, 0x1B, 0x06, 0xFF, 0xFE, 0xDE, 0x3D, 0xFF, 0xFF, 0x06, 0x1E, 0x0C, 0x3C, 0x18, 0x78, 0x30, 0xF0, 0x61, 0xE0, 0xC3, 0xC1, 0x87, 0x83, 0x0F, 0x06, 0x18, 0xDE, 0x7F, 0xB8, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xC1, 0xE0, 0xF0, 0x60, 0x1E, 0x1D, 0xC6, 0x1B, 0x06, 0xC0, 0xB0, 0x3C, 0x0B, 0x06, 0x61, 0x9F, 0xC1, 0xE0, 0xDE, 0x7F, 0xB8, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xC1, 0xFF, 0xB7, 0x98, 0x0C, 0x06, 0x03, 0x00, 0x3D, 0xBB, 0xF8, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xE1, 0xBF, 0xCF, 0x60, 0x30, 0x18, 0x0C, 0x06, 0xDF, 0xF9, 0x8C, 0x63, 0x18, 0xC6, 0x30, 0x3C, 0x77, 0xC3, 0xC0, 0x70, 0x3E, 0x07, 0x03, 0xC3, 0x7F, 0x3E, 0x30, 0xCF, 0xCC, 0x30, 0xC3, 0x0C, 0x30, 0xC3, 0x0F, 0x1C, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0x83, 0x43, 0xBF, 0xCF, 0x60, 0x41, 0xB0, 0xD8, 0x44, 0x63, 0x31, 0x90, 0x58, 0x3C, 0x1C, 0x06, 0x03, 0x00, 0x41, 0x04, 0xC7, 0x19, 0x8E, 0x33, 0x14, 0x62, 0x6C, 0x86, 0xDB, 0x0D, 0x16, 0x0A, 0x28, 0x1C, 0x70, 0x30, 0x60, 0x60, 0xC0, 0x61, 0xB1, 0x8C, 0xC3, 0xC1, 0xE0, 0x60, 0x78, 0x3C, 0x33, 0x30, 0xD8, 0x60, 0xC1, 0xB0, 0xD8, 0x4C, 0x63, 0x31, 0x90, 0x58, 0x3C, 0x1C, 0x06, 0x03, 0x01, 0x01, 0x83, 0x81, 0x80, 0xFF, 0x03, 0x06, 0x0C, 0x0C, 0x18, 0x30, 0x60, 0x60, 0xC0, 0xFF, 0x08, 0x63, 0x0C, 0x30, 0xC3, 0x08, 0x63, 0x8C, 0x18, 0x20, 0xC3, 0x0C, 0x30, 0xC1, 0x82, 0xFF, 0xFF, 0x80, 0xC1, 0x83, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0x60, 0xC6, 0x30, 0xC3, 0x0C, 0x30, 0xC6, 0x30, 0x38, 0x2F, 0x87, 0x1F, 0xE1, 0xE0, 0x00, 0x0C, 0x06, 0x07, 0x8E, 0xE6, 0x1E, 0x0F, 0x01, 0x80, 0xC0, 0x60, 0xD8, 0x6F, 0xE3, 0xE0, 0x60, 0x30, 0x1F, 0x0F, 0xE3, 0x0D, 0x83, 0x60, 0x18, 0x0F, 0xC3, 0xF0, 0x20, 0x08, 0x02, 0x01, 0x80, 0xFF, 0xFF, 0xF0, 0xE0, 0xD8, 0x36, 0x18, 0xC6, 0x13, 0x06, 0x80, 0xE1, 0xFE, 0x0C, 0x03, 0x07, 0xF8, 0x30, 0x0C, 0x03, 0x00, 0x0F, 0x80, 0x61, 0x86, 0x01, 0x11, 0xE6, 0xCC, 0xCA, 0x63, 0x39, 0x80, 0x66, 0x01, 0x98, 0xCF, 0x33, 0x24, 0x79, 0x98, 0x04, 0x18, 0x60, 0x3E, 0x00, 0x0F, 0x80, 0xE1, 0x86, 0x01, 0x13, 0xE6, 0xC8, 0xCA, 0x23, 0x38, 0x8C, 0x63, 0xE1, 0x88, 0xCF, 0x23, 0x24, 0x8D, 0x98, 0x04, 0x18, 0x60, 0x3E, 0x00, 0x76, 0x63, 0x97, 0x00, 0x6C, 0x41, 0x71, 0x9D, 0x87, 0x81, 0x81, 0xE1, 0x99, 0x86, 0x41, 0x00, 0x0C, 0x06, 0x00, 0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x0C, 0x06, 0x00, 0xFF, 0x80, 0xFF, 0xF8, 0x4B, 0x6C, 0x6D, 0xB4, 0x49, 0x2D, 0xB6, 0xD8, 0x4A, 0x77, 0xB9, 0x00, 0x7F, 0xF7, 0x66, 0x6C, 0xCC, 0x0F, 0x8F, 0xCC, 0x06, 0x03, 0x07, 0xF0, 0xC1, 0xFC, 0x30, 0x18, 0x0C, 0x06, 0x01, 0xF8, 0x7C, 0xF4, 0xD3, 0x34, 0xB5, 0x2D, 0x49, 0x40, 0xFF};
  static const font::Glyph font_glyph_id[] = {{32, (uint8_t_id + 0), 5, 0, 18, 1, 1}, {33, (uint8_t_id + 1), 5, 2, 5, 2, 14}, {34, (uint8_t_id + 5), 6, 1, 4, 4, 5}, {35, (uint8_t_id + 8), 12, 1, 5, 11, 14}, {36, (uint8_t_id + 28), 11, 1, 3, 9, 18}, {37, (uint8_t_id + 49), 15, 1, 5, 13, 14}, {38, (uint8_t_id + 72), 12, 1, 5, 11, 14}, {39, (uint8_t_id + 92), 4, 1, 4, 1, 5}, {40, (uint8_t_id + 93), 7, 1, 3, 5, 21}, {41, (uint8_t_id + 107), 7, 0, 3, 6, 21}, {42, (uint8_t_id + 123), 9, 0, 5, 8, 8}, {43, (uint8_t_id + 131), 11, 1, 7, 10, 11}, {44, (uint8_t_id + 145), 4, 0, 17, 3, 5}, {45, (uint8_t_id + 147), 6, 0, 13, 5, 1}, {46, (uint8_t_id + 148), 5, 1, 17, 3, 2}, {47, (uint8_t_id + 149), 8, 0, 5, 8, 15}, {48, (uint8_t_id + 164), 11, 1, 5, 9, 14}, {49, (uint8_t_id + 180), 11, 2, 5, 5, 14}, {50, (uint8_t_id + 189), 11, 1, 5, 10, 14}, {51, (uint8_t_id + 207), 11, 1, 5, 9, 14}, {52, (uint8_t_id + 223), 11, 1, 5, 10, 14}, {53, (uint8_t_id + 241), 11, 1, 5, 9, 14}, {54, (uint8_t_id + 257), 11, 1, 5, 9, 14}, {55, (uint8_t_id + 273), 11, 1, 5, 9, 14}, {56, (uint8_t_id + 289), 11, 1, 5, 9, 14}, {57, (uint8_t_id + 305), 11, 1, 5, 9, 14}, {58, (uint8_t_id + 321), 5, 1, 8, 3, 11}, {59, (uint8_t_id + 326), 4, 0, 8, 3, 14}, {60, (uint8_t_id + 332), 10, 1, 8, 8, 9}, {61, (uint8_t_id + 341), 11, 1, 9, 9, 7}, {62, (uint8_t_id + 349), 10, 1, 8, 9, 9}, {63, (uint8_t_id + 360), 9, 1, 5, 8, 14}, {64, (uint8_t_id + 374), 18, 1, 5, 16, 18}, {65, (uint8_t_id + 410), 13, 0, 5, 13, 14}, {66, (uint8_t_id + 433), 12, 2, 5, 9, 14}, {67, (uint8_t_id + 449), 13, 1, 5, 11, 14}, {68, (uint8_t_id + 469), 13, 2, 5, 10, 14}, {69, (uint8_t_id + 487), 11, 2, 5, 9, 14}, {70, (uint8_t_id + 503), 11, 2, 5, 8, 14}, {71, (uint8_t_id + 517), 14, 1, 5, 11, 14}, {72, (uint8_t_id + 537), 14, 2, 5, 11, 14}, {73, (uint8_t_id + 557), 5, 2, 5, 2, 14}, {74, (uint8_t_id + 561), 11, 1, 5, 9, 14}, {75, (uint8_t_id + 577), 13, 2, 5, 11, 14}, {76, (uint8_t_id + 597), 11, 2, 5, 8, 14}, {77, (uint8_t_id + 611), 17, 2, 5, 14, 14}, {78, (uint8_t_id + 636), 14, 2, 5, 11, 14}, {79, (uint8_t_id + 656), 14, 1, 5, 12, 14}, {80, (uint8_t_id + 677), 13, 2, 5, 10, 14}, {81, (uint8_t_id + 695), 14, 1, 5, 12, 16}, {82, (uint8_t_id + 719), 12, 2, 5, 10, 14}, {83, (uint8_t_id + 737), 12, 1, 5, 10, 14}, {84, (uint8_t_id + 755), 12, 0, 5, 11, 14}, {85, (uint8_t_id + 775), 13, 1, 5, 11, 14}, {86, (uint8_t_id + 795), 13, 0, 5, 12, 14}, {87, (uint8_t_id + 816), 18, 1, 5, 16, 14}, {88, (uint8_t_id + 844), 13, 1, 5, 11, 14}, {89, (uint8_t_id + 864), 12, 0, 5, 12, 14}, {90, (uint8_t_id + 885), 12, 1, 5, 10, 14}, {91, (uint8_t_id + 903), 5, 1, 3, 4, 19}, {92, (uint8_t_id + 913), 8, 0, 5, 8, 15}, {93, (uint8_t_id + 928), 5, 0, 3, 4, 19}, {94, (uint8_t_id + 938), 8, 1, 5, 7, 7}, {95, (uint8_t_id + 945), 9, 0, 19, 9, 1}, {96, (uint8_t_id + 947), 6, 1, 4, 4, 3}, {97, (uint8_t_id + 949), 11, 1, 8, 9, 11}, {98, (uint8_t_id + 962), 11, 1, 4, 9, 15}, {99, (uint8_t_id + 979), 10, 1, 8, 9, 11}, {100, (uint8_t_id + 992), 11, 1, 4, 9, 15}, {101, (uint8_t_id + 1009), 11, 1, 8, 9, 11}, {102, (uint8_t_id + 1022), 7, 1, 4, 6, 15}, {103, (uint8_t_id + 1034), 11, 1, 8, 9, 15}, {104, (uint8_t_id + 1051), 11, 1, 4, 9, 15}, {105, (uint8_t_id + 1068), 5, 1, 4, 3, 15}, {106, (uint8_t_id + 1074), 5, -1, 4, 4, 19}, {107, (uint8_t_id + 1084), 10, 1, 4, 9, 15}, {108, (uint8_t_id + 1101), 5, 2, 4, 1, 15}, {109, (uint8_t_id + 1103), 18, 1, 8, 15, 11}, {110, (uint8_t_id + 1124), 11, 1, 8, 9, 11}, {111, (uint8_t_id + 1137), 11, 1, 8, 10, 11}, {112, (uint8_t_id + 1151), 11, 1, 8, 9, 15}, {113, (uint8_t_id + 1168), 11, 1, 8, 9, 15}, {114, (uint8_t_id + 1185), 7, 1, 8, 5, 11}, {115, (uint8_t_id + 1192), 10, 1, 8, 8, 11}, {116, (uint8_t_id + 1203), 7, 0, 6, 6, 13}, {117, (uint8_t_id + 1213), 11, 1, 8, 9, 11}, {118, (uint8_t_id + 1226), 10, 0, 8, 9, 11}, {119, (uint8_t_id + 1239), 15, 0, 8, 15, 11}, {120, (uint8_t_id + 1260), 10, 0, 8, 9, 11}, {121, (uint8_t_id + 1273), 9, 0, 8, 9, 15}, {122, (uint8_t_id + 1290), 10, 1, 8, 8, 11}, {123, (uint8_t_id + 1301), 7, 1, 3, 6, 20}, {124, (uint8_t_id + 1316), 5, 2, 5, 1, 17}, {125, (uint8_t_id + 1319), 7, 0, 3, 6, 20}, {126, (uint8_t_id + 1334), 14, 1, 11, 11, 4}, {160, (uint8_t_id + 1340), 5, 0, 18, 1, 1}, {162, (uint8_t_id + 1341), 11, 1, 6, 9, 15}, {163, (uint8_t_id + 1358), 12, 1, 5, 10, 14}, {165, (uint8_t_id + 1376), 11, 0, 5, 10, 14}, {169, (uint8_t_id + 1394), 16, 1, 5, 14, 14}, {174, (uint8_t_id + 1419), 16, 1, 5, 14, 14}, {176, (uint8_t_id + 1444), 7, 1, 5, 5, 5}, {183, (uint8_t_id + 1448), 5, 1, 11, 3, 2}, {215, (uint8_t_id + 1449), 11, 1, 8, 9, 9}, {247, (uint8_t_id + 1460), 11, 1, 7, 9, 10}, {8211, (uint8_t_id + 1472), 13, 2, 12, 9, 1}, {8212, (uint8_t_id + 1474), 16, 1, 12, 13, 1}, {8216, (uint8_t_id + 1476), 4, 1, 4, 3, 5}, {8217, (uint8_t_id + 1478), 4, 0, 4, 3, 5}, {8220, (uint8_t_id + 1480), 7, 1, 4, 6, 5}, {8221, (uint8_t_id + 1484), 7, 1, 4, 5, 5}, {8226, (uint8_t_id + 1488), 7, 1, 10, 4, 4}, {8230, (uint8_t_id + 1490), 13, 1, 17, 11, 2}, {8364, (uint8_t_id + 1493), 11, 1, 5, 9, 14}, {8482, (uint8_t_id + 1509), 13, 1, 5, 10, 5}, {8722, (uint8_t_id + 1516), 11, 2, 12, 8, 1}};
  helvetica_20 = new font::Font(font_glyph_id, 116, 19, 23, 5, 11, 14, 1);
  // interval:
  //   - interval: 60s
  //     then:
  //       - component.update:
  //           id: my_display
  //         type_id: updatecomponentaction_id_2
  //     trigger_id: trigger_id
  //     automation_id: automation_id_2
  //     id: interval_intervaltrigger_id
  //     startup_delay: 0s
  interval_intervaltrigger_id = new interval::IntervalTrigger();
  interval_intervaltrigger_id->set_component_source(LOG_STR("interval"));
  App.register_component(interval_intervaltrigger_id);
  automation_id_2 = new Automation<>(interval_intervaltrigger_id);
  updatecomponentaction_id_2 = new UpdateComponentAction<>(my_display);
  automation_id_2->add_actions({updatecomponentaction_id_2});
  interval_intervaltrigger_id->set_update_interval(60000);
  interval_intervaltrigger_id->set_startup_delay(0);
  // binary_sensor.gpio:
  //   platform: gpio
  //   name: Core Ink PIR
  //   device_class: motion
  //   pin:
  //     number: 36
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_7
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   disabled_by_default: false
  //   id: gpio_gpiobinarysensor_id
  //   use_interrupt: true
  //   interrupt_type: ANY
  gpio_gpiobinarysensor_id = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(gpio_gpiobinarysensor_id);
  gpio_gpiobinarysensor_id->set_name("Core Ink PIR", 2380481637UL);
  gpio_gpiobinarysensor_id->set_device_class("motion");
  gpio_gpiobinarysensor_id->set_trigger_on_initial_state(false);
  gpio_gpiobinarysensor_id->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(gpio_gpiobinarysensor_id);
  esp32_esp32internalgpiopin_id_7 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_7->set_pin(::GPIO_NUM_36);
  esp32_esp32internalgpiopin_id_7->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_7->set_flags(gpio::Flags::FLAG_INPUT);
  gpio_gpiobinarysensor_id->set_pin(esp32_esp32internalgpiopin_id_7);
  gpio_gpiobinarysensor_id->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  // binary_sensor.gpio:
  //   platform: gpio
  //   name: Core Ink Button Up
  //   pin:
  //     number: 37
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: true
  //     id: esp32_esp32internalgpiopin_id_8
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   filters:
  //     - delayed_on: 50ms
  //       type_id: binary_sensor_delayedonfilter_id
  //     - delayed_off: 50ms
  //       type_id: binary_sensor_delayedofffilter_id
  //   on_click:
  //     - then:
  //         - component.update:
  //             id: my_display
  //           type_id: updatecomponentaction_id_3
  //       automation_id: automation_id_3
  //       trigger_id: binary_sensor_clicktrigger_id
  //       min_length: 50ms
  //       max_length: 350ms
  //   disabled_by_default: false
  //   id: gpio_gpiobinarysensor_id_2
  //   use_interrupt: true
  //   interrupt_type: ANY
  gpio_gpiobinarysensor_id_2 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(gpio_gpiobinarysensor_id_2);
  gpio_gpiobinarysensor_id_2->set_name("Core Ink Button Up", 3200663104UL);
  gpio_gpiobinarysensor_id_2->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id);
  binary_sensor_delayedonfilter_id->set_delay(50);
  binary_sensor_delayedofffilter_id = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id);
  binary_sensor_delayedofffilter_id->set_delay(50);
  gpio_gpiobinarysensor_id_2->add_filters({binary_sensor_delayedonfilter_id, binary_sensor_delayedofffilter_id});
  binary_sensor_clicktrigger_id = new binary_sensor::ClickTrigger(gpio_gpiobinarysensor_id_2, 50, 350);
  automation_id_3 = new Automation<>(binary_sensor_clicktrigger_id);
  updatecomponentaction_id_3 = new UpdateComponentAction<>(my_display);
  automation_id_3->add_actions({updatecomponentaction_id_3});
  gpio_gpiobinarysensor_id_2->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(gpio_gpiobinarysensor_id_2);
  esp32_esp32internalgpiopin_id_8 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_8->set_pin(::GPIO_NUM_37);
  esp32_esp32internalgpiopin_id_8->set_inverted(true);
  esp32_esp32internalgpiopin_id_8->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_8->set_flags(gpio::Flags::FLAG_INPUT);
  gpio_gpiobinarysensor_id_2->set_pin(esp32_esp32internalgpiopin_id_8);
  gpio_gpiobinarysensor_id_2->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  // binary_sensor.gpio:
  //   platform: gpio
  //   name: Core Ink Button In
  //   pin:
  //     number: 38
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: true
  //     id: esp32_esp32internalgpiopin_id_9
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   filters:
  //     - delayed_on: 50ms
  //       type_id: binary_sensor_delayedonfilter_id_2
  //     - delayed_off: 50ms
  //       type_id: binary_sensor_delayedofffilter_id_2
  //   on_click:
  //     - then:
  //         - component.update:
  //             id: my_display
  //           type_id: updatecomponentaction_id_4
  //       automation_id: automation_id_4
  //       trigger_id: binary_sensor_clicktrigger_id_2
  //       min_length: 50ms
  //       max_length: 350ms
  //   disabled_by_default: false
  //   id: gpio_gpiobinarysensor_id_3
  //   use_interrupt: true
  //   interrupt_type: ANY
  gpio_gpiobinarysensor_id_3 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(gpio_gpiobinarysensor_id_3);
  gpio_gpiobinarysensor_id_3->set_name("Core Ink Button In", 3133552522UL);
  gpio_gpiobinarysensor_id_3->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_2 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_2->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_2);
  binary_sensor_delayedonfilter_id_2->set_delay(50);
  binary_sensor_delayedofffilter_id_2 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_2->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_2);
  binary_sensor_delayedofffilter_id_2->set_delay(50);
  gpio_gpiobinarysensor_id_3->add_filters({binary_sensor_delayedonfilter_id_2, binary_sensor_delayedofffilter_id_2});
  binary_sensor_clicktrigger_id_2 = new binary_sensor::ClickTrigger(gpio_gpiobinarysensor_id_3, 50, 350);
  automation_id_4 = new Automation<>(binary_sensor_clicktrigger_id_2);
  updatecomponentaction_id_4 = new UpdateComponentAction<>(my_display);
  automation_id_4->add_actions({updatecomponentaction_id_4});
  gpio_gpiobinarysensor_id_3->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(gpio_gpiobinarysensor_id_3);
  esp32_esp32internalgpiopin_id_9 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_9->set_pin(::GPIO_NUM_38);
  esp32_esp32internalgpiopin_id_9->set_inverted(true);
  esp32_esp32internalgpiopin_id_9->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_9->set_flags(gpio::Flags::FLAG_INPUT);
  gpio_gpiobinarysensor_id_3->set_pin(esp32_esp32internalgpiopin_id_9);
  gpio_gpiobinarysensor_id_3->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  // binary_sensor.gpio:
  //   platform: gpio
  //   name: Core Ink Button Down
  //   pin:
  //     number: 39
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: true
  //     id: esp32_esp32internalgpiopin_id_10
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   filters:
  //     - delayed_on: 50ms
  //       type_id: binary_sensor_delayedonfilter_id_3
  //     - delayed_off: 50ms
  //       type_id: binary_sensor_delayedofffilter_id_3
  //   on_click:
  //     - then:
  //         - component.update:
  //             id: my_display
  //           type_id: updatecomponentaction_id_5
  //       automation_id: automation_id_5
  //       trigger_id: binary_sensor_clicktrigger_id_3
  //       min_length: 50ms
  //       max_length: 350ms
  //   disabled_by_default: false
  //   id: gpio_gpiobinarysensor_id_4
  //   use_interrupt: true
  //   interrupt_type: ANY
  gpio_gpiobinarysensor_id_4 = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(gpio_gpiobinarysensor_id_4);
  gpio_gpiobinarysensor_id_4->set_name("Core Ink Button Down", 1272065175);
  gpio_gpiobinarysensor_id_4->set_trigger_on_initial_state(false);
  binary_sensor_delayedonfilter_id_3 = new binary_sensor::DelayedOnFilter();
  binary_sensor_delayedonfilter_id_3->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedonfilter_id_3);
  binary_sensor_delayedonfilter_id_3->set_delay(50);
  binary_sensor_delayedofffilter_id_3 = new binary_sensor::DelayedOffFilter();
  binary_sensor_delayedofffilter_id_3->set_component_source(LOG_STR("binary_sensor"));
  App.register_component(binary_sensor_delayedofffilter_id_3);
  binary_sensor_delayedofffilter_id_3->set_delay(50);
  gpio_gpiobinarysensor_id_4->add_filters({binary_sensor_delayedonfilter_id_3, binary_sensor_delayedofffilter_id_3});
  binary_sensor_clicktrigger_id_3 = new binary_sensor::ClickTrigger(gpio_gpiobinarysensor_id_4, 50, 350);
  automation_id_5 = new Automation<>(binary_sensor_clicktrigger_id_3);
  updatecomponentaction_id_5 = new UpdateComponentAction<>(my_display);
  automation_id_5->add_actions({updatecomponentaction_id_5});
  gpio_gpiobinarysensor_id_4->set_component_source(LOG_STR("gpio.binary_sensor"));
  App.register_component(gpio_gpiobinarysensor_id_4);
  esp32_esp32internalgpiopin_id_10 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_10->set_pin(::GPIO_NUM_39);
  esp32_esp32internalgpiopin_id_10->set_inverted(true);
  esp32_esp32internalgpiopin_id_10->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_10->set_flags(gpio::Flags::FLAG_INPUT);
  gpio_gpiobinarysensor_id_4->set_pin(esp32_esp32internalgpiopin_id_10);
  gpio_gpiobinarysensor_id_4->set_interrupt_type(gpio::INTERRUPT_ANY_EDGE);
  // sensor.scd4x:
  //   platform: scd4x
  //   i2c_id: port_a
  //   address: 0x62
  //   co2:
  //     name: Core Ink CO2
  //     accuracy_decimals: 0
  //     disabled_by_default: false
  //     id: sensor_sensor_id
  //     force_update: false
  //     unit_of_measurement: ppm
  //     icon: mdi:molecule-co2
  //     device_class: carbon_dioxide
  //     state_class: measurement
  //   temperature:
  //     name: Core Ink Temp
  //     accuracy_decimals: 1
  //     disabled_by_default: false
  //     id: sensor_sensor_id_2
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     device_class: temperature
  //     state_class: measurement
  //   humidity:
  //     name: Core Ink Humidity
  //     accuracy_decimals: 0
  //     disabled_by_default: false
  //     id: sensor_sensor_id_3
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     device_class: humidity
  //     state_class: measurement
  //   update_interval: 30s
  //   id: scd4x_scd4xcomponent_id
  //   automatic_self_calibration: true
  //   altitude_compensation: 0
  //   temperature_offset: 4.0
  //   measurement_mode: periodic
  scd4x_scd4xcomponent_id = new scd4x::SCD4XComponent();
  scd4x_scd4xcomponent_id->set_update_interval(30000);
  scd4x_scd4xcomponent_id->set_component_source(LOG_STR("scd4x.sensor"));
  App.register_component(scd4x_scd4xcomponent_id);
  scd4x_scd4xcomponent_id->set_i2c_bus(port_a);
  scd4x_scd4xcomponent_id->set_i2c_address(0x62);
  scd4x_scd4xcomponent_id->set_automatic_self_calibration(true);
  scd4x_scd4xcomponent_id->set_altitude_compensation(0);
  scd4x_scd4xcomponent_id->set_temperature_offset(4.0f);
  sensor_sensor_id = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id);
  sensor_sensor_id->set_name("Core Ink CO2", 2349927444UL);
  sensor_sensor_id->set_icon("mdi:molecule-co2");
  sensor_sensor_id->set_device_class("carbon_dioxide");
  sensor_sensor_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id->set_unit_of_measurement("ppm");
  sensor_sensor_id->set_accuracy_decimals(0);
  scd4x_scd4xcomponent_id->set_co2_sensor(sensor_sensor_id);
  sensor_sensor_id_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_2);
  sensor_sensor_id_2->set_name("Core Ink Temp", 41962702);
  sensor_sensor_id_2->set_icon("mdi:thermometer");
  sensor_sensor_id_2->set_device_class("temperature");
  sensor_sensor_id_2->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_2->set_unit_of_measurement("\302\260C");
  sensor_sensor_id_2->set_accuracy_decimals(1);
  scd4x_scd4xcomponent_id->set_temperature_sensor(sensor_sensor_id_2);
  sensor_sensor_id_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_3);
  sensor_sensor_id_3->set_name("Core Ink Humidity", 852470331);
  sensor_sensor_id_3->set_icon("mdi:water-percent");
  sensor_sensor_id_3->set_device_class("humidity");
  sensor_sensor_id_3->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_3->set_unit_of_measurement("%");
  sensor_sensor_id_3->set_accuracy_decimals(0);
  scd4x_scd4xcomponent_id->set_humidity_sensor(sensor_sensor_id_3);
  scd4x_scd4xcomponent_id->set_measurement_mode(scd4x::PERIODIC);
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: Core Ink WiFi RSSI
  //   update_interval: 60s
  //   disabled_by_default: false
  //   force_update: false
  //   id: wifi_signal_wifisignalsensor_id
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  //   entity_category: diagnostic
  wifi_signal_wifisignalsensor_id = new wifi_signal::WiFiSignalSensor();
  App.register_sensor(wifi_signal_wifisignalsensor_id);
  wifi_signal_wifisignalsensor_id->set_name("Core Ink WiFi RSSI", 2044194375);
  wifi_signal_wifisignalsensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_signal_wifisignalsensor_id->set_device_class("signal_strength");
  wifi_signal_wifisignalsensor_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_wifisignalsensor_id->set_unit_of_measurement("dBm");
  wifi_signal_wifisignalsensor_id->set_accuracy_decimals(0);
  wifi_signal_wifisignalsensor_id->set_update_interval(60000);
  wifi_signal_wifisignalsensor_id->set_component_source(LOG_STR("wifi_signal.sensor"));
  App.register_component(wifi_signal_wifisignalsensor_id);
  // text_sensor.wifi_info:
  //   platform: wifi_info
  //   ip_address:
  //     id: coreink_ip
  //     name: Core Ink IP
  //     disabled_by_default: false
  //     entity_category: diagnostic
  //   ssid:
  //     name: Core Ink SSID
  //     disabled_by_default: false
  //     id: wifi_info_ssidwifiinfo_id
  //     entity_category: diagnostic
  wifi_info_ssidwifiinfo_id = new wifi_info::SSIDWiFiInfo();
  App.register_text_sensor(wifi_info_ssidwifiinfo_id);
  wifi_info_ssidwifiinfo_id->set_name("Core Ink SSID", 4171102461UL);
  wifi_info_ssidwifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_ssidwifiinfo_id->set_component_source(LOG_STR("wifi_info.text_sensor"));
  App.register_component(wifi_info_ssidwifiinfo_id);
  coreink_ip = new wifi_info::IPAddressWiFiInfo();
  App.register_text_sensor(coreink_ip);
  coreink_ip->set_name("Core Ink IP", 2427741151UL);
  coreink_ip->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  coreink_ip->set_component_source(LOG_STR("wifi_info.text_sensor"));
  App.register_component(coreink_ip);
  // md5:
  // sha256:
  //   {}
  // socket:
  //   implementation: bsd_sockets
  // web_server_idf:
  //   {}
  updatecomponentaction_id = new UpdateComponentAction<>(my_display);
  automation_id->add_actions({updatecomponentaction_id});
  my_display->set_writer([](display::Display & it) -> void {
      #line 78 "core-ink.yml"
      it.print(5, 5, helvetica_20, "ESPHome");
  });
  esp32_esp32internalgpiopin_id_6 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_6->set_pin(::GPIO_NUM_0);
  esp32_esp32internalgpiopin_id_6->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_6->set_flags(gpio::Flags::FLAG_OUTPUT);
  my_display->set_reset_pin(esp32_esp32internalgpiopin_id_6);
  esp32_esp32internalgpiopin_id_5 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_5->set_pin(::GPIO_NUM_4);
  esp32_esp32internalgpiopin_id_5->set_inverted(true);
  esp32_esp32internalgpiopin_id_5->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_5->set_flags(gpio::Flags::FLAG_INPUT);
  my_display->set_busy_pin(esp32_esp32internalgpiopin_id_5);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
