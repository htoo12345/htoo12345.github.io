$(function (){
    //Element selector
    var p = $("p");
    console.log(p);

    //class selector
    var c = $(".mname");
    console.log(c);

    var d = $(".btn");
    console.log(d);

    //id selector
    var d = $("#mname");
    console.log(d);

    // element with class
    var e = $("h2.mname");
    console.log(e);

    //first li of first ul
    var f = $("ul li:first")
    console.log(f);

    //parent child selector
    var pcs = $("#contents ul.goods li");
    console.log(pcs);

    if(d.length){
        console.log("Have");
    }
})