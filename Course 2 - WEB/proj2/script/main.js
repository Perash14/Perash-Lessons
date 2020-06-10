var is_shown = false;
var marg = 0;

function FillData() {
    var element = document.getElementById("just_wait");
    if (!is_shown) {
        element.innerHTML = "Hahahahahahah!";
        element.style.color = "#00ff00";
        element.style.display = "block";
        is_shown = true;
        console.log(is_shown);
    } else {
        is_shown = false;
        element.style.display = "none";
        marg += 10;
        element.style.marginLeft = marg;
        console.log(is_shown);
    }
}

function addToBoxClass(element) {
    if(!element.classList.contains("blue")) {
        element.classList.add("blue");
    }
    else {
        element.classList.remove("blue");
    }
}