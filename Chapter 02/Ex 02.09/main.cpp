/*
 *  C++ Primer, Fifth Edition, Ex 2.9

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 5, 2020
 */

/*
 *  (1)str::cin >> int input_value;
 *     Error  :1."int" is rejected for "type name is not allowed";
 *             2."input_value" is rejected for "excepteda';'".
 *     Correct:int input_value;
 *             cin >> input_value;
 *  (2)int i = {3.14}
 *     Error  :conversion from 'double' to 'int' requires a narrowing conversion;
 *     Correct:int i = 3.14;
 *             (Maybr simplier,)
 *             int i = 3;
 *  (3)double salary = wage = 9999.99;
 *     Error  :"wage" is rejected for "identifier "wage" is undefined".
 *     Correct:double salary = 9999.99;
 *             double wage = 9999.99;
 *  (4)int i = 3.14;
 *     It is legal.
 */