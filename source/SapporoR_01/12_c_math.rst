math.h
==============

C言語ライブラリの一つ、 **Rmath.h** のインクルードで利用可能。


指数・対数
------------

* log
* log10
* log1p
* log2

指数関数、対数関数はC言語ライブラリの **math.h** 内に定義されている。
**Rmath.h** をインクルードすると **math.h** も読み込まれて利用可能。

返り値はdouble, float, long double とある。
引数は、返り値の型と同じ。

コード
------------


.. literalinclude:: ../../src_c/logarithm/pH.c
   :language: C

.. literalinclude:: ../../src_c/logarithm/pH.R
   :language: R

三角関数
------------

* cos
* sin
* tan
* acos
* asin
* atan

返り値はdouble, float, long double とある。
引数は、返り値の型と同じ。

コード
------------

.. literalinclude:: ../../src_c/trigonometric/gen_circ.c
   :language: C

.. literalinclude:: ../../src_c/trigonometric/gen_circ.R
   :language: R

.. image:: ../../src_c/trigonometric/unit_circle.png
   :scale: 20%

定数
------------

+----------------+---------------+
|定数名          |定数           |
+----------------+---------------+
|M_E             |ネイピア数     |
+----------------+---------------+
|M_LOG2E         |log2(e)        |
+----------------+---------------+
|M_LOG10E        |log10(e)       |
+----------------+---------------+
|M_LN2           |ln(2)          |
+----------------+---------------+
|M_LN10          |ln(10)         |
+----------------+---------------+
|M_PI            |pi             |
+----------------+---------------+
|M_2PI           |pi/2           |
+----------------+---------------+
|M_PI_4          |pi/4           |
+----------------+---------------+
|M_1_PI          |1/pi           |
+----------------+---------------+
|M_2_PI          |2/pi           |
+----------------+---------------+
|M_2_SQRTPI      |2/sqrt(pi)     |
+----------------+---------------+
|M_SQRT2         |sqrt(2)        |
+----------------+---------------+
|M_SQRT1_2       |1/sqrt(2)      |
+----------------+---------------+
|M_SQRT_3        |sqrt(2)        |
+----------------+---------------+
|M_SQRT_32       |sqrt(32)       |
+----------------+---------------+
|M_LOG10_2       |log10(2)       |
+----------------+---------------+
|M_SQRT_PI       |sqrt(pi)       |
+----------------+---------------+
|M_1_SQRT_2PI    |1/sqrt(2pi)    |
+----------------+---------------+
|M_SQRT_2dPI     |sqrt(2/pi)     |
+----------------+---------------+
|M_LN_2PI        |log(2*pi)      |
+----------------+---------------+
|M_LN_SQRT_PI    |log(sqrt(pi))  |
+----------------+---------------+
|M_LN_SQRT_2PI   |log(sqrt(2*pi))|
+----------------+---------------+
|M_LN_SQRT_PId2  |log(sqrt(pi/2))|
+----------------+---------------+

コード
------------

.. literalinclude:: ../../src_c/constant/return_pi.c
   :language: C

.. literalinclude:: ../../src_c/constant/return_pi.R
   :language: R

