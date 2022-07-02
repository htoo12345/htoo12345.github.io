$(function(){
    $("form").on("submit", function(data){
        data.preventDefault();

        var name = $("input[name='name']").val();
        var hobbies = $("input[name='hobbies']:checked").val();
        var cooking = $("#cooking").val();
        var drawing = $("#drawing").val();
        var writting = $("#writting").val();
        var dance = $("#shopping").val();
        var singing = $("#singing").val();
        var acting = $("#acting").val();
        
        //console.log(`${name}, ${cooking}, ${drawing}, ${writting}, ${dance}, ${singing}, ${acting}`);
        var doing[5];
        doing[0] = `I am ${name}.\n`;
        if (hobbies == "cooking"){
            doing[1] += `I'm ${cooking}.\n`;
        }
        if (hobbies == "drawing"){
            doing[2] += `I'm ${drawing}.\n`;
        }
        
        alert(doing);
        console.log(doing);
    })
})