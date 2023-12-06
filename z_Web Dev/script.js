document.getElementById("tryit").addEventListener('mouseover', function() {
    document.getElementById("demo").innerHTML =
        "<strong>typeof</strong> undefined = " + typeof undefined + "<br>" +
        "<strong>typeof</strong> null = " + typeof null + "<br><br>" +
        "(null === undefined)? " + (null === undefined) + "<br>" +
        "(null === undefined)? " + (null == undefined);
});

document.getElementById("reload").addEventListener('mouseover', () => {
    window.location.reload();
});