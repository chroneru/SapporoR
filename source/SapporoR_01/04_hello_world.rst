Hello World!
=================

実際にHello Worldを表示してみる。

コンパイル
------------

コンパイルはRのコマンドをつかう。

.. code-block:: bash

   R CMD SHLIB filename.c

コード
----------

.. literalinclude:: ../../src_c/helloworld/helloworld.c
   :language: C


.. blockdiag:: ../../src_diag/helloworld_R.diag

コンパイル後の.soファイルをdyn.loadで読み込み、.C、.Callで関数を実行する。


.. literalinclude:: ../../src_c/helloworld/helloworld.R
   :language: R

Cコード内では、R_NilValueを使っているが、.C関数ではNULLではなく、list()が返される。

