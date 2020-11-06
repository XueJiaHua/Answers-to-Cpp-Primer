/*
 *  C++ Primer, Fifth Edition, Ex 2.30

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 6, 2020
 */

/*
 *  const int v2 = 0;
 *  int v1 = v2;
 *  int *p1 = &v1, &v2 = v1;
 *  const int *p2 = &v2, *const p3 = &i, &r2 = v2;
 *  => v2: top-level const
 *     p2: low-level const
 *     p3: top-level const
 *     r2: low-level const
 */