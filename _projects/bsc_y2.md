---
layout: page
title: Bachelor year 2
description: Courses during year 2 of my bachelor's degree.
img: assets/img/3.jpg
importance: 2
category: Bachelor
nav: true
nav_order: 3
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->

<div class="projects">
<!-- Display projects without categories -->

{% assign sorted_courses = site.courses %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for course in sorted_courses %}
      {% include projects_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
{% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for course in sorted_courses %}
      {% include projects.liquid %}
    {% endfor %}
  </div>
{% endif %}
</div>
