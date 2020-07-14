#!python

import os
import subprocess
import sys
from os.path import abspath, relpath

platform = sys.platform
platform_id = subprocess.check_output(
    "cat /etc/os-release | egrep '^ID='", shell=True
)

lib_search_path = ["/lib", "/usr/lib", "/usr/local/lib"]
include_search_path = ["/usr/include", "/usr/local/include", abspath("./src")]

source_base_dir = relpath("./src")
object_base_dir = relpath("./obj")
build_base_dir = relpath("./out")

prefix = abspath("/usr/local")
