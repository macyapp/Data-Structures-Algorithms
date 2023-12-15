const date=new Date();
console.log(date.toDateString());
let msec=Date.parse(date);
console.log(msec);
console.log(new Date(msec).toDateString())