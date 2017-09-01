(function ($) {
  Drupal.behaviors.disableStatusLinks = {
    attach: function (context, settings) {
      // Disabling the change status links if training closed.
      if ($('body.page-training-list #views-form-trainings-list-page').length > 0) {
        $("#views-form-trainings-list-page table tbody tr").each(function (index) {
          if ($(this).children('.views-field-field-status').text().trim() == 'Closed') {
            $(this).children('.views-field-nothing').children('a').each(function (i) {
              $(this).addClass('status-disabled');
              $(this).removeAttr("href");
            });
          }
        });
      }
    }
  };
})(jQuery);
