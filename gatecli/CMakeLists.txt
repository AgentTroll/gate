cmake_minimum_required(VERSION 3.13)
project(gatecli VERSION 1.0 LANGUAGES C)

include(GNUInstallDirs)

add_executable(gatecli
        main.c
        clihandler.c clihandler.h
        commands.c commands.h
        dispatcher.c dispatcher.h
        options.c options.h
        util.c util.h
        table.c table.h)
target_link_libraries(gatecli
        PRIVATE gate
        PRIVATE gatesnm)

install(TARGETS gatecli
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")
