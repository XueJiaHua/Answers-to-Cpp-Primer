/*
 *  C++ Primer, Fifth Edition, Ex 2.23

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 5, 2020
 */

/*
 *  Maybe Not.
 *  Think about that:
 *  {
 *  int i = 0;
 *  int* pi = &i;
 *  int* pii = pi + 1;
 *  }
 *  pii is a pointer which is inequal to NULL, but it does not point to a valid object.
 */