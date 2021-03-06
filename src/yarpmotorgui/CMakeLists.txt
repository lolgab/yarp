# Copyright (C) 2006-2021 Istituto Italiano di Tecnologia (IIT)
# All rights reserved.
#
# This software may be modified and distributed under the terms of the
# BSD-3-Clause license. See the accompanying LICENSE file for details.

if(YARP_COMPILE_yarpmotorgui)

  include(YarpUseQt5)
  include(YarpMacOSUtilities)

  add_executable(yarpmotorgui WIN32)

  set(CMAKE_INCLUDE_CURRENT_DIR TRUE)

  set(yarpmotorgui_SRCS main.cpp
                        flowlayout.cpp
                        jointitem.cpp
                        mainwindow.cpp
                        partitem.cpp
                        piddlg.cpp
                        sequencewindow.cpp
                        sliderOptions.cpp
                        sliderWithTarget.cpp
                        startdlg.cpp)
  set(yarpmotorgui_HDRS flowlayout.h
                        jointitem.h
                        log.h
                        mainwindow.h
                        partitem.h
                        piddlg.h
                        sliderOptions.h
                        sliderWithTarget.h
                        yarpmotorgui.h
                        sequencewindow.h
                        startdlg.h)
  set(yarpmotorgui_QRC_FILES res.qrc)
  set(yarpmotorgui_UI_FILES jointitem.ui
                            mainwindow.ui
                            piddlg.ui
                            sequencewindow.ui
                            startdlg.ui
                            sliderOptions.ui)

  qt5_add_resources(yarpmotorgui_QRC_GEN_SRCS ${yarpmotorgui_QRC_FILES})
  qt5_wrap_ui(yarpmotorgui_UI_GEN_SRCS ${yarpmotorgui_UI_FILES})

  source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}"
               PREFIX "Source Files"
               FILES ${yarpmotorgui_SRCS})
  source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}"
               PREFIX "Header Files"
               FILES ${yarpmotorgui_HDRS})
  source_group("Resources Files" FILES ${yarpmotorgui_QRC_FILES})
  source_group("UI Files" FILES ${yarpmotorgui_UI_FILES})
  source_group("Generated Files" FILES ${yarpmotorgui_QRC_GEN_SRCS}
                                       ${yarpmotorgui_UI_GEN_SRCS})

  target_sources(yarpmotorgui PRIVATE ${yarpmotorgui_SRCS}
                                      ${yarpmotorgui_HDRS}
                                      ${yarpmotorgui_QRC_FILES}
                                      ${yarpmotorgui_QRC_GEN_SRCS}
                                      ${yarpmotorgui_UI_FILES}
                                      ${yarpmotorgui_UI_GEN_SRCS})

  target_link_libraries(yarpmotorgui PRIVATE YARP::YARP_os
                                             YARP::YARP_init
                                             YARP::YARP_sig
                                             YARP::YARP_dev
                                             Qt5::Widgets
                                             Qt5::Gui)

  install(TARGETS yarpmotorgui COMPONENT utilities DESTINATION ${CMAKE_INSTALL_BINDIR})

  set_property(TARGET yarpmotorgui PROPERTY FOLDER "Graphical User Interfaces")

  yarp_macos_duplicate_and_add_bundle(TARGET yarpmotorgui
                                      INSTALL_COMPONENT utilities
                                      INSTALL_DESTINATION "${CMAKE_INSTALL_BINDIR}")

  yarp_install(FILES yarpmotorgui.xml
               DESTINATION ${YARP_MODULES_INSTALL_DIR})
endif()
