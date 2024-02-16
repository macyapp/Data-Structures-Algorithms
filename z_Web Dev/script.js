let menu = document.getElementById("menu");
// create a new node
let li = document.createElement("li");
li.textContent = "Home";
// replace the first list item

menu.replaceChild(li, menu.firstElementChild);
