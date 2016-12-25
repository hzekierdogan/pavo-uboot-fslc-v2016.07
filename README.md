# pavo-uboot-fslc-v2016.07
mx6q/dl/s/spl openrex u-boot v2015.10 
 
# Download repository
    git clone https://github.com/hzekierdogan/pavo-uboot-fslc-v2016.07.git
    cd pavo-uboot-fslc-v2016.07
 
# Install cross compiler
    apt-get install gcc-arm-linux-gnueabihf
 
# Setup cross compiler
    export CROSS_COMPILE=arm-linux-gnueabihf-
    export ARCH=arm
 
# Build (imx6q)
    make distclean
    make mx6qpavoterm_config
    make
    cp u-boot.imx /tftp/uboot-mx6pavoterm.imx
 
# Build (imx6dl)
    TODO
 
# Build (imx6s)
    TODO

