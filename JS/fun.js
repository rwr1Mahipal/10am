// function test() {
//   console.log("Hello");
// }
// test();

// function sum(a, b) {
//   console.log(a + b);
// }
// sum(10, 20);

// function sum1(a, b) {
//   return a + b;
// }

// // console.log(sum1(10, 200));
// const res = sum1(100, 200);
// console.log(res);

// function num(){
//     return 10;
// }
// console.log(num());

// function fact(n){
//     if(n===1) return 1;
//     return n * fact(n-1);
// }
// const res = fact(5);
// console.log(res);

// const greet = () => {
//   console.log("Hello Students");
// };
// greet();

// (function () {
//   console.log("Hello");
// })();

// const fun = function () {
//   console.log("Hello");
// };
// fun()

var a = 10;
let b = 20;
const c = 30;

function outer() {
  //   console.log("Ouer Fun: ", a);
  //   console.log("Ouer Fun: ", b);
  //   console.log("Ouer Fun: ", c);
  var a = 10;
  let b = 20;
  const c = 30;
  function inner() {
    var d = 100;
    console.log("Inner Fun: ", a);
    console.log("Inner Fun: ", b);
    console.log("Inner Fun: ", c);
  }
  console.log(d);
  
  inner();
}
outer();
