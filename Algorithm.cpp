#include <iostream>

int index = 7;

// 하나의 노드 정보를 선언합니다.
struct Node
{
	int data;
	// 자기 자신을 가리키는 구조체 포인터 
	Node * LeftChild;
	Node * RightChild;
};

// 전위 순회
void Preorder(Node * pointer)
{
	 if (pointer)
	 {
		 std::cout << pointer->data << " ";
		 Preorder(pointer->LeftChild);
		 Preorder(pointer->RightChild);
	 }

	 // 루트 노드 -> 왼쪽 하위 노드 -> 오른쪽 하위 노드
	 // 1 2 4 5 3 6 7
	 // 재귀 함수로 자기 자신을 호출합니다.
}

// 중위 순회



// 후위 순회



int main()
{ 
	struct Node node[8];

	for (int i = 1; i <= index; i++)
	{
		node[i].data = i;
		node[i].LeftChild = nullptr;
		node[i].RightChild = nullptr;
	}

	for (int i = 1; i <= index; i++)
	{
		if (i % 2 == 0)
		{
			node[i / 2].LeftChild = &node[i];
		}
		else
		{
			node[i / 2].RightChild = &node[i];
		}
	}

	Preorder(&node[1]);

	return 0;
}