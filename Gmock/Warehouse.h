#pragma once
class Warehouse
{
public :
	virtual ~Warehouse() {}
	virtual bool SendPurchaseOrder(int quantity) = 0;
	virtual bool ItemReceived(int itemId) = 0;
	virtual int RemainingItems(int ItemId) = 0;
	virtual int GetItemId(int itemName) = 0;
	virtual int ItemId() const = 0;
};

