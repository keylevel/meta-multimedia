DEFAULT_PREFERENCE = "-1"

include mumudvb.inc

LIC_FILES_CHKSUM = "file://COPYING;md5=8ca43cbc842c2336e835926c2166c28b \
                   "

S = "${WORKDIR}/git"

MUMUDVB_GIT_BRANCH ?= "mumudvb2"

SRCREV = "7e11f5d02d9e5e99a286657eb399d31d4eebc7dd"
SRC_URI[md5sum] = "72d2dfdd6e61b47808196fd9bb7c5cd8"
SRC_URI[sha256sum] = "7baaf3d1e6941d1341d5789cbdb058d6c7787f68b9e75506ee71436c2a828638"

