import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/userdata/bbb_ws/install/bbb_pkg_python'
