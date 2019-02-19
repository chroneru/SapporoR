
dyn.load("helloworld.so")

.C("hello")

.Call("hello")

(function() {
    res <- .Call("hello")
})()
