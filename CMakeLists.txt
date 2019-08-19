cmake_minimum_required(VERSION 2.6.4)
project(cinnamon-display-refresh)
set(CMAKE_VERBOSE_MAKEFILE ON)

find_package(PkgConfig REQUIRED)
pkg_search_module(GLIB REQUIRED glib-2.0)
pkg_search_module(GNOMEDESKTOP REQUIRED cinnamon-desktop)

include_directories(${GLIB_INCLUDE_DIRS} ${GNOMEDESKTOP_INCLUDE_DIRS})
link_directories(${GLIB_LIBRARY_DIRS} ${GNOMEDESKTOP_LIBRARY_DIRS})

add_executable(cinnamon-display-refresh cinnamon-display-refresh.c)

add_definitions(${GLIB_CFLAGS_OTHER} ${GNOMEDESKTOP_CFLAGS_OTHER})
target_link_libraries(cinnamon-display-refresh ${GLIB_LIBRARIES} ${GNOMEDESKTOP_LIBRARIES})
