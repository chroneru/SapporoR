NEW系
=========

* NEW_LOGICAL
* NEW_INTEGER
* NEW_NUMERIC
* NEW_CHARACTER
* NEW_COMPLEX
* NEW_LIST
* NEW_STRING
* NEW_RAW

NEW系は、allocVector関数で書かれていることもある。
ポインタの宣言に使う。

引数は、数値で、宣言する要素数のこと。

コード
--------

.. literalinclude:: ../../src_c/new/return_value.c
   :language: C

.. literalinclude:: ../../src_c/new/return_value.R
   :language: R

文字列の代入は、mkCharを利用する必要がある。

AS系
===========

* AS_LOGICAL
* AS_INTEGER
* AS_NUMERIC
* AS_CHARACTER
* AS_COMPLEX
* AS_VECTOR
* AS_LIST
* AS_RAW

AS系は、coerceVector関数で書かれていることもある。
型変換を行う。

引数は、ポインタ

コード
---------

.. literalinclude:: ../../src_c/as/coerce.c
   :language: C

.. literalinclude:: ../../src_c/as/coerce.R
   :language: R

IS系
==========

* IS_LOGICAL
* IS_INTEGER
* IS_NUMERIC
* IS_CHARACTER
* IS_COMPLEX

IS系は、型をチェックする。

引数は、ポインタ

コード
-----------

.. literalinclude:: ../../src_c/is/check.c
   :language: C

.. literalinclude:: ../../src_c/is/check.R
   :language: R

今回は、IS系マクロの実態である ``TYPEOF(x) == SEXPTYPE`` を利用している。

もちろん、IS系も利用可能。

.. literalinclude:: ../../src_c/is/check_2.c
   :language: C

.. literalinclude:: ../../src_c/is/check_2.R
   :language: R


