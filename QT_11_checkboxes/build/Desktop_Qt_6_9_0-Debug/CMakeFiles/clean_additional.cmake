# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QT_11_checkboxes_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QT_11_checkboxes_autogen.dir/ParseCache.txt"
  "QT_11_checkboxes_autogen"
  )
endif()
