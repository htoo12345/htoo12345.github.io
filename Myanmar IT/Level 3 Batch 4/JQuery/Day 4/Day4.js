$(function (){
    $("#spouse").hide();

    $("#single").on("click", function(){
        $("#spouse").hide(100);
    });

    $("#marry").on("click",function (){
        $("#spouse").show(100);
    });

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