<?xml version="1.0" encoding="iso-8859-1" ?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">

<xsl:output method="text" omit-xml-declaration="yes" indent="no" encoding="iso-8859-1" />

<!--             -->
<!-- entry point -->
<!--             -->

<xsl:template match="/dr">
/* This file is generated by applying the dr.xsl stylesheet to the dr.xml
 * description file. DO NOT EDIT !!! */

#include "config.h"

#include &lt;stdio.h&gt;
#include &lt;stdbool.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;time.h&gt;

#if defined(HAVE_INTTYPES_H)
#include &lt;inttypes.h&gt;
#elif defined(HAVE_STDINT_H)
#include &lt;stdint.h&gt;
#endif

#include &lt;sys/types.h&gt;

/* the libdvbpsi distribution defines DVBPSI_DIST */
#ifdef DVBPSI_DIST
#include "../src/dvbpsi.h"
#include "../src/descriptor.h"
#include "../src/descriptors/dr.h"
#else
#include &lt;dvbpsi/dvbpsi.h&gt;
#include &lt;dvbpsi/descriptor.h&gt;
#include &lt;dvbpsi/dr.h&gt;
#endif

#include "test_dr.h"

  <xsl:apply-templates mode="code" />

/* main function */
int main(void)
{
  int i_err = 0;
  srand(time(NULL));
  <xsl:apply-templates mode="main" />

  if(i_err)
    fprintf(stderr, "At least one test has FAILED !!!\n");
  else
    fprintf(stdout, "All tests succeeded.\n");

  return i_err;
}

</xsl:template>

<xsl:template match="text()" priority="-1"/>

<!--                -->
<!-- code templates -->
<!--                -->

<xsl:template match="descriptor" mode="code">
/* <xsl:value-of select="@name" /> */
static int main_<xsl:value-of select="@sname" />_<xsl:value-of select="@msuffix" />(void)
{
  BOZO_VARS(<xsl:value-of select="@sname" />);
  BOZO_START(<xsl:value-of select="@name" />);

  <!-- declare a macro for calling the one-argument generate functions -->
  <xsl:if test="@gen_args = 1">
  #define dvbpsi_gen_<xsl:value-of select="@sname"/>_dr(x,y) \
    dvbpsi_gen_<xsl:value-of select="@sname"/>_dr(x)
  </xsl:if>

  <xsl:apply-templates mode="check" />

  BOZO_END(<xsl:value-of select="@name" />);

  return i_err;
}
</xsl:template>

<xsl:template match="text()" mode="code" priority="-1"/>

<!--                -->
<!-- init templates -->
<!--                -->

<xsl:template match="integer" mode="init">
  BOZO_init_integer(<xsl:value-of select="@name" />, <xsl:value-of select="@default" />);</xsl:template>

<xsl:template match="boolean" mode="init">
  BOZO_init_boolean(<xsl:value-of select="@name" />, <xsl:value-of select="@default" />);</xsl:template>

<xsl:template match="array" mode="init">
  BOZO_init_array(<xsl:value-of select="@len_name" />);</xsl:template>

<xsl:template match="carray" mode="init">
  BOZO_fill_array(s_decoded.<xsl:value-of select="@name"/>, sizeof(s_decoded.<xsl:value-of select="@name"/>));</xsl:template>

<xsl:template match="insert" mode="init">
  <xsl:value-of select="begin" />
</xsl:template>

<xsl:template match="text()" mode="init" priority="-1"/>

<!--                 -->
<!-- check templates -->
<!--                 -->

<xsl:template match="integer" mode="check">
  /* check <xsl:value-of select="@name" /> */<xsl:apply-templates select=".." mode="init" />
  BOZO_begin_integer(<xsl:value-of select="@name" />, <xsl:value-of select="@bitcount" />)
    BOZO_DOJOB(<xsl:value-of select="../@sname" />);
    BOZO_check_integer(<xsl:value-of select="@name" />, <xsl:value-of select="@bitcount" />)
    BOZO_CLEAN();
  BOZO_end_integer(<xsl:value-of select="@name" />, <xsl:value-of select="@bitcount" />)
</xsl:template>

<xsl:template match="boolean" mode="check">
  /* check <xsl:value-of select="@name" /> */<xsl:apply-templates select=".." mode="init" />
  BOZO_begin_boolean(<xsl:value-of select="@name" />)
    BOZO_DOJOB(<xsl:value-of select="../@sname" />);
    BOZO_check_boolean(<xsl:value-of select="@name" />)
    BOZO_CLEAN();
  BOZO_end_boolean(<xsl:value-of select="@name" />)
</xsl:template>

<xsl:template match="array" mode="check">
  /* check <xsl:value-of select="@name" /> */<xsl:apply-templates select=".." mode="init" />
  BOZO_begin_array(<xsl:value-of select="@name" />)
  BOZO_loop_array_begin(<xsl:value-of select="@name" />, <xsl:value-of select="@len_name" />, <xsl:value-of select="@min_size" />)
    BOZO_DOJOB(<xsl:value-of select="../@sname" />);
    BOZO_check_array_begin(<xsl:value-of select="@name" />, <xsl:value-of select="@len_name" />)
  <xsl:choose>
    <xsl:when test="@type">
  <xsl:text>  BOZO_check_array_cmp(</xsl:text>
      <xsl:value-of select="@name" /><xsl:text>, </xsl:text>
      <xsl:value-of select="@len_name" /><xsl:text>, </xsl:text>
      <xsl:value-of select="@type" />
    <xsl:text>)</xsl:text>
    </xsl:when>
    <xsl:otherwise>
  <xsl:text>  BOZO_check_array_gen(</xsl:text>
    <xsl:value-of select="@name" /><xsl:text>, </xsl:text>
    <xsl:value-of select="@len_name" />
    <xsl:text>)</xsl:text>
    </xsl:otherwise>
  </xsl:choose>
    BOZO_CLEAN();
  BOZO_loop_array_end(<xsl:value-of select="@name" /><xsl:text>, </xsl:text>
  <xsl:choose>
    <xsl:when test="@max_size">
      <xsl:value-of select="@max_size"/>
    </xsl:when>
    <xsl:otherwise>
      <xsl:text>ARRAY_SIZE(s_decoded.</xsl:text>
      <xsl:value-of select="@name"/>
      <xsl:text>)</xsl:text>
    </xsl:otherwise>
  </xsl:choose>
  <xsl:text>)</xsl:text>
  BOZO_end_array
</xsl:template>

<xsl:template match="carray" mode="check">
  /* check <xsl:value-of select="@name" /> */<xsl:apply-templates select=".." mode="init" />
  i_loop_count = 0;
  BOZO_begin_array(<xsl:value-of select="@name" />)
  BOZO_DOJOB(<xsl:value-of select="../@sname" />);
  BOZO_check_carray(<xsl:value-of select="@name" />)
  BOZO_end_array
</xsl:template>

<xsl:template match="insert" mode="check">
  <xsl:value-of select="check" />
</xsl:template>

<xsl:template match="text()" mode="check" priority="-1"/>

<!--                -->
<!-- main templates -->
<!--                -->

<xsl:template match="descriptor" mode="main">
  i_err |= main_<xsl:value-of select="@sname" />_<xsl:value-of select="@msuffix" />();</xsl:template>

<xsl:template match="text()" mode="main" priority="-1"/>

</xsl:stylesheet>
