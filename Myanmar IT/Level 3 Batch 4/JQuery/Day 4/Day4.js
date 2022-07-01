$(function (){
    $("#spouse").hide();

    $("#single").on("click", function(){
        $("#spouse").hide(100);
    });

    $("#marry").on("click",function (){
        $("#spouse").show(100);
    });

    $("select[name='category']").on("change", function(){
        var select = $(this).val();
        var discount = 0;
        if(select == 1){
            discount = 15;
        } else if (select == 2){
            discount = 20;
        } else if (select == 3){
            discount = 30;
        } else if(select == 4){
            discount = 11;
        }

        $("input[name='discount']").val(discount);
    })

    $("form").on("submit",function(e){
        e.preventDefault();
        let name = $("input[name='username']").val();
        let age = $("input[name='age']").val();
        let relation = $("input[name='relation']:checked").val();
        let category = $("select[name='category']").val();
        console.log(category);
        // console.log(`${name}, ${age}, ${relation}`);

        let data="";
        // if(relation == "Marrey")
        // {
        //     var spouse = $("input[name='spouse']").val();
        //     data += `My name is ${name}. \nI'm ${age}. \nI'm ${relation}. \nI'm ${spouse}`;
        // }
        // else if(relation == "Single")
        // {
        //     data += `My name is ${name}.\n I'm ${age}.\n I'm ${relation}.`;
        // }
       // alert(data);
       // console.log(data);

        
    })
});