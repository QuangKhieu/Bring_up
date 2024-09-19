from setuptools import find_packages
from setuptools import setup

setup(
    name='rtcrobot_msg',
    version='0.0.0',
    packages=find_packages(
        include=('rtcrobot_msg', 'rtcrobot_msg.*')),
)
