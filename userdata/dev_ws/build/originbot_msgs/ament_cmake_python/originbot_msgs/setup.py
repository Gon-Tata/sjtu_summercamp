from setuptools import find_packages
from setuptools import setup

setup(
    name='originbot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('originbot_msgs', 'originbot_msgs.*')),
)
