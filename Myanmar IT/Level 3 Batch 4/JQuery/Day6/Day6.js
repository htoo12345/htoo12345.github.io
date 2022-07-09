$(function(){
    let p = $(".myp");
    

    $("#btn_add").on("click",function(){
        $(p).addClass("active");
    })

    $("#btn_remove").on("click",function(){
        $(p).removeClass("active");
    })

    $("#btn_change").on("click",function(){
        var href = $("#gg").attr("href");
        console.log(href);
        $("#gg").attr("href", "http://facebook.com");
        console.log(href);
        // $("#gg").text("FaceBook");
        $("#gg").html("<i>FaceBook</i>")
    })

    $("input[name='answer']").on("focus",function(){
        let total = $("input[name='total']").val();
        let pay = $("input[name='pay']").val();
        var c = pay - total;
        console.log(c);
        $(this).val(c);
    })
})