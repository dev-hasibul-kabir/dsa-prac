# Heap Data Structure
## Complete Binary Tree
To understand the **Heap data structure**, one must first understand the **Complete Binary Tree** on which it is based.
A **complete binary tree** is a special type of binary tree where all the levels of the tree are filled completely except the lowest level nodes which are filled from as left as possible.

<img width="590" height="232" alt="Screenshot from 2025-08-20 14-40-50" src="https://github.com/user-attachments/assets/eb5a2a96-6ec1-447b-9300-1c7df6b0c41e" />

## Heap
A **Heap** is a complete binary tree data structure that satisfies the heap property: for every node, the value of its children is greater than or equal to its own value. Heaps are usually used to implement priority queues, where the smallest (or largest) element is always at the root of the tree.

<img width="625" height="404" alt="Screenshot from 2025-08-21 11-27-42" src="https://github.com/user-attachments/assets/e0bbdba4-a17a-430a-99a2-79b3aadc005f" />

A **Heap** is typically represented as an **array**. 
```
The root element will be at arr[0]. 
For any ith node arr[i]:
arr[(i -1) / 2] returns its parent node.
arr[(2 * i) + 1] returns its left child node.
arr[(2 * i) + 2] returns its right child node.
```





<img width="631" height="603" alt="Screenshot from 2025-08-21 11-29-16" src="https://github.com/user-attachments/assets/ec27b6f7-8182-4eec-ab1c-45b1db552805" />
