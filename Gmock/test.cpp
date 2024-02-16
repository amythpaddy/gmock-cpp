#include "pch.h"
#include "MockWarehouse.h"
#include "Manager.h"

using ::testing::Return;
using ::testing::AtLeast;
using ::testing::AtMost;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(ManagerTest, CanOrderItem) {
	MockWarehouse warehouse;
	EXPECT_CALL(warehouse, GetItemId(1))
		.Times(AtLeast(1));
	EXPECT_CALL(warehouse, RemainingItems(1))
		.Times(AtLeast(1));
	Manager manager(&warehouse);


	EXPECT_TRUE(manager.ShouldPlaceOrder(1));
}

TEST(ManagerTest, GetWarehouseCapacity) {
	MockWarehouse warehouse;
	EXPECT_CALL(warehouse, GetItemId(1))
		.Times(AtMost(10));
	EXPECT_CALL(warehouse, RemainingItems(1))
		.Times(AtMost(10));
	Manager manager(&warehouse);


	EXPECT_EQ(manager.GetCurrentCapacity(1),50);
}