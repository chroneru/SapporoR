Garbage Collection
====================

ガベージコレクション。要らなくなったメモリ領域を解き放つ機能のこと。
ガベージコレクションを行うモジュールをガベージコレクタという。

ガベージコレクションはRにも備わっていて、たまに動いてるらしい。
このガベージコレクションによってCコード内で作ったRのオブジェクトが消去されないように、 ``PROTECT`` 関数でオブジェクトについてRに知らせておく必要がある。

``PROTECT`` を使ったら、 ``UNPROTECT`` を使う。 ``PROTECT`` はスタックなので、 ``UNPROTECT`` では後ろからプロテクトが外れる。


コード
------------ 

.. literalinclude:: ../../src_c/garbage_collection/init_value.c
   :language: C


.. code-block:: R

   dyn.load("init_value.so")

   .Call("init_value")
   #> [1] 1.4 1.7


PROTECT
------------

``PROTECT`` は、GCからポインタを保護する。

引数は、宣言するオブジェクトのポインタを用いる。

UNPROTECT
------------

``UNPROTECT`` は、 ``PROTECT`` で保護されたポインタを解放する。

引数は、数値のみを受け取る。数値は、使用された ``PROTECT`` の分だけ使える。

