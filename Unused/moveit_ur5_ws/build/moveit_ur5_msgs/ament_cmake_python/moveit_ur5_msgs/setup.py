from setuptools import find_packages
from setuptools import setup

setup(
    name='moveit_ur5_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('moveit_ur5_msgs', 'moveit_ur5_msgs.*')),
)
