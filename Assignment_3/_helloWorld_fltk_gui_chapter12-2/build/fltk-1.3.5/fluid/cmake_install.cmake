# Install script for directory: /Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/fluid

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY FILES "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/build/fltk-1.3.5/bin/fluid.app" USE_SOURCE_PERMISSIONS)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/fluid/fluid.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mime/packages" TYPE FILE FILES "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/fluid/fluid.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/apps" TYPE FILE RENAME "fluid.png" FILES "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/fluid/icons/fluid-32.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/apps" TYPE FILE RENAME "fluid.png" FILES "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/fluid/icons/fluid-48.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/apps" TYPE FILE RENAME "fluid.png" FILES "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/fluid/icons/fluid-64.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/apps" TYPE FILE RENAME "fluid.png" FILES "/Users/Chris/Desktop/Desktop/Study2022/Earino_2022/C++/Assignment_3/_helloWorld_fltk_gui_chapter12-2/fltk-1.3.5/fluid/icons/fluid-128.png")
endif()

