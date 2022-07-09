$(function(){
    var myp = $(".myp");
    var box = $(".box")

    //hide / show
    $(".hide").on("click",function(){
        myp.hide("slow");
    })

    $(".show").on("click",function(){
        myp.show("slow");
    })

    $(".toggle").on("click",function(){
        myp.toggle("slow");
    })

    //fading
    $(".fateout").on("click",function(){
        myp.fadeOut();
    })

    $(".fatein").on("click",function(){
        myp.fadeIn();
    })

    $(".fatetoggle").on("click",function(){
        myp.fadeToggle();
    })

    $(".fateto").on("click",function(){
        myp.fadeTo("fast",0.1);
    })

    //sliding
    $(".slidedown").on("click",function() {
        $(myp).slideDown();
    })

    $(".slideup").on("click",function() {
        $(myp).slideUp();
    })

    $(".slidetoggle").on("click",function() {
        $(myp).slideToggle();
    })

    //animations
    $(".animation").on("click",function(){
        $(box).animate({
            left:'250px',
            height:'+=10px',
            width:'+=10px'
        },"slow");
    })

    $(".stop").on("click",function(){
        $(box).stop();  
    })
    
})