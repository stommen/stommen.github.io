---
layout: page
title: Bachelor year 1
description: Courses during year 1 of my bachelor's degree.
img: assets/img/bsc_y1.jpeg
category: Bachelor
nav: true
nav_order: 3
display_categories:
horizontal: false
school: Chalmers
---

<!-- markdownlint-disable MD033 -->

<div class="education">
<!-- Display projects without categories -->

{% assign sorted_courses = site.courses | where: "folder", "bsc_y1_courses" %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for x in sorted_courses %}
      {% include x_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
{% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for x in sorted_courses %}
      {% include x.liquid %}
    {% endfor %}
  </div>
{% endif %}
</div>
