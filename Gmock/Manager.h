#pragma once
#include "Warehouse.h"

class Manager {
	Warehouse* warehouse;

public:
	Manager(Warehouse* warehouse) : warehouse(warehouse) {}
	bool ShouldPlaceOrder(int itemName) {
		int itemId = 1;
		warehouse->GetItemId(itemName);
		
		if ( warehouse->RemainingItems(itemId)<50)
			return true;
		return false;
	}

	int GetCurrentCapacity(int itemId) {
		//function checks current remaining items for all the items in warehouse
		int capacity = 0;
		for (int i = 0; i < 10; i++) {
			//get itemid from db
			warehouse->GetItemId(itemId);
			//this id will e used to get the capacity from db
			warehouse->RemainingItems(itemId);
				capacity = capacity + 5;
		}
		
		return capacity;
	}


};