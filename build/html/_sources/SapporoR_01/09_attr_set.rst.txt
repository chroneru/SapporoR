Attributes
=================

* ATTRIB
* OBJECT
* MARK
* TYPEOF
* NAMED
* RTRACE
* LEVELS

ポインタの構造体であるsxpinfoの要素にアクセスする。

引数は、ポインタ。

コード
---------

.. literalinclude:: ../../src_c/attributes/check_attr.c
   :language: C

.. literalinclude:: ../../src_c/attributes/check_attr.R
   :language: R

SET ATTRIBUTES系
====================

* SET_OBJECT
* SET_TYPEOF
* SET_NAMED
* SET_RTRACE
* SETLEVELS

ポインタの構造体であるsxpinfoの要素に、SEXPのタイプを代入する。

引数は、ポインタとSEXPTYPE。

コード
---------

.. literalinclude:: ../../src_c/set_attributes/set_int.c
   :language: C

.. literalinclude:: ../../src_c/set_attributes/set_int.R
   :language: R
