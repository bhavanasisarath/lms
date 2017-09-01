/*
 * @file
 * Faching the roles on user selects.
 */
(function ($) {
    Drupal.behaviors.roleassgin = {
        attach: function (context, settings) {
            var src = Drupal.settings.mycustomjs.base_url + "/get-roles/";           
            $('#edit-user-assign').change(function () {
                json_name = JSON.stringify($(this).val());
                $.ajax({
                    method: "POST",
                    url: src,
                    data: {data: json_name},
                    dataType: "json",
                    success: function (result) {                        
                        $("#edit-role-select").find('input:checkbox').prop('checked', false);
                        $.each(result.id, function (key, val) {
                            $("#edit-role-select").find(":checkbox[value=" + val + "]").prop('checked', true);
                        });
                    }
                });
            });

        }

    };
})(jQuery);
