## Process this file with automake to produce Makefile.in

noinst_PROGRAMS = gen_crc gen_pat gen_pmt \
                  test_dr test_chain

gen_crc_SOURCES = gen_crc.c

gen_pat_SOURCES = gen_pat.c
gen_pat_CPPFLAGS = -DDVBPSI_DIST
gen_pat_LDFLAGS = -L../src -ldvbpsi

gen_pmt_SOURCES = gen_pmt.c
gen_pmt_CPPFLAGS = -DDVBPSI_DIST
gen_pmt_LDFLAGS = -L../src -ldvbpsi

test_chain_SOURCES = test_chain.c
test_chain_CPPFLAGS = -DDVBPSI_DIST
test_chain_LDFLAGS = -L../src -ldvbpsi -lm

test_dr_SOURCES = test_dr.c
test_dr_CPPFLAGS = -DDVBPSI_DIST
test_dr_LDFLAGS = -L../src -ldvbpsi

noinst_HEADERS = test_dr.h test_dr_cmp.h

EXTRA_DIST=dr.dtd dr.xml dr.xsl

test_dr.c: dr.dtd dr.xml dr.xsl
	xmllint --noout --valid dr.xml
	xsltproc -o test_dr.c dr.xsl dr.xml

