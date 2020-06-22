let arr = [ "car", "gay" ];

let obj = {
    perash: "gay",
    sapir: "not_gay",
    lol: {
        haha: "laugh",
        no: 10
    }
}

let post = {
    id: 0,
    content: "",
    media: "",
    likes: [ 10, 34, 23 ]
}

console.log(obj['lol']);
console.log(post);
let init_height = 0;

$(document).ready(function() {
    // Drop down menu logic
    $('.dropdown').hide();
    init_height = $('#nav').height();
    
    $('#test').hover(
        function() { // When hover
            $('.dropdown').fadeIn(500);
            $('#test').height($('#test').height() + $('.dropdown').height());
            $('#nav').height(init_height);
        },
        function() { // When hover finishes
            $('.dropdown').fadeOut(500);
            $('#test').height($('#test').height() - $('.dropdown').height());
        }
    );

    // Box game logic
    let rand = Math.random() * ($(window).height() - $('#box').height());
    $('#box').css({
        'margin-top': rand + 'px'
    });
    console.log(rand);
});
