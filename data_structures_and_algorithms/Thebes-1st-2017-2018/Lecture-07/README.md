# بسم الله الرحمن الرحيم

## Recursion
Source: https://www.topcoder.com/community/data-science/data-science-tutorials/an-introduction-to-recursion-part-1/

### Recursion
- a function is said to be recursive if it calls itself
```C
function HelloWorld(count)
{
    if(count<1)return
    print("Hello World!")
    HelloWorld(count - 1)
}
```
- Set count = 10, and call the function!

### Keyconsiderations
- Base Case: HelloWorld(0), if the function is asked to print zero times then it returns without spawning any more "HelloWorld"
- Avoids Cycles: If HelloWorld(10) called HelloWorld(10), we would end up with infinite cycle of calls, and this usually results in "stack overflow"
- Each call of the function represents a complete handling of the given task

### Why use Recursion?
- Why not just loops?
- Scenarios

### Recursion Types
- Head
- Tail

### Scenario 1: Hierarchies, Networks, or Graphs
- BST:
  - Preorder

### Binary Search Trees
- Functions inOrder, preOrder, and postOrder each receive a tree (i.e., the pointer to the root node of the tree) and traverse the tree.

- The steps for a preOrder traversal are:
  - 1. Process the value in the node
  - 2. Traverse the left subtree preOrder
  - 3. Traverse the right subtree preOrder

- The value in each node is processed as the node is visited
- After the value in a given node is processed, the values in the left subtree are processed, then those in the right subtree are processed

- The steps for a postOrder traversal are
  - 1. Traverse the left subtree postOrder .
  - 2. Traverse the right subtree postOrder .
  - 3. Process the value in the node.

- The value in each node is not printed until the values of its children are printed



### Scenario 2: Multiple Related Decisions
- When our program only has to make one decision, our approach can be fairly simple. We loop through each of the options for our decision, evaluate each one, and pick the best. 
- If we have two decisions, we can have nest one loop inside the other so that we try each possible combination of decisions. 
- However, if we have a lot of decisions to make (possibly we don’t even know how many decisions we’ll need to make), this approach doesn’t hold up.
- For example, one very common use of recursion is to solve mazes. 
  - In a good maze we have multiple options for which way to go. 
  - Each of those options may lead to new choices, which in turn may lead to new choices as the path continues to branch. 
  - In the process of getting from start to finish, we may have to make a number of related decisions on which way to turn. Instead of making all of these decisions at once, we can instead make just one decision. 
  - For each option we try for the first decision, we then make a recursive call to try each possibility for all of the remaining decisions. Suppose we have a maze like this:

![Maze](img/maze.PNG)
Image courtesy of TopCoder - Source: http://community.topcoder.com/i/education/maze.PNG

### Maze Solving Methodology
- For this maze, we want to determine the following: is it possible to get from the ‘S’ to the ‘E’ without passing through any ‘*’ characters. 
- The function call we’ll be handling is something like this: “isMazeSolveable(maze[ ][ ])”. 
- Our maze is represented as a 2 dimensional array of characters, looking something like the grid above. 
- Now naturally we’re looking for a recursive solution, and indeed we see our basic “multiple related decision” pattern here. 
- To solve our maze we’ll try each possible initial decision (in this case we start at B3, and can go to B2 or B4), and then use recursion to continue exploring each of those initial paths. 
- As we keep recursing we’ll explore further and further from the start. 
- If the maze is solveable, at some point we’ll reach the ‘E’ at G7. 
- That’s one of our base cases: if we are asked “can we get from G7 to the end”, we’ll see that we’re already at the end and return true without further recursion.
- Alternatively, if we can’t get to the end from either B2 or B4, we’ll know that we can’t get to the end from B3 (our initial starting point) and thus we’ll return false.

