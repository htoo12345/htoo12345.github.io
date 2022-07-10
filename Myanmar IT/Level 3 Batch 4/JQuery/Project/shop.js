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
        var qty = 1;

        var item = {
            id: id,
            name: name,
            price: price,
            qty: qty
        }

        console.log(item);

        let cart = localStorage.getItem("cart");

        if(!cart){
            var item_array = new Array();
            item_array.push(item);
        } else {
            var item_array = JSON.parse(cart);

            for (let i = 0; i < item_array.length; i++) {
                //const element = item_array[i];
                if (item_array[i].id === id) {
                    item_array[i].qty += qty++;
                } else {
                    var add = true;
                }
            }
        }

        if (add == true) {
            item_array.push(item);
        }


        localStorage.setItem("cart",JSON.stringify(item_array));
        getData();
    })

    function getData(){
        var cart = localStorage.getItem("cart");
        var data  = "";
        
        if(!cart){
            data += `Your Cart is Empty!`;
            $("#empty_div").html(data);
        } else {
            var cart_array = JSON.parse(cart);
            var total = 0;
            $.each(cart_array, function (i,v){
                total += v.qty * v.price;

                data += `<tr>
                        <td>${(i+1)}</td>
                        <td>${v.name}</td>
                        <td>${v.price}</td>
                        <td>${v.qty}</td>
                        <td>${v.qty*v.price}</td>
                        </tr>`
            })

            data += `<tr>
                        <td colspan = "4" id="total_td"> Total </td>
                        <td>${total}</td>
                    </tr>`

            $("#cart_item").html(data);
        }

        
    }
})