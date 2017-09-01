/**
 * @file
 * Trianz university Inline Editable Links javascript file. 
 */

(function ($) {
           
    Drupal.behaviors.inlineEditableLinks = {
        attach: function (context, settings) {
           
            $('.links .edit-link').click(function () {
                 
                var parent_ele = $(this).closest('.item-row');
                parent_ele.children('td.editable').each(function (index) {
                    item_value = $.trim($(this).text());
                   
                    if ($(this).hasClass('edit-text')) {
                        item_editable_field = '<input type=text value="' + item_value + '">';
                    }
                    if ($(this).hasClass('edit-textarea')) {
                        item_editable_field = '<textarea>' + item_value + '</textarea>';
                    }
                    if ($(this).hasClass('edit-list')) {
                        item_editable_field = $('#hidden_field_data').html();
                    }
                    $(this).html(item_editable_field);
                    if ($(this).hasClass('edit-list')) {
                        $(this).find('.form-select').children('option').each(function (index, element) {
                            if ($.trim($(this).text()) == item_value) {
                                key = $(this).attr('value');
                                $(this).addClass('selected-item');
                            }
                        });
                        if (typeof (key) != 'undefined') {
                            $(this).find('.form-select').val(key);
                        }

                    }
                });
                $(this).addClass('hide');
                $(this).siblings('a.delete-link').addClass('hide');
                $(this).siblings('a.update-link').removeClass('hide');
                $(this).siblings('a.cancel-link').removeClass('hide');


                return false;

            });
            $('.links .update-link').click(function () {
                $(this).addClass('hide');
                $(this).siblings('a.cancel-link').addClass('hide');
                $(this).siblings('a.delete-link').removeClass('hide');
                $(this).siblings('a.edit-link').removeClass('hide');
                changed = 0;

                var data = {};
                $(this).closest('.item-row').children('td.editable').each(function (index) {
                    if ($(this).hasClass('edit-text')) {
                        actual_value = $(this).children('input').attr('value');
                        updated_value = $(this).children('input').val();
                        if (actual_value != updated_value) {
                            changed = 1;
                        }
                        $(this).text(updated_value);
                    }
                    if ($(this).hasClass('edit-textarea')) {
                        actual_value = $(this).children('textarea').text();
                        updated_value = $(this).children('textarea').val();
                        if (actual_value != updated_value) {
                            changed = 1;
                        }
                        $(this).text(updated_value);
                    }
                    if ($(this).hasClass('edit-list')) {
                        actual_value = $(this).find('.selected-item').val();
                        updated_value = $(this).find('option:selected').val();
                        
                        if (actual_value != updated_value) {
                            changed = 1;
                            text = $(this).find('option:selected').text();
                            $(this).text(text);
                        } else {
                            text = $(this).find('.selected-item').text();
                            $(this).text(text);
                        }

                    }
                    current_item = index + 1;

                    data['column_' + current_item] = updated_value;
                });
                if (changed == 1) {
                    key_type = $(this).attr('key-data');
                    values = key_type.split('/');
                    data['type'] = values[0];
                    data['id'] = values[1];
                    
                    var URL = Drupal.settings.mycustomjs.base_url + "/update-data/";
                    json_data = JSON.stringify(data);

                    $.ajax({
                        method: "POST",
                        url: URL,
                        data: {data: json_data},
                        success: function (result) {
                            location.reload();
                        }
                    });

                }

                return false;
            });
            $('.links .delete-link').click(function () {
                var data = {};
                if (confirm('Are you sure ?')) {
                    key_type = $(this).attr('key-data');
                    values = key_type.split('/');
                    data['type'] = values[0];
                    data['id'] = values[1];
                    json_data = JSON.stringify(data);
                    //console.log(json_data);
                    var URL = Drupal.settings.mycustomjs.base_url + "/delete-data/";
                    $.ajax({
                        method: "POST",
                        url: URL,
                        data: {data: json_data},
                        success: function (data) {
                            // console.log('Selected item was deleted.');
                            location.reload();
                        }
                    });

                }

                return false;

            });

            $('.links .cancel-link').click(function () {
                $(this).addClass('hide');
                $(this).siblings('a.update-link').addClass('hide');
                $(this).siblings('a.delete-link').removeClass('hide');
                $(this).siblings('a.edit-link').removeClass('hide');

                $(this).closest('.item-row').children('td.editable').each(function (index) {
                    if ($(this).hasClass('edit-text')) {
                        actual_value = $(this).children('input').attr('value');
                        $(this).text(actual_value);
                    }
                    if ($(this).hasClass('edit-textarea')) {
                        actual_value = $(this).children('textarea').text();
                        $(this).text(actual_value);
                    }
                    if ($(this).hasClass('edit-list')) {
                        actual_value = $(this).find('.selected-item').text();
                        $(this).text(actual_value);
                    }
                });

                return false;

            });

        }
    };
})(jQuery);
