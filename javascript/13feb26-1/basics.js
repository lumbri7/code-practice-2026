/*variables 
javascript me variables ke datatypes nhi hote but jo variable ke andr value hoti hai unke types hote hai
variables ke sirf types hote hai jese=> let, const and var
values ke types(or data types in javascript (primitive))=> Numbers, String, Boolean, Undefined, null, BigInt, Symbol 
*/
let a = null; /*value type = null, metlb khali ya kuch bhi nahi
iske bare me ek jaruri baat agar ham console.log(typeof a); kare to terminal me 'object' show hoga ye ek bug hai
its not a feature, note a logic it is a historical mistake
1995 me when javascript is created in a hurry 
values type tags ke sath store ki gyi thi
null was mean to be 'no objeact'
its internal tag accidentally matched object
agar isko fix karte to millions of websites break ho sakti thi
just remeber null is not an object*/

let b; //value type => undefined mtlab abhi tak variable ki value define nhi kari ya set nahi kari

var name = "Nitinn"; // (var)it was used before 2015 not usefull nowdays it can be re-declared & updated. A global scope variable
let name2 = "Nitin"; // (let) it cannot be re-declared but can be updated. A block scope variable
const name3 = "Nitin"; // (const) it cannot be re-declared or updated. A block scope variable
name4 = "Nitin"; // we can also do this
const age = 21;
let isPassed = false;
const cgpa = 8.5;

console.log(typeof b == "object");

// let student = { //object 
//     fullName: "Nitin",
//     age: 21,
//     cgpa: 8.9,
//     isPass: true,
// };
// student["fullName"] = "Aarti" // isko ese bi likh sakte hai => student.fullName = "Aarti"
// student.age = student.age + 1; //object ki key value +1
// console.log(student.fullName); //isko ham ese bhi likh sakte hai => console.log(student["fullName"]);
// console.log(student.age);
