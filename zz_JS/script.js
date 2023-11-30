document.addEventListener("DOMContentLoaded", function() {
    const uselessLink = document.getElementById("uselessLink");
    const changeColorLink = document.getElementById("changeColorLink");

    // Adding click event to the useless link
    uselessLink.addEventListener("click", function(event) {
        event.preventDefault(); // Prevents the default action of the link
        // Add any specific action here for the useless link
    });

    // Adding click event to change the background color of the body
    changeColorLink.addEventListener("click", function(event) {
        event.preventDefault(); // Prevents the default action of the link
        document.body.style.backgroundColor = 'red'; // Changes the background color to red
    });
});

document.getElementById("reload").addEventListener('mouseover', () => {
    window.location.reload();
});
