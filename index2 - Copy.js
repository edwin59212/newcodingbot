 $("#register").click(function () {
    var name = $("#name").val();
    var password = $("#password").val();
    if (name == '' || password == '') {
        alert("please check the missing field");
    }


});
