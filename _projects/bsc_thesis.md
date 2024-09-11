---
title: "Bachelor’s"
description: Bachelor’s thesis in engineering physics.
img: assets/img/bsc_thesis.png
category: Theses
pdf: "bsc_thesis_gibbs_function.pdf"
importance: 1
layout: page_w_pdf
---

<!-- markdownlint-disable MD033 -->

<p style="text-align:center; font-size:35px">Gibbs objective function for modification of the optimization process in a hybrid quantum algorithm</p>

<p style="text-align:center; font-size:20px">– A numerical comparison of the performance of a Gibbs function and the expected value of the Hamiltonian as an objective function in a hybrid quantum algorithm applied to the Max-Cut problem.</p>

<p style="text-align:center; font-size:18px">William Colliander <br>
                                            Pontus Lindgren <br>
                                            Oscar Stommendal <br>
                                            Elias Svensson <br>
                                            Felix Uddén</p>

<p style="text-align:center; font-size:18px; font-weight: bold">Abstract</p>

<p style="text-align:left; font-size:16px">This study has compared a modified version of the hybrid quantum algorithm, Quantum Approximate Optimization Algorithm (QAOA), with the standard version. The standard
version of QAOA uses the expectation value of the energy, \( \langle \hat{H}_C \rangle \), as the objective function
while the modified version uses a Gibbs function, \(- \ln \left\langle e^{-\eta \hat{H}_C} \right\rangle\).
The aim was partly to investigate and reproduce the results of a previous study by <a href="https://journals.aps.org/prresearch/abstract/10.1103/PhysRevResearch.2.023074" target="_blank" rel="noopener noreferrer">Li et al.</a> and partly to investigate factors not explored in the previous paper: the effect
of different graph isomorphisms, graph sizes and depth of the quantum circuit.
The comparison was made based on the results obtained from applying the algorithm
to different cases of the Max-Cut problem. Two different performance measures were used,
success probability and approximation ratio. The different factors investigated were the
choice of final optimized parameters, the choice of the Gibbs parameter η, circuit depth,
graph size and graph isomorphism. All results were obtained by simulating the algorithms
in Python, using the code package <a href="https://arxiv.org/abs/1811.04968" target="_blank" rel="noopener noreferrer">Pennylane</a>. Given the results for the relatively small graphs considered, it is not possible to determine
whether the modified algorithm is generally better than the original one. It is
even possible that the modified version is worse than the original, especially in terms of
approximation ratio. However, there are cases where the modified algorithm outperforms
the standard version, particularly in terms of success probability.

<p style="text-align:left; font-size:16px; font-style: italic">Keywords: QAOA, Hybrid Quantum Algorithm, Objective Function, Max-Cut, Approximation Ratio, Success Probability, Optimization.</p>

<p style="text-align:left; font-size:16px; font-style: italic; font-weight: bold">You can download the thesis from the icon at the top of this page.</p>
