/*
 *  C++ Primer, Fifth Edition, Ex 2.15

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 5, 2020
 */

/*
 *  (a) int ival = 1.01; => valid
 *  (b) int &rval1 = 1.01; => invalid
 *      error:initializer must be an object.
 *  (c) int &rval2 = ival; => valid
 *  (d) int &rval3; => invalid
 *      error:a regerence must be initialized.
 */