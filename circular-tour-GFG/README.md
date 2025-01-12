# [Circular Tour Problem](https://www.geeksforgeeks.org/problems/circular-tour-1587115620/1)

## Problem Description

You are given two integer arrays `gas` and `cost` representing a circular route of gas stations. Each station has a certain amount of gas available (`gas[i]`), and it costs `cost[i]` amount of gas to travel to the next station. Your task is to determine the starting gas station's index from which you can travel around the circuit once in a clockwise direction without running out of gas.

If there exists a solution, it is guaranteed to be unique. If no solution exists, return `-1`.

## Problem Constraints

- `1 ≤ gas.length, cost.length ≤ 10^5`
- `1 ≤ gas[i], cost[i] ≤ 10^5`

## Input Format

- `gas[]`: An array where `gas[i]` represents the amount of gas at the `i`th station.
- `cost[]`: An array where `cost[i]` represents the cost of gas to travel from the `i`th station to the `(i+1)`th station.

## Output Format

- Return the index of the starting gas station from where the journey can be completed.
- If no such station exists, return `-1`.

## Example 1

**Input:**

```cpp
gas = [4, 6, 7, 4]
cost = [6, 5, 3, 5]
