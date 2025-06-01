# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QT_20_QDateTime_Clock_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QT_20_QDateTime_Clock_autogen.dir/ParseCache.txt"
  "QT_20_QDateTime_Clock_autogen"
  )
endif()
