様々な関数
================

Rdefines.hに含まれるマクロのほか、Rinternals.hなどのほかのヘッダーファイルにもマクロが用意されている。

いずれはすべてを扱いたいが、いくつかの関数にしぼって紹介することにする。

length
----------------

* length

ベクトルの要素数を取得する。返り値は、構造体vecsxpの要素で整数値のlengthにアクセスしたものとなる。

引数は、ポインタ。

コード
---------------

.. literalinclude:: ../../src_c/length/return_length.c
   :language: C

.. literalinclude:: ../../src_c/length/return_length.R
   :language: R

ncols, nrows
---------------

* ncols
* nrows

返り値として、int型を返す。

引数は、ポインタ。

コード
--------------

.. literalinclude:: ../../src_c/row_col/return_cr.c
   :language: C

.. literalinclude:: ../../src_c/row_col/return_cr.R
   :language: R

mkChar
---------------

* mkChar

文字列を生成する。文字列を直接あつかうのはポインタが絡むため面倒だが、SEXPを返してくれる便利な関数。


コード
--------------

.. literalinclude:: ../../src_c/mkChar/init_msg.c
   :language: C

.. literalinclude:: ../../src_c/mkChar/init_msg.R
   :language: R

