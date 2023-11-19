#include "pch.h"
#include "CppUnitTest.h"
#include "../CA2/Tree.h"
#include "../CA2/TreeIterator.h"
#include "../CA2/Validation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestsValidation
{
	TEST_CLASS(UnitTestsValidation)
	{
	public:
		
		TEST_METHOD(TestOneRoot)
		{
			Tree<std::string> testTree = Tree<std::string>("");
			TreeIterator<std::string> testTreeIter = TreeIterator<std::string>(&testTree);
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir>";
			Assert::IsTrue(validateXML(xml, testTreeIter));
			Assert::IsTrue(testTreeIter.node->data == "<dir>");
			Assert::IsTrue(testTreeIter.node->children->head->data->data == "<dir>");
		}
	};
}
