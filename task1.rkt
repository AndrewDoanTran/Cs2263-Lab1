#lang racket

(define (fibonacci x)
  (cond 
    [(= x 0) 0]
    [(= x 1) 1]
    [else (+ (fibonacci (- x 1)) (fibonacci (- x 2)))]
  )
)


(fibonacci 10)

(define (larger-rectangle a b c d)
  (cond
    [(>(* a b) (* c d)) -1]
    [(<(* a b) (* c d)) 1]
    [else 0]
  )
)

(larger-rectangle 3 5 2 4)