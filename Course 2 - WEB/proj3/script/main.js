let arr = [ "car", "gay" ];

let obj = {
    perash: "gay",
    sapir: "not_gay",
    lol: {
        haha: "laugh",
        no: 10
    }
}

// Object
let post = {
    id: 0,
    content: "My post",
    media: "my_image.png",
    likes: [ 10, 34, 23 ],
    comments: {
        'user1': {
            content: 'My Comment'
        },
        'user2': {
            content: 'My Comment'
        }
    }
}

// Accessing a key in JS
console.log(post['content']);
console.log(post.content);
console.log(post.likes);
console.log(post.comments.user1.content);

let box_game = {

};

console.log(obj['lol']);
console.log(post);
let init_height = 0;

//Better not to use var as a standard thing
let sidebarposition = false;

/**
 * A function that runs only after the HTML document has been loaded fully
 * Used to retrieve data about element after they are present in the document to avoid bugs
 */
$(document).ready(function() {
    // $('element').some_function_or_property_of_that_element(); -> <element> </element>
    // $('#some_id').some_function_or_property_of_that_element(); -> <element id="some_id"> </element>
    // $('.some_class').some_function_or_property_of_that_element(); -> <element class="some_class"> </element>

    // Drop down menu logic
    $('#sidebar').hide();
    $('.dropdown').hide();
    init_height = $('#nav').height(); // Getting a property
    
    $('#test').hover( // Running a function
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
    let rand_x = Math.floor(Math.random() * ($(window).height() - 2 * $('#box').height()));
    let rand_y = Math.floor(Math.random() * ($(window).width() - 2 * $('#box').width()));
    $('#box').css({
        'margin-top': rand_x + 'px',
        'margin-left': rand_y + 'px'
    });

    //Bringing out sidebar on click
    $('#nav_menu_icon').click(
        () => { $('#sidebar').animate({width: 'toggle'}, 500);
            if(!sidebarposition){
                $('#nav_toggle').attr({src: "images/OpenBarMenuIcon.png", alt:"menu icon"});
                sidebarposition = true; 
            }
            else{
                $('#nav_toggle').attr({src: "images/MenuIcon.png", alt:"menu icon"});
                sidebarposition = false;
            }
        }
    );
    
    //Switching colour on menu icon when hover
    $('#nav_toggle').hover(
        () => { // Mouse in
            $('#nav_toggle').css({ opacity: '0.5'});
        }, () => { // Mouse out
            $('#nav_toggle').css({ opacity: '1'});
        }
    );

    let clicked = true;
    $('#box').click(function() {
        // What happens when you click
        if(clicked) {
            $('#box').animate({width: '100px', height: '100px'}, 500);
            clicked = false;
        }
        else {
            $('#box').animate({width: '50px', height: '50px'}, 500);
            clicked = true;
        }
    });
    
    //Switching colour on menu icon when sidebar is open
});


function game_step(element) {
    let pos_y = element.style.marginTop;
    let pos_x = element.style.marginLeft;

    // Change pos_x, pos_y to numbers
    if(typeof pos_y == 'string' && pos_y.indexOf('px') != -1) {
        pos_y = parseInt(pos_y.substring(0, pos_y.indexOf('px')));
    }
    if(typeof pos_x == 'string' && pos_x.indexOf('px') != -1) {
        pos_x = parseInt(pos_x.substring(0, pos_x.indexOf('px')));
    } else pos_x = 0;


    let pos_x_new = Math.floor(Math.random() * ($(window).width() - 2 * element.offsetWidth));
    let pos_y_new = Math.floor(Math.random() * ($(window).height() - 2 * element.offsetHeight));
    let step_x = 0, step_y = 0;
    let dis_x = pos_x_new - pos_x;
    let dis_y = pos_y_new - pos_y;
    let distance = Math.sqrt(dis_x * dis_x + dis_y * dis_y);
    step_x = dis_x / distance;
    step_y = dis_y / distance;

    
    let id = setInterval(function() { animate(); }, 1);
    function animate() {
        // When the animation stops
        if(Math.floor(pos_x) == pos_x_new && Math.floor(pos_y) == pos_y_new) {
            clearInterval(id);
        }
        else {
            if(Math.floor(pos_y) != pos_y_new) pos_y += step_y;
            if(Math.floor(pos_x) != pos_x_new) pos_x += step_x;

            // Update prev value
            $('#box').css({
                'margin-top' : pos_y + 'px',
                'margin-left' : pos_x + 'px'
            });
        }
    }
}