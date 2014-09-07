SUMMARY = "MuMuDVB (Multi Multicast DVB) is a program for streaming TV over a network"
HOMEPAGE = "http://www.mumudvb.net"
SECTION = "multimedia"
LICENSE = "GPLv2 "

# dvb-apps - allows a user to scan for channel information, etc.
RRECOMMENDS_${PN} = "dvb-apps"

inherit autotools pkgconfig

SRC_URI = "${@get_mumudvb_srcuri(d)}"

def get_mumudvb_srcuri(d):
    pv = d.getVar("PV", True)

    if pv == "git":
        branch = d.getVar("MUMUDVB_GIT_BRANCH", True)
        s = "git://github.com/braice/MuMuDVB.git;branch=%s" % (branch)
    else:
        s = "https://github.com/braice/MuMuDVB/archive/%s.zip" % (pv)

    return s

do_configure() {
   autoreconf -i -f
	oe_runconf
}

