$(function () {
    $(".assig_group").first().slideDown();

    $("ul li a").on("click", function (e) {
        e.preventDefault();

        let current_link = $(this);
        $("ul li a").removeClass("active");
        current_link.addClass("active");

        $(".assig_group").slideUp();

        let current_link_href = current_link.attr("href");
        $(current_link_href).slideDown();
    })
})