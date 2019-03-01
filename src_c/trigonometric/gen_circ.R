
dyn.load("gen_circ.so")

init_circ <- function() {
    RES <- .Call("gen_circ")

    list(res = data.frame(x = RES[, 1], y = RES[, 2]))
}

library(ggplot2)

g <- ggplot(init_circ()$res) +
    geom_path(aes(x, y))

g
ggsave("unit_circle.png")
