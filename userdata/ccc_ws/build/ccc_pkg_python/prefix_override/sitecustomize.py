import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/userdata/ccc_ws/install/ccc_pkg_python'
