---
layout: page
title: Theses
description: My theses, bachelor's and master's (eventually)
img:
category: Theses
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->

<div class="theses>
<!-- Display projects without categories -->

{% assign sorted_theses= site.theses %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for x in sorted_theses %}
      {% include x_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
{% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for x in sorted_theses %}
      {% include x.liquid %}
    {% endfor %}
  </div>
{% endif %}
</div>
