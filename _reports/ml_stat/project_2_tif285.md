---
title: "TIF285: Project 2"
description: |
  The Three-body Problem –
  Solving a Chaotic Motion Problem Using Deep
  Neural Networks.
img: assets/img/project2.pdf
category:
importance: 1
layout: page_w_pdf
pdf: "Project_2_Data.pdf"
folder: "MLstat"
---

<!-- markdownlint-disable MD033 -->

<p style="text-align:center; font-size:35px">The Three-body Problem –</p>

<p style="text-align:center; font-size:20px">Solving a Chaotic Motion Problem Using Deep Neural Networks</p>

<p style="text-align:center; font-size:18px">Jonatan Haraldsson <br>
                                            Oscar Stommendal</p>

<p style="text-align:center; font-size:18px; font-weight: bold">Abstract</p>

<p style="text-align:left; font-size:16px">We have explored a deep learning approach to solve the Three-body problem, using neural networks to approximate particle trajectories based on initial positions. Building on previous work by Breen et al., the main goal was to use a similar approach by training neural networks on data provided by the \( N \)-body solver Brutus <a href="https://academic.oup.com/mnras/article/494/2/2465/5823775?login=false" target="_blank" rel="noopener noreferrer">[1]</a><a href="https://arxiv.org/abs/1411.6671" target="_blank" rel="noopener noreferrer">[2]</a>. Using the Keras library in Python <a href="https://keras.io" target="_blank" rel="noopener noreferrer">[3]</a>, various neural network architectures, including fully connected-, convolutional-, and recurrent layers, were tested and compared. During training, the mean absolute error with, and without an additional energy conservation constraint was minimized. By studying predicted trajectories visually, we concluded that a model architecture similar to Breen et al. with 10-layer fully connected model best replicated the trajectories from Brutus. Despite the similarities, our model was outperformed by the model used by Breen et al., since they used a higher number of training epochs. To test how well the models handle the chaotic nature of the Three-body system, predictions with disturbed initial conditions were compared, revealing that small changes diverge over time. Lastly, adding an energy conservation constraint in the cost function improved energy conservation in predicted trajectories, however, these trajectories were visually less similar to the true trajectories from Brutus. In further investigations, the implementation can be adjusted, for instance, tuning the constraint parameter \( \alpha \) could result in better performance.

<p style="text-align:left; font-size:16px; font-style: italic; font-weight: bold">You can download the report from the icon at the top of this page.</p>
