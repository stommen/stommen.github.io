---
layout: page
title: Astrophysics
description: Reports as part of the RRY125-course at Chalmers.
img: assets/img/mapofthemilkyway.jpeg
category: Reports
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->
<p>Report as part of the <a href="https://stommen.github.io/courses/rry125/" target="_blank" rel="noopener noreferrer">RRY125-course</a> at Chalmers.<p>

<div class="reports>
<!-- Display projects without categories -->

{% assign sorted_reports= site.reports %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for x in sorted_reports %}
      {% include x_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
{% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for x in sorted_reports %}
      {% include x.liquid %}
    {% endfor %}
  </div>
{% endif %}
</div>
