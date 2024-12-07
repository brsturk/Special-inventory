// ara

		typedef struct SPlayerStatus
		{
			TItemData			aItem[c_Inventory_Count];
			TItemData			aDSItem[c_DragonSoul_Inventory_Count];

// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
			TItemData			aSSUItem[c_Special_ItemSlot_Count];
			TItemData			aSSBItem[c_Special_ItemSlot_Count];
			TItemData			aSSSItem[c_Special_ItemSlot_Count];
			TItemData			aSSCItem[c_Special_ItemSlot_Count];
#endif


// ara


		DWORD	GetItemCount(TItemPos Cell);
		DWORD	GetItemCountByVnum(DWORD dwVnum);

// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
		DWORD	GetItemCountByUpgradeVnum(DWORD dwVnum);
		DWORD	GetItemCountByBookVnum(DWORD dwVnum);
		DWORD	GetItemCountByStoneVnum(DWORD dwVnum);
		DWORD	GetItemCountByChestVnum(DWORD dwVnum);
#endif