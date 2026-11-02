
document.getElementById("form").onsubmit = function(e) {
    e.preventDefault();

    let name = document.getElementById("name").value;

    document.getElementById("msg").innerText =
        "Registration Successful! Welcome " + name;
};
