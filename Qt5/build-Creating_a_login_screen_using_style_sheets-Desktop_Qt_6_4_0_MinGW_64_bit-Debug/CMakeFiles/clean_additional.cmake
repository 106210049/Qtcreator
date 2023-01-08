# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Creating_a_login_screen_using_style_sheets_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Creating_a_login_screen_using_style_sheets_autogen.dir\\ParseCache.txt"
  "Creating_a_login_screen_using_style_sheets_autogen"
  )
endif()
