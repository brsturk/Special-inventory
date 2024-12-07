// bool CPythonPlayer::__HasItem(DWORD dwItemID) içinde

	for (int i = 0; i < c_DragonSoul_Inventory_Count; ++i)
	{
		if (dwItemID == GetItemIndex(TItemPos (DRAGON_SOUL_INVENTORY, i)))
			return true;
	}
	
// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	for (int j = 0; j < c_Special_ItemSlot_Count; ++j)
	{
		if (dwItemID == GetItemIndex(TItemPos (UPGRADE_INVENTORY, j)))
			return true;
		if (dwItemID == GetItemIndex(TItemPos (BOOK_INVENTORY, j)))
			return true;
		if (dwItemID == GetItemIndex(TItemPos (STONE_INVENTORY, j)))
			return true;
		if (dwItemID == GetItemIndex(TItemPos (CHEST_INVENTORY, j)))
			return true;
	}
#endif