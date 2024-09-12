---
layout: page
title: Gothenburg University
description: Bachelor of Science in Business and Economics
img: assets/img/gu.png
importance: 1
category:
display_categories: [Business Economics, Economics, Statistics]
horizontal: false
---

<!-- markdownlint-disable MD033 -->

<div class="education">
  {% if site.enable_categories and page.display_categories %}
    <!-- Display categorized projects -->
    {% for category in page.display_categories %}
    <a id="{{ category }}" href=".#{{ category }}">
      <h2 class="category">{{ category }}</h2>
    </a>
    {% assign categorized_courses = site.courses | where: "category", category %}
    {% assign sorted_courses = categorized_courses %}
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
    {% endfor %}
  {% endif %}
</div>
