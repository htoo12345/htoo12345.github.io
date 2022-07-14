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
            id: id,
            name: name,
            price: price,
            qty: 1
        }

        //console.log(item);

        let cart = localStorage.getItem("cart");

        if(!cart){
            var item_array = new Array();
        } else {
            var item_array = JSON.parse(cart);
        }

        var stat = false;
        $.each(item_array, function(i,v) {
            if (v.id == id) {
                v.qty++;
                stat = true;
                return false;
            }
        })

        if(stat == false){
            item_array.push(item);
        }

        localStorage.setItem("cart",JSON.stringify(item_array));
        getData();
    })

    function getData(){
        var cart = localStorage.getItem("cart");
        var data  = "";
        
        if(!cart){
            data += `<h2>Your Cart is Empty!</h2>`;
            $("#empty_div").html(data);
            $("#table_div").hide();
            $("#empty_div").show();
        } else {
            var cart_array = JSON.parse(cart);
            var total = 0;
            $.each(cart_array, function (i,v){
                total += v.qty * v.price;

                data += `<tr>
                        <td>
                            ${(i+1)}
                            <button class="btn_delete" data-index="${i}">X</button>
                        </td>
                        <td>${v.name}</td>
                        <td>$ ${numberFormat(v.price)}</td>
                        <td class="td_qty">
                            <button class="btn_add" data-index="${i}">+</button>
                            ${v.qty}
                            <button class="btn_remove" data-index="${i}">-</button>
                        </td>
                        <td>$ ${numberFormat(v.qty*v.price)}</td>
                        </tr>`
            })

            data += `<tr>
                        <td colspan = "4" id="total_td"> Total </td>
                        <td>$ ${numberFormat(total)}</td>
                    </tr>`

            $("#cart_item").html(data);
            $("#table_div").show();
            $("#empty_div").hide();
        }
    }
    // // increase qty
    // $("table").on("click", ".btn_add" , function (e) {
    //     e.preventDefault();

    //     let currentRow=$(this).closest("tr"); 
         
    //     let qty = currentRow.find("td:eq(3)").text(); // get current row 3st TD value
    
    //     alert(qty);
    // });

    // //decrease qty
    // $("table").on("click", ".btn_remove", function (e) {
    //     e.preventDefault();

    //     let current_row = $(this).closest("tr");
    //     let qty = current_row.find("td:eq(3)").text();
    //     alert(qty);
    // })

    // increase qty
    $("table").on("click", ".btn_add" ,function () {
        let index = $(this).data("index");
        //alert(index)
        let cart_string = localStorage.getItem("cart");
        let cart_array = JSON.parse(cart_string);
        cart_array[index].qty++;
        
        localStorage.setItem("cart", JSON.stringify(cart_array));
        getData();
    });

    //decrease qty
    $("table").on("click", ".btn_remove", function () {
        let index = $(this).data("index");
        
        let cart_string = localStorage.getItem("cart");
        let cart_array = JSON.parse(cart_string);
        console.log(cart_array);
        if (cart_array[index].qty > 1) {
            cart_array[index].qty--;
        } else {
            let status = confirm("Are you sure delete?");

            if (status == true) {
                cart_array.splice(index,1);
            }
        }

        localStorage.setItem("cart", JSON.stringify(cart_array));
        getData();
    });

    //remove row
    $("table").on("click", ".btn_delete", function () {
        let index = $(this).data("index");

        // let cart_string = localStorage.getItem("cart");
        // let cart_array = JSON.parse(cart_string);

        // let status = confirm("Are you sure delete?");

        // if (status == ture) {
        //     cart_array.splice(index,5);

        // }     
        
        // $(this).parent().remove();
        //$(this).closest("tr").remove();
        let data = `<h2>Your Cart is Empty!</h2>`;
        
        let cart_string = localStorage.getItem("cart");
        let cart_array = JSON.parse(cart_string);

        

        let status = confirm("Are you sure delete?");

        if (status == true) {
            cart_array.splice(index,1);
        }
        
        

        localStorage.setItem("cart", JSON.stringify(cart_array));
        getData();
    });

    function numberFormat(x) {
        return x.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ",");
    }
});