#!python
# Copyright (C) 2017, 2019-2020 FIUBioRG
# SPDX-License-Identifier: MIT

import os
import sys
from os.path import abspath, relpath

platform = sys.platform
platform_id = None
try:
    with open("/etc/os-release") as f:
        for line in f:
            if line.startswith("ID="):
                platform_id = line.strip().split("=", 1)[1].strip('"')
                break
except FileNotFoundError:
    pass

lib_search_path = ["/lib", "/usr/lib", "/usr/local/lib"]
include_search_path = ["/usr/include", "/usr/local/include", relpath("./src")]

source_base_dir = relpath("./src")
object_base_dir = relpath("./obj")
build_base_dir = relpath("./out")

prefix = abspath("/usr/local")
