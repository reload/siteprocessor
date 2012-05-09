jQuery(document).ready(function($) {
  //protect against errors on non gallery pages
  if(!$('#galleriffic-container').length){
    return;
  }
  // We only want these styles applied when javascript is enabled
  $('div.content').css('display', 'block');

  // Initially set opacity on thumbs and add
  // additional styling for hover effect on thumbs
  var onMouseOutOpacity = 0.67;
  $('#thumbs ul.thumbs li, div.navigation a.pageLink').opacityrollover({
          mouseOutOpacity:   onMouseOutOpacity,
          mouseOverOpacity:  1.0,
          fadeSpeed:         'fast',
          exemptionSelector: '.selected'
  });
  var numThumbs=Math.floor($("#galleriffic-container #thumbs").width()/140);

  // Initialize Advanced Galleriffic Gallery
  Drupal.gallery = $('#galleriffic-container #thumbs').galleriffic({
          delay:                     2500,
          numThumbs:                 numThumbs,
          preloadAhead:              10,
          enableTopPager:            false,
          enableBottomPager:         false,
          imageContainerSel:         '#galleriffic-container #slideshow',
          controlsContainerSel:      '#galleriffic-container #controls',
          captionContainerSel:       '#galleriffic-container #caption',
          loadingContainerSel:       '#galleriffic-container #loading',
          renderSSControls:          true,
          renderNavControls:         true,
          playLinkText:              Drupal.settings.siteprocessor_gallery.playLinkText,
          pauseLinkText:             Drupal.settings.siteprocessor_gallery.pauseLinkText,
          prevLinkText:              Drupal.settings.siteprocessor_gallery.prevLinkText,
          nextLinkText:              Drupal.settings.siteprocessor_gallery.nextLinkText,
          nextPageLinkText:          Drupal.settings.siteprocessor_gallery.nextPageLinkText,
          prevPageLinkText:          Drupal.settings.siteprocessor_gallery.prevPageLinkText,
          enableHistory:             true,
          autoStart:                 false,
          syncTransitions:           true,
          defaultTransitionDuration: 900,
          onSlideChange:             function(prevIndex, nextIndex) {
                  // 'this' refers to the gallery, which is an extension of $('#thumbs')
                  this.find('ul.thumbs').children()
                          .eq(prevIndex).fadeTo('fast', onMouseOutOpacity).end()
                          .eq(nextIndex).fadeTo('fast', 1.0);

                  // Update the photo index display
                  this.parent().find('div.photo-index')
                          .html((nextIndex+1) +' of '+ this.data.length + ' photos');
          },
          onPageTransitionOut:       function(callback) {
                  this.fadeTo('fast', 0.0, callback);
          },
          onPageTransitionIn:        function() {
                  var prevPageLink = this.find('a.prev').css('visibility', 'hidden');
                  var nextPageLink = this.find('a.next').css('visibility', 'hidden');

                  // Show appropriate next / prev page links
                  if (this.displayedPage > 0)
                          prevPageLink.css('visibility', 'visible');

                  var lastPage = this.getNumPages() - 1;
                  if (this.displayedPage < lastPage)
                          nextPageLink.css('visibility', 'visible');

                  this.fadeTo('fast', 1.0);
          }
  });

  /**************** Event handlers for custom next / prev page links **********************/

  Drupal.gallery.find('a.prev').click(function(e) {
          Drupal.gallery.previousPage();
          e.preventDefault();
  });

  Drupal.gallery.find('a.next').click(function(e) {
          Drupal.gallery.nextPage();
          e.preventDefault();
  });


  /****Toggle size of gallery******/
  Drupal.gallery.parent().find('a.togglesize').click(function(e) {
          
          if($("#galleriffic-container").hasClass('embedded')){
            var newWidth=928;
            var hasClass=true;
          }
          else{
            var newWidth=613;
            var hasClass=false;
          }
          $("#galleriffic-container").animate({'width':newWidth},'slow',null,function(){
            if(hasClass){
              $("#galleriffic-container").removeClass('embedded');
            }
            else {
              $("#galleriffic-container").addClass('embedded');
            }
            Drupal.gallery.numThumbs=Math.floor($("#galleriffic-container #thumbs").width()/150);
            Drupal.gallery.rebuildThumbs();
          });
          e.preventDefault();
  });


  /****************************************************************************************/

  /**** Functions to support integration of galleriffic with the jquery.history plugin ****/

  // PageLoad function
  // This function is called when:
  // 1. after calling $.historyInit();
  // 2. after calling $.historyLoad();
  // 3. after pushing "Go Back" button of a browser
  function pageload(hash) {
          // alert("pageload: " + hash);
          // hash doesn't contain the first # character.
          if(hash) {
                  $.galleriffic.gotoImage(hash);
          } else {
                  Drupal.gallery.gotoIndex(0);
          }
  }

  // Initialize history plugin.
  // The callback is called at once by present location.hash. 
  $.historyInit(pageload, "advanced.html");

  // set onlick event for buttons using the jQuery 1.3 live method
  $("a[rel='history']").live('click', function(e) {
          if (e.button != 0) return true;

          var hash = this.href;
          hash = hash.replace(/^.*#/, '');

          // moves to a new page. 
          // pageload is called at once. 
          // hash don't contain "#", "?"
          $.historyLoad(hash);

          return false;
  });

  /****************************************************************************************/
});
