# SPDX-FileCopyrightText: 2023 KOINSLOT, Inc.
#
# SPDX-License-Identifier: GPL-3.0-or-later

cmake_minimum_required(VERSION 3.16) # this absolutely needs to be the first line

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
set(COMPONENTS main)
project(project-template)
