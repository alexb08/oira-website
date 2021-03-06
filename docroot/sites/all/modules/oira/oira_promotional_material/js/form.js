(function($){
    Drupal.behaviors.tool_form_submit = {
        attach: function(context, settings) {
            $('#hwc-practical-tool-menu-tools-form').once('tool_form_submit', function(){
                var $form = $('#hwc-practical-tool-menu-tools-form');
                $form.find('input[type=checkbox]').click(function(){
                    $form.submit();
                });
                $form.find('select').change(function(){
                    $form.submit();
                });
                $form.find('input[type=text]').focusout(function(){
                    $form.submit();
                });
            });
        }
    }
    Drupal.behaviors.tool_form_toggle_facets = {
        attach: function(context, settings) {
            $('#hwc-practical-tool-menu-tools-form').once('tool_form_toggle_facets', function(){
                $('.form-checkboxes.search-facet-field').hide();
                $('.form-checkboxes.search-facet-field').has('input:checked').show();
                $('.form-checkboxes.search-facet-field').siblings('label').on('click', function() {
                    var $checkboxes = $(this).parent().find('.form-checkboxes.search-facet-field');
                    if ($checkboxes.is(':visible')) {
                        $checkboxes.slideUp();
                        $(this).removeClass('area-shown');
                    }
                    else {
                        $(this).addClass('area-shown');
                        $checkboxes.slideDown();
                    }
                });
            });

        }
    }
})(jQuery);
