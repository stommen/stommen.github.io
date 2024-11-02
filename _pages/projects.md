---
layout: page
title: Projects
permalink: /projects/
description: |
  Here I have collected some of my works and reports. Note that some are written in swedish.
nav: true
nav_order: 5
display_categories: [Reports, Theses]
horizontal: false
---

<!-- markdownlint-disable MD033 -->
<!-- pages/projects.md -->

<div class="projects">
  {% if site.enable_categories and page.display_categories %}
    <!-- Display categorized projects -->
    {% for category in page.display_categories %}
    <a id="{{ category }}" href=".#{{ category }}">
      <h2 class="category">{{ category }}</h2>
    </a>
    {% assign categorized_projects = site.projects | where: "category", category %}
    {% assign sorted_projects = categorized_projects %}
    <!-- Generate cards for each project -->
    {% if page.horizontal %}
    <div class="container">
      <div class="row row-cols-1 row-cols-md-2">
      {% for x in sorted_projects %}
        {% include x_horizontal.liquid %}
      {% endfor %}
      </div>
    </div>
    {% else %}
    <div class="row row-cols-1 row-cols-md-3">
      {% for x in sorted_projects %}
        {% include x_smaller.liquid %}
      {% endfor %}
    </div>
    {% endif %}
    {% endfor %}
  {% endif %}
</div>
