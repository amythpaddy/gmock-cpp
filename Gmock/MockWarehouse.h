#pragma once
#include "Warehouse.h"
#include "gmock/gmock.h"

class MockWarehouse :public Warehouse {
public :
	MOCK_METHOD(bool, SendPurchaseOrder, (int quantity));
	MOCK_METHOD(bool, ItemReceived, (int ItemId));
	MOCK_METHOD(int, RemainingItems, (int ItemId) );
	MOCK_METHOD(int, GetItemId, (int itemName));
	MOCK_METHOD(int, ItemId,(), (const));
};