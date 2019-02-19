ポインタの扱い
===============

主に、Rのオブジェクトはポインタとして扱う。

POINTER系
---------------

* LOGICAL_POINTER
* INTEGER_POINTER
* NUMERIC_POINTER
* CHARACTER_POINTER
* COMPLEX_POINTER
* LIST_POINTER
* RAW_POINTER

.. literalinclude:: ../../src_c/pointer/oneplus.c
   :language: C

.. literalinclude:: ../../src_c/pointer/oneplus.R
   :language: R

DATA系
---------------

* LOGICAL_DATA
* INTEGER_DATA
* DOUBLE_DATA
* NUMERIC_DATA
* CHARACTER_DATA
* COMPLEX_DATA
* RECURSIVE_DATA
* VECTOR_DATA

.. literalinclude:: ../../src_c/data/oneplus_data.c
   :language: C

.. literalinclude:: ../../src_c/data/oneplus_data.R
   :language: R

VALUE系
--------------

* LOGICAL_VALUE
* INTEGER_VALUE
* NUMERIC_VALUE
* CHARACTER_VALUE
* STRING_VALUE
* LIST_VALUE
* RAW_VALUE

実際には、 ``LIST_VALUE`` と ``RAW_VALUE`` は利用できず、異常系のみの実装。

.. literalinclude:: ../../src_c/value/check_value.c
   :language: C

.. literalinclude:: ../../src_c/value/check_value.R
   :language: R

