/*
 *  C++ Primer, Fifth Edition, Ex 2.21

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 5, 2020
 */

/*
 *  (a) double* dp = &i; => illegal
 *      error:A value of type "int*" cannot be used to initialize an entity of type "double*".
 *      The type of the pointer and the object to which the pointer points must match.
 *  (b) int* ip = i; => illegal
 *      error:A value of type "int" cannot be used to initialize an entity of type "int*".
 *  (c) int* p = &i; => ligal
 */