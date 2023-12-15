const date=new Date();
//// 1 ////
// console.log(date.toDateString());
// let msec=Date.parse(date);
// console.log(msec);
// console.log(new Date(msec).toDateString());

//// 2 ////
// const months=["January","February","March","April","May","June","July","August","September","October","November","December"];

// console.log(months[date.getMonth()]);

//// 3 ////
// const days=["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"];
// console.log(days[date.getDay()]);

//// 4 ////
// console.log(date.getTime());
// // or
// console.log(Date.now());

// 5
date.setFullYear(1999);
console.log(date.toDateString());