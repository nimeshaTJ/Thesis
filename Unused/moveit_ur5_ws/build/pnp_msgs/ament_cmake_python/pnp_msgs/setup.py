from setuptools import find_packages
from setuptools import setup

setup(
    name='pnp_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('pnp_msgs', 'pnp_msgs.*')),
)
