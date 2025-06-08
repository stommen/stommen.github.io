---
layout: page
title: Chalmers University of Technology
description: |
  Master of Science in Engineering Physics. During spring 2025 I attended an exchange semester at Nanyang Technological University in Singapore as part of my MSc in Physics.
img: assets/img/chalmers.png
importance: 1
category:
nav: true
nav_order: 3
display_categories: [Bachelor, Master]
horizontal: false
---

<!-- markdownlint-disable MD033 -->
<div class="school">
  {% if site.enable_categories and page.display_categories %}
    <!-- Display categorized projects -->
    {% for category in page.display_categories %}
    <a id="{{ category }}" href=".#{{ category }}">
      <h2 class="category">{{ category }}</h2>
    </a>
    {% assign categorized_school = site.schools | where: "category", category %}
    {% assign sorted_school = categorized_school | where: "school", "Chalmers" %}
    <!-- Generate cards for each project -->
    {% if page.horizontal %}
    <div class="container">
      <div class="row row-cols-1 row-cols-md-2">
      {% for x in sorted_school %}
        {% include x_horizontal.liquid %}
      {% endfor %}
      </div>
    </div>
    {% else %}
    <div class="row row-cols-1 row-cols-md-3">
      {% for x in sorted_school %}
        {% include x.liquid %}
      {% endfor %}
    </div>
    {% endif %}
    {% endfor %}
  {% endif %}
</div>
