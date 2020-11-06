/*
 *  C++ Primer, Fifth Edition, Ex 2.26

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 6, 2020
 */

/*
 *  (a) const int buf; => illegal
 *      const type object must be initialized when it is defined
 *  (b) int cnt = 0; => legal
 *  (c) const int sz = cnt; => legal
 *  (d) ++cnt; ++sz; => illegal
 *      sz is a const type object, which is avoided from being changed
 */