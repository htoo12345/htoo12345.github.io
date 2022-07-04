$(function(){
    $("form").on("submit", function(data){
        data.preventDefault();

        var name = $("input[name='name']").val();
        var cooking = $("#cooking:checked").val();
        var drawing = $("#drawing:checked").val();
        var writting = $("#writting:checked").val();
        var dance = $("#dance:checked").val();
        var shopping = $("#shopping:checked").val();
        var singing = $("#singing:checked").val();
        var acting = $("#acting:checked").val();
        
        let hp = new Array();

        if (cooking == "cooking") {
            //console.log(cooking);
            hp[0] = cooking;
        } 

        if (drawing == "drawing") {
            //console.log(drawing);
            hp[1] = drawing;
        }

        if (writting == "writting") {
            //console.log(writting);
            hp[2] = writting;
        }

        if (dance == "dance") {
            console.log(dance);
            hp[3] = dance;
        }

        if (shopping == "shopping") {
            console.log(shopping);
            hp[4] = shopping;
        }

        if (singing == "singing") {
            console.log(singing);
            hp[5] = singing;
        }

        if (acting == "acting") {
            console.log(acting);
            hp[6] = acting;
        }

        let hp_arr = hp.filter(Boolean);
        
        alert(`I'm ${name}.\nHoppies : ${hp_arr}`);
        
    })
})