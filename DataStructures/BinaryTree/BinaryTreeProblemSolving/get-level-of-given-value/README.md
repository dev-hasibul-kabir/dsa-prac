# Get node level in Binary Tree
<img width="810" height="472" alt="binary-tree" src="https://github.com/user-attachments/assets/14bf984a-269e-4846-a20c-1ae766c25c04" />


**Finds the level (depth) of a given value x in a binary tree using level-order traversal (BFS).**
- BFS (Breadth-First Search) is used to traverse the tree level by level.

- **std::pair** from the C++ STL is used to store two values together — here:

  - First → Node pointer

  - Second → Level number
    ```cpp
    Pair
    pair<int, string> p1 = make_pair(1, "One");
    pair<int, string> p2 = {2, "Two"};
    cout << p1.first << " " << p1.second;
