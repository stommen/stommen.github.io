---
layout: page
title: Career
permalink: /career/
description: |
  This page contains information about my work experience, including everything from simple summer work to recent, more engineering-like, employment. Currently, I am a research assistant at Chalmers University of Technology, where I work with experimental superconducting quantum computing in the 202Q-lab, hoping to continue as a PhD student in the near future.
  <br><br>
  The timeline below is sorted in reverse chronological order. Click on the cards to expand them and see more information about each work experience, including my responsibilities, the technologies I used, and recommendation letters from my supervisors.
nav: true
nav_order: 3
display_categories:
horizontal: false
---

<!-- markdownlint-disable MD033 -->
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

{% assign sorted_career = site.career | sort: "start_date" | reverse %}

  <div class="career-timeline-wrap">
    <ol class="career-timeline">
    {% for x in sorted_career %}
      {% include career_timeline_card.liquid %}
    {% endfor %}
    </ol>
  </div>
{% endif %}
</div>
