$(function () {
    $("#btn_download").hide();

    //get
    $.get("https://api.imgflip.com/get_memes", function (params) {
        if(params.success){
            console.log(params.data.memes)
            var meme = params.data.memes;
            var data = "";
            for (const row of meme) {
                data += `<img class="photo_meme" src="${row.url}" alt="${row.name}" data-id="${row.id}" data-name="${row.name}" data-box="${row.box_count}" data-url="${row.url}">`;
            }   
            $("#all_item").html(data);
        }
    });
    
    //selected image as show
    $("#all_item").on("click", ".photo_meme", function (para) {
        


        var url = $(this).data("url")
        var id = $(this).data("id");
        var src = $(this).attr("src");
        var box = $(this).data("box");
        var name = $(this).data("name");
        var alt = $(this).attr("alt");
        console.log(id);
        console.log(url);
        console.log(box);
        console.log(name);
        para.preventDefault();
                
        var selected_img = `<img class="selected_meme" data-url="${url}" data-id="${id}" data-name="${name}" src="${src}" alt="${alt}">`;
        
        
        $("#selected_item").html(selected_img);
                     
        var text = "";
        for (let i = 0; i < box; i++) {
            text += `<input type="text${i+1}" name="${name}${i+1}" class="input_set">`;
            $("#text_box").html(text);
        }

        $("#btn_download").hide();
    });
    
    //click btn input text
    $("#btn_click").on("click",function () {
        


        var selected_meme_name = $(".selected_meme").data("name");
        var selected_meme_url = $(".selected_meme").data("url");
        var templateID= $(".selected_meme").data("id");

        console.log(`ii = ${templateID}`);

        var input_text = $.map($(".input_set"), function (user_input){
            return {
                "text": user_input.value,
            };
        });
        
        //post
        $.post( "https://api.imgflip.com/caption_image", {
            template_id : `${templateID}`,
            username : "hellokitty445",
            password : "stawberry",
            boxes: input_text,
        }, function(resp){
            if (resp.success) {
                var edit_photo = `<img src="${resp.data.url}" data-url="${selected_meme_url}" data-name="${selected_meme_name}"/>`;
                $(".final_photo_meme").html(edit_photo);
            }
        }   
        )

        $("#btn_download").show();
    });

    //download btn
    $("#btn_download").on("click", function () {
        var url = $(".final_photo_meme img").data("url");
        var name = $(".final_photo_meme img").data("name");
        //alert(url);
        console.log(url)
        swal(
            {
                title: `${name}`,
                text: "meme photo",
                icon: `${url}`,  
                //imageSize: "350*350",
                button: "Download",              
            }
        ) ;
    })
});