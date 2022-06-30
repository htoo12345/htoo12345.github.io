 $(function(){
    $(".myp").on("click",function (){
        alert("clicked the p.")
        console.log($(this));
    })

    //with callback
    //   $("button").click(function(){
    //       $("p").hide("slow",function(){
    //           alert("The p is now hidden");
    //       });
    //   });
    
    //without callback
    $("button").click(function (){
        $("p").hide(1000);
        alert("The p is now hidden");
    });

    //form submit
    $("form").on("submit",function(e){
        var username = $("input[name='username']").val();
        var age = $("input[name='age']").val();

        console.log(username);
        console.log(age);
        e.preventDefault();
    })
 })

