---
layout: page
title: Bachelor year 3
description: Courses during year 3 of my bachelor's degree.
img: assets/img/3.jpg
importance: 2
category: Bachelor
nav: true
nav_order: 3
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->

<div class="education">
<!-- Display projects without categories -->

{% assign sorted_courses = site.courses | where: "folder", "bsc_y3_courses" %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for course in sorted_courses %}
      {% include courses_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
{% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for course in sorted_courses %}
      {% include courses.liquid %}
    {% endfor %}
  </div>
{% endif %}
</div>
