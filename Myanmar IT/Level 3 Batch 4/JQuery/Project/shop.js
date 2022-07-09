$(function () {
    getData();

    $(".content").first().slideDown();

    $('ul li a').on("click",function (event) { 
        var current_tab = $(this);
        $('ul li a').removeClass('active');
        current_tab.addClass('active');

        $(".content").slideUp();
        current_tab_href = current_tab.attr('href'); // #about
        $(current_tab_href).slideDown(); // $('#about')
        
        event.preventDefault();
    })

    $(".sub_AtC").on("click",function () {
        var id = $(this).data("id");
        var name = $(this).data('name');
        var price = $(this).data("price");

        var item = {
            item_id: id,
            item_name: name,
            item_price: price
        }

        console.log(item);

        let cart = localStorage.getItem("cart");

        if(!cart){
            var item_array = new Array();
        } else {
            var item_array = JSON.parse(cart)
        }

        item_array.push(item);

        localStorage.setItem("cart",JSON.stringify(item_array));
        getData();
    })

    function getData(){
        var cart = localStorage.getItem("cart");
        var data  = "";
        
        if(!cart){
            data += `Your Cart is Empty!`;
        } else {
            var cart_array = JSON.parse(cart);
            var total = 0;
            $.each(cart_array, function (i,v){
                data += `<tr>
                        <td>${(i+1)}</td>
                        <td>${v.name}</td>
                        <td>${v.price}</td>
                        <td>${v.qty}</td>
                        <td>${v.qty*v.price}</td>
                        </tr>`
            })
        }

        $("#cart_item").html(data);
    }
})