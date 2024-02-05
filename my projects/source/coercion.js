let a=7;
let b='6';
b=parseInt(b,10);// thing we need to reference 
 // we can force this to convert it into a integer 
let c=a+b; // not adding numbers together but treating the values as strings 
console.log('Answer:  ' + c); // somehow it is coersing  a from integer to a string conctating them 
// it cannot add two uncoommon things together 
//it will take numerical value and coerse it 
let d = parseInt('bob',10);
let e =isNaN(d);
console.log(d);
console.log(e);