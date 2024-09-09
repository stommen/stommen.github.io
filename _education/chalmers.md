---
layout: page
title: Chalmers University of Technology
description: Master of Science in Engineering Physics
img: assets/img/chalmers.png
importance: 1
category: Engineering
nav: true
nav_order: 3
display_categories: [Bachelor, Master]
horizontal: false
---
<!-- markdownlint-disable MD033 -->
<div class="education">
  {% if site.enable_education_categories and page.display_categories %}
    <!-- Display categorized projects -->
    {% for category in page.display_categories %}
    <a id="{{ category }}" href=".#{{ category }}">
      <h2 class="category">{{ category }}</h2>
    </a>
    {% assign categorized_education = site.education | where: "category", category %}
    {% assign sorted_education = categorized_education | where: "school", "Chalmers" %}
    <!-- Generate cards for each project -->
    {% if page.horizontal %}
    <div class="container">
      <div class="row row-cols-1 row-cols-md-2">
      {% for education in sorted_education %}
        {% include education_horizontal.liquid %}
      {% endfor %}
      </div>
    </div>
    {% else %}
    <div class="row row-cols-1 row-cols-md-3">
      {% for education in sorted_education %}
        {% include education.liquid %}
      {% endfor %}
    </div>
    {% endif %}
    {% endfor %}
  {% else %}
    <!-- Display projects without categories -->
    {% assign sorted_education = site.education | sort: "importance" %}
    <!-- Generate cards for each project -->
    {% if page.horizontal %}
    <div class="container">
      <div class="row row-cols-1 row-cols-md-2">
      {% for education in sorted_education %}
        {% include education_horizontal.liquid %}
      {% endfor %}
      </div>
    </div>
    {% else %}
    <div class="row row-cols-1 row-cols-md-3">
      {% for education in sorted_education %}
        {% include education.liquid %}
      {% endfor %}
    </div>
    {% endif %}
  {% endif %}
</div>
