type Stack struct {
	items []int
}

func (s *Stack) push (item int) {
	s.items = append(s.items, item)
}


func (s *Stack) top () int {
	return s.items[len(s.items) - 1]
}

func (s *Stack) pop () {
	s.items = s.items[:len(s.items)- 1]
}

func (s *Stack) empty () bool {
	return len(s.items) == 0	
}

type MyQueue struct {
	stack1 Stack
	stack2 Stack
	
}

func Constructor() MyQueue {
	return MyQueue{}
}

func (m *MyQueue) Push(x int) {
	m.stack1.push(x)
}

func (m *MyQueue) Pop() int {
	for len(m.stack1.items) > 1 {
		m.stack2.push(m.stack1.top())
		m.stack1.pop()
	}
	last := m.stack1.top()
	m.stack1.pop()

	for !m.stack2.empty() {
		m.stack1.push(m.stack2.top())
		m.stack2.pop()
	}
	return last
}

func (m *MyQueue) Peek() int {
	for len(m.stack1.items) > 1 {
		m.stack2.push(m.stack1.top())
		m.stack1.pop()
	}
	last := m.stack1.top()
	m.stack1.pop()
	m.stack2.push(last)

	for !m.stack2.empty() {
		m.stack1.push(m.stack2.top())
		m.stack2.pop()
	}
	return last
}

func (m *MyQueue) Empty() bool {
	return m.stack1.empty()
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(x);
 * param2 := obj.Pop();
 * param3 := obj.Peek();
 * param4 := obj.Empty();
 */
