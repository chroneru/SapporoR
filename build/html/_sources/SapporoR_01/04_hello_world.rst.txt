Hello World!
=================

実際にHello Worldを表示してみる。

コンパイル
------------

コンパイルはRのコマンドをつかう。

.. code-block:: bash

   R CMD SHLIB filename.c

Cコード
----------

.. code-block:: C

   #include <R.h>
   #include <Rdefines.h>
   #include <Rinternals.h>

   SEXP hello() {
       printf("Hello World!")

       # NILSEXPを使う
       return(R_NilValue);
   }

Rコード
--------

.. blockdiag:: ../../src_diag/helloworld_R.diag

コンパイル後の.soファイルをdyn.loadで読み込み、.C、.Callで関数を実行する。

.. code-block:: R

   dyn.load("helloworld.so")

   .C("hello")
   #> Hello World!list()

   .Call("hello")
   #> Hello World!NULL

   (function() {
       res <- .Call("hello")
   })()
   #> Hello World!

Cコード内では、R_NilValueを使っているが、.C関数ではSEXPを扱わないため、NULLではなく、list()が返される。

