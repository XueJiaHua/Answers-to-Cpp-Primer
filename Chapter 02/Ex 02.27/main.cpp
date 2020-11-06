/*
 *  C++ Primer, Fifth Edition, Ex 2.27

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 6, 2020
 */

/*
 *  (a) int i = -1, &r = 0; => illegal
 *      error: initial value of reference to non-const must be lvalue
 *  (b) int *const p2 = &i2; => legal
 *  (c) const int i = -1, &r = 0; => legal
 *      Pay Attention: r is a const reference
 *  (d) const int *const p3 = &i2; => legal
 *  (e) const int *p1 = &i2; => legal
 *  (f) const int &const r2; => illegal
 *      error: reference variable "r2" requires an initializer
 *  (g) const int i2 = i, &r = i; => legal
 */