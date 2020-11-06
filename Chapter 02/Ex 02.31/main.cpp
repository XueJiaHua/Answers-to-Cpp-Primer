/*
 *  C++ Primer, Fifth Edition, Ex 2.31

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 6, 2020
 */

/*
 *  (1) r1 = v1; => legal
 *      the top-level const was ignored
 *  (2) p1 = p2; => illegal
 *      "p2" have the low-level const, which cannot be ignored
 *  (3) p2 = p1; => legal
 *      nothing happened with const
 *  (4) p1 = p3; => legal
 *      the top-level const was ignored
 *  (5) p3 = p1; => illegal
 *      "p3" have the top-level const, whcih means it cannot be changed
 */