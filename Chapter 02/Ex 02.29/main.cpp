/*
 *  C++ Primer, Fifth Edition, Ex 2.29

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 6, 2020
 */

/*
 *  (a) i = ic; => legal
 *      Assign const int to int.
 *  (b) p1 = p3; => illegal
 *      "p3" is a top-level const pointer.
 *  (c) p1 = &ic; => illegal
 *      "ic" is a const int, while p1 is not a const pointer.
 *  (d) p3 = &ic; => illegal
 *      "p3" is a top-level const pointer.
 *  (e) p2 = p1; => illegal
 *      "p2" is a top-level const pointer.
 *  (f) ic = *p3; => illegal
 *      "ic" is a const int, whose value cannot be changed. 
 */