### Challenges
#### Challenge 01
- Our first challenge here is the nature of the input we’re dealing with. When we make our recursive call, we’re going to want an easy way to specify where to start exploring from – but the only parameter we’ve been passed is the maze itself. 
- We could try moving the ‘S’ character around in the maze in order to tell each recursive call where to start. That would work, but would be very slow because in each call we’d have to first look through the entire maze to find where the ‘S’ is. 
- A better idea would be to find the ‘S’ once, and then pass around our starting point in separate variables. This happens fairly often when using recursion: we have to use a “starter” function that will initialize any data and get the parameters in a form that will be easy to work with. Once things are ready, the “starter” function calls the recursive function that will do the rest of the work. 
- Our starter function here might look something like this:

```C
function isMazeSolveable(maze[][])
{
    declare variables x,y,startX,startY
    startX=-1
    startY=-1

    // Look through grid to find our starting point
    for each x from A to H
    {
        for each y from 1 to 8
        {
            if maze[x][y]=='S' then 
            {
                startX=x
                startY=y
            }
        }
    }

    // If we didn't find starting point, maze isn't solveable
    if startX==-1 then return false  

    // If we did find starting point, start exploring from that point
    return exploreMaze(maze[][],startX,startY)
}
```

#### Challenge 02
- We’re now free to write our recursive function exploreMaze. 
- Our mission statement for the function will be “Starting at the position (X,Y), is it possible to reach the ‘E’ character in the given maze. 
- If the position (x,y) is not traversable, then return false.” 
- Here’s a first stab at the code:
```C
function exploreMaze(maze[][],x,y)
{
    // If the current position is off the grid, then
    // we can't keep going on this path
    if y>8 or y<1 or x<'A' or x>'H' then return false

    // If the current position is a '*', then we
    // can't continue down this path
    if maze[x][y]=='*' then return false

    // If the current position is an 'E', then 
    // we're at the end, so the maze is solveable.
    if maze[x][y]=='E' then return true

    // Otherwise, keep exploring by trying each possible
    // next decision from this point.  If any of the options
    // allow us to solve the maze, then return true.  We don't
    // have to worry about going off the grid or through a wall - 
    // we can trust our recursive call to handle those possibilities
    // correctly.
    if exploreMaze(maze,x,y-1) then return true  // search up
    if exploreMaze(maze,x,y+1) then return true  // search down
    if exploreMaze(maze,x-1,y) then return true  // search left
    if exploreMaze(maze,x+1,y) then return true  // search right

    // None of the options worked, so we can't solve the maze
    // using this path.
    return false
}
```

#### Challenge 03
- Avoiding Cycles
If you’re keen eyed, you likely noticed a flaw in our code above. Consider what happens when we’re exploring from our initial position of B3. From B3, we’ll try going up first, leading us to explore B2. From there, we’ll try up again and go to B1. B1 won’t work (there’s a ‘*’ there), so that will return false and we’ll be back considering B2. Since up didn’t work, we’ll try down, and thus we’ll consider B3. And from B3, we’ll consider B2 again. This will continue on until we error out: there’s an infinite cycle.

We’ve forgotten one of our rules of thumb: we need to make sure the problem we’re considering is somehow getting smaller or simpler with each recursive call. In this case, testing whether we can reach the end from B2 is no simpler than considering whether we can reach the end from B3. Here we can get a clue from real-life mazes: if you feel like you’ve seen this place before, then you may be going in circles. We need to revise our mission statement to include “avoid exploring from any position we’ve already considered”. As the number of places we’ve considered grows, the problem gets simpler and simpler because each decision will have less valid options.

The remaining problem is, then, “how do we keep track of places we’ve already considered?”. A good solution would be to pass around another 2 dimensional array of true/false values that would contain a “true” for each grid cell we’ve already been to. A quicker-and-dirtier way would be to change maze itself, replacing the current position with a ‘*’ just before we make any recursive calls. This way, when any future path comes back to the point we’re considering, it’ll know that it went in a circle and doesn’t need to continue exploring. Either way, we need to make sure we mark the current point as visited before we make the recursive calls, as otherwise we won’t avoid the infinite cycle.

- recursive_binary_search.c