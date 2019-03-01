Rmath
==============

* math.h
* Rmath.h

Rmath.hの中には、正規分布やベータ分布などの関数から、piや平方根などの定数が定義されている。

Rmath.h内で、math.hがインクルードされているため、C言語ライブラリも使用可能。
ほかにも、 ``src/nmath`` の中にある関数が動的リンクされているようで、
関数の実態については、 ``src/nmath`` を参照すること。

分布
------------

* norm
* beta
* gamma
* unif (uniform)

コード
------------

.. literalinclude:: ../../src_c/norm/choice_rnorm.c
   :language: C

.. literalinclude:: ../../src_c/norm/choice_rnorm.R
   :language: R

for文を使っているが、乱数をふっていないため定数となっている。

返り値はdouble型で、
引数は第一引数が平均値、第二引数が標準偏差。

乱数
------------

* GetRNGstate
* PutRNGstate

乱数をふるときには、 ``GetRNGstate`` と ``PutRNGstate`` を対で使う。

引数も、返り値もvoid型。

コード
------------

.. literalinclude:: ../../src_c/RNG/rnorm_c.c
   :language: C

.. literalinclude:: ../../src_c/RNG/rnorm_c.R
   :language: R

