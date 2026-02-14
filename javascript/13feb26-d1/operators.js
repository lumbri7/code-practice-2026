//arithmatic operator in javascript


let a = 10;
let b = 5;
let c = 4.9;
let d = -8;
let e = 0;


console.log("a + b =", a + b); //it will add a and b and give the result = 15
console.log("a - b =", a - b); //it will subtract b from a and give the result = 5
console.log("a * b =", a * b); //it will multiply a and b and give the result = 50
console.log("a / b =", a / b); //it will divide a by b and give the result = 2
console.log("a % b =", a % b); //it will give the remainder when a is divided by b and give the result = 0
console.log("a ** b =", a ** b); //it will give the result of a raised to the power of b and give the result = 100000
console.log("c + d =", c + d); //it will add c and d and give the result = -3.1
console.log("c - d =", c - d); //it will subtract d from c and give the result = 12.9
console.log("c * d =", c * d); //it will multiply c and d and give the result = -39.2
console.log("c / d =", c / d); //it will divide c by d and give the result = -0.6122448979591837
console.log("c % d =", c % d); //it will give the remainder when c is divided by d and give the result = -3.1
console.log("c ** d =", c ** d); //it will give the result of c raised to the power of d and give the result = 0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001
console.log("e + a =", e + a); //it will add e and a and give the result = 10
console.log("e - a =", e - a); //it will subtract a from e and give the result = -10
console.log("e * a =", e * a); //it will multiply e and a and give the result = 0
console.log("e / a =", e / a); //it will divide e by a and give the result = 0
console.log("e % a =", e % a); //it will give the remainder when e is divided by a and give the result = 0
console.log("e ** a =", e ** a); //it will give the result of e raised to the power of a and give the result = 0



//comparison operators

let x = -10;
let z = 5;
let k = "5";
let m = 5;
let s = 5.8;
let y = "Nitin";
let w = false;
let v = true;
let u = null;
let t = undefined;

console.log("k == m =", k == m); // it will check whether the value of k is equal to the value of m but k is a string and m is a number so it will convert k to a number and then compare it with m and give the result = true
console.log("k === m =", k === m); // it will check whether the value of k is equal to the value of m and also the data type of k is equal to the data type of m or not => false
console.log("x > z =", x > z); // it will check whether x is greater than z or not => false
console.log("x < z =", x < z); // it will check whether x is less than z or not => true
console.log("x >= z =", x >= z); // it will check whether x is greater than or equal to z or not => false
console.log("x <= z =", x <= z); // it will check whether x is less than or equal to z or not => true
console.log("z == s =", z == s); // it will check whether the value of z is equal to the value of s or not => false
console.log("z === m =", z === m); // it will check whether the value of z is equal to the value of m and also the data type of z is equal to the data type of m or not => true
console.log("z != m =", z != m); // it will check whether the value of z is not equal to the value of m or not => false
console.log("z !== m =", z !== m); // it will check whether the value of z is not equal to the value of m or the data type of z is not equal to the data type of m or not => false
console.log("z != s =", z != s); // it will check whether the value of z is not equal to the value of s or not => true
console.log("z === s =", z === s); // it will check whether the value of z is equal to the value of s and also the data type of z is equal to the data type of s or not => false
console.log("z !== s =", z !== s); // it will check whether the value of z is not equal to the value of s or the data type of z is not equal to the data type of s or not => true
console.log("y == w =", y == w); // it will check whether the value of y is equal to the value of w or not => false
console.log("y != w =", y != w); // it will check whether the value of y is not equal to the value of w or not => true
console.log("y === w =", y === w); // it will check whether the value of y is equal to the value of w and also the data type of y is equal to the data type of w or not => false
console.log("y !== w =", y !== w); // it will check whether the value of y is not equal to the value of w or the data type of y is not equal to the data type of w or not => true
console.log("v == u =", v == u); // it will check whether the value of v is equal to the value of u or not => false
console.log("v != u =", v != u); // it will check whether the value of v is not equal to the value of u or not => true
console.log("v === u =", v === u); // it will check whether the value of v is equal to the value of u and also the data type of v is equal to the data type of u or not => false
console.log("v !== u =", v !== u); // it will check whether the value of v is not equal to the value of u or the data type of v is not equal to the data type of u or not => true
console.log("u == t =", u == t); // it will check whether the value of u is equal to the value of t or not => true
console.log("u != t =", u != t); // it will check whether the value of u is not equal to the value of t or not => false
console.log("u === t =", u === t); // it will check whether the value of u is equal to the value of t and also the data type of u is equal to the data type of t or not => false
console.log("u !== t =", u !== t); // it will check whether the value of u is not equal to the value of t or the data type of u is not equal to the data type of t or not => true  

//logical operators

let p = true;
let q = false;
let ab = 5;
let ba = 10;

console.log ("p && q =", p && q); // it will check whether both p and q are true or not => false
console.log("p || q =", p || q); // it will check whether either p or q is true or not => true
console.log("!p =", !p); // it will give the opposite of p => false
console.log("!q =", !q); // it will give the opposite of q => true
console.log("ab > ba && p =", ab > ba && p); // it will check whether ab is greater than ba and p is true or not => false
console.log("ab < ba || q =", ab < ba || q); // it will check whether ab is less than ba or q is true or not => true
console.log("!(ab == ba) =", !(ab == ba)); // it will check whether ab is equal to ba or not and then give the opposite of that => true
console.log("p && q =", p && q); // it will check whether both p and q are true or not => false
console.log("p || q =", p || q); // it will check whether either p or q is true or not => true
console.log("!p =", !p); // it will give the opposite of p => false
console.log("!q =", !q); // it will give the opposite of q => true  



