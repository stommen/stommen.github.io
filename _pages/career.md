---
layout: page
title: Career
permalink: /career/
description: |
  Here I have collected my working experiences, from simple summer work to
  recent, more engineering-like, employment.
nav: true
nav_order: 3
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->
<!-- pages/projects.md -->
<div class="career">
{% if site.enable_career_categories and page.display_categories %}
  <!-- Display categorized projects -->
  {% for category in page.display_categories %}
  <a id="{{ category }}" href=".#{{ category }}">
    <h2 class="category">{{ category }}</h2>
  </a>
  {% assign categorized_career = site.career | where: "category", category %}
  {% assign sorted_career = categorized_career | sort: "importance" %}
  <!-- Generate cards for each project -->
  {% if page.horizontal %}
  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for x in sorted_career %}
      {% include x_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
  {% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for x in sorted_career %}
      {% include x.liquid %}
    {% endfor %}
  </div>
  {% endif %}
  {% endfor %}

{% else %}

<!-- Display work without categories -->

{% assign sorted_career = site.career | sort: "importance" %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for x in sorted_career %}
      {% include x_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
  {% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for x in sorted_career %}
      {% include x_smaller.liquid %}
    {% endfor %}
  </div>
  {% endif %}
{% endif %}
</div>
