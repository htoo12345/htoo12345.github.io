$(function () {
    $.get("https://api.imgflip.com/get_memes", function (resp) {
        if(resp.success){
            //console.log(resp.data.memes)
            var meme = resp.data.memes;
            var data = "";
            for (const row of meme) {
                data += `<img src="${row.url}" alt="${row.name}" width="100">`;
            }   
            $("#meme").html(data);
        }     
    });

    $("#btn_create").on("click",function(){
        $.post("https://api.imgflip.com/caption_image",{
            template_id : "181913649",
            username : "JhonWish",
            password : "stawberry",
            text0 : "Hi",
            text1 : "Hello"
        },function(resp){
            // console.log(resp);
            if (resp.success){
                var image = `<img src="${resp.data.url}" width="300"`; 
                $("#meme").html(image);
            }
        });
    });
});