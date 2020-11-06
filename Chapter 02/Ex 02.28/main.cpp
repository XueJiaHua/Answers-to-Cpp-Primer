/*
 *  C++ Primer, Fifth Edition, Ex 2.28

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 6, 2020
 */

/*
 *  (a) int i, *const cp;
 *      Define an int object named i, and a const pointer type object "cp" which points to an int type object.
 *      The dafinition of "cp" is illegal, error: const variable "cp" requires an initializer.
 *  (b) int *p1, *const p2;
 *      Define an int pointer object named p1, and a const pointer type object "p2" which points to an int type object.
 *      The dafinition of "c2" is illegal, error: const variable "c2" requires an initializer.
 *  (c) const int ic, &r = ic;
 *      Define a const int object named ic, and a const reference type object "r" which refers to an int type object.
 *      The definition of "ic" is illegal, error: const variable "ic" requires an initializer.
 *  (d) const int *const p3;
 *      Define a const pointer named "p3", which point to a const int type object.
 *      The definition of "p3" is illegal, error: const variable "p3" requires an initializer.
 *  (e) const int *p;
 *      Define a int pointer named "p", which points to a const int type object.
 */