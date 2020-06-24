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

let box_game = {

};

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
    let rand = Math.floor($('#box').height() + Math.random() * ($(window).height() - 2 * $('#box').height()));
    $('#box').css({
        'top': rand + 'px'
    });
});


function game_step(element) {
    let pos_y = element.style.top;
    let pos_x = element.style.left;
    let pos_x_new = Math.floor(element.offsetWidth + Math.random() * ($(window).width() - 2 * element.offsetWidth));
    let pos_y_new = Math.floor(element.offsetHeight + Math.random() * ($(window).height() - 2 * element.offsetHeight));
    let id = setInterval(function() { animate(); }, 1);

    function animate() {
        // When the animation stops
        if(pos_x == pos_x_new && pos_y == pos_y_new) {
            clearInterval(id);
        }
        else {
            if(pos_y != pos_y_new) {
               if(pos_y > pos_y_new) pos_y--;
               else pos_y++;
            }
            if(pos_x != pos_x_new) {
                if(pos_x > pos_x_new) pos_x--;
                else pos_x++;
            }
            // Update prev value
            $('#box').css({
                'top' : pos_y + 'px',
                'margin-left' : pos_x + 'px'
            });
        }
    }
}