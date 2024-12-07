// const TItemData * CPythonPlayer::GetItemData(TItemPos Cell) const içinde

	case DRAGON_SOUL_INVENTORY:
		return &m_playerStatus.aDSItem[Cell.cell];
		
// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	case UPGRADE_INVENTORY:
		return &m_playerStatus.aSSUItem[Cell.cell];
	case BOOK_INVENTORY:
		return &m_playerStatus.aSSBItem[Cell.cell];
	case STONE_INVENTORY:
		return &m_playerStatus.aSSSItem[Cell.cell];
	case CHEST_INVENTORY:
		return &m_playerStatus.aSSCItem[Cell.cell];
#endif

// void CPythonPlayer::SetItemData(TItemPos Cell, const TItemData & c_rkItemInst) içinde

	case DRAGON_SOUL_INVENTORY:
		m_playerStatus.aDSItem[Cell.cell] = c_rkItemInst;
		break;
		
// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	case UPGRADE_INVENTORY:
		m_playerStatus.aSSUItem[Cell.cell] = c_rkItemInst;
		break;
	case BOOK_INVENTORY:
		m_playerStatus.aSSBItem[Cell.cell] = c_rkItemInst;
		break;
	case STONE_INVENTORY:
		m_playerStatus.aSSSItem[Cell.cell] = c_rkItemInst;
		break;
	case CHEST_INVENTORY:
		m_playerStatus.aSSCItem[Cell.cell] = c_rkItemInst;
		break;
#endif

// DWORD CPythonPlayer::GetItemCountByVnum(DWORD dwVnum) içinde

	for (int i = 0; i < c_Inventory_Count; ++i)
	{
		const TItemData & c_rItemData = m_playerStatus.aItem[i];
		if (c_rItemData.vnum == dwVnum)
		{
			dwCount += c_rItemData.count;
		}
	}
	
// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	for (int i = 0; i < c_Special_ItemSlot_Count; ++i)
	{
		const TItemData& c_rItemDataUpgrade = m_playerStatus.aSSUItem[i];
		const TItemData& c_rItemDataBook = m_playerStatus.aSSBItem[i];
		const TItemData& c_rItemDataStone = m_playerStatus.aSSSItem[i];
		const TItemData& c_rItemDataChest = m_playerStatus.aSSCItem[i];
		if (c_rItemDataBook.vnum == dwVnum)
		{
			dwCount += c_rItemDataBook.count;
		}
		if (c_rItemDataStone.vnum == dwVnum)
		{
			dwCount += c_rItemDataStone.count;
		}
		if (c_rItemDataUpgrade.vnum == dwVnum)
		{
			dwCount += c_rItemDataUpgrade.count;
		}
		if (c_rItemDataChest.vnum == dwVnum)
		{
			dwCount += c_rItemDataChest.count;
		}

	}
#endif

// uygun yere ekle

#ifdef ENABLE_SPECIAL_STORAGE
DWORD CPythonPlayer::GetItemCountByUpgradeVnum(DWORD dwVnum)
{
	DWORD dwCount = 0;
	for (int i = 0; i < c_Special_ItemSlot_Count; ++i)
	{
		const TItemData & c_rItemData = m_playerStatus.aSSUItem[i];
		if (c_rItemData.vnum == dwVnum)
		{
			dwCount += c_rItemData.count;
		}
	}

	return dwCount;
}

DWORD CPythonPlayer::GetItemCountByBookVnum(DWORD dwVnum)
{
	DWORD dwCount = 0;
	for (int i = 0; i < c_Special_ItemSlot_Count; ++i)
	{
		const TItemData & c_rItemData = m_playerStatus.aSSBItem[i];
		if (c_rItemData.vnum == dwVnum)
		{
			dwCount += c_rItemData.count;
		}
	}

	return dwCount;
}

DWORD CPythonPlayer::GetItemCountByStoneVnum(DWORD dwVnum)
{
	DWORD dwCount = 0;
	for (int i = 0; i < c_Special_ItemSlot_Count; ++i)
	{
		const TItemData & c_rItemData = m_playerStatus.aSSSItem[i];
		if (c_rItemData.vnum == dwVnum)
		{
			dwCount += c_rItemData.count;
		}
	}

	return dwCount;
}

DWORD CPythonPlayer::GetItemCountByChestVnum(DWORD dwVnum)
{
	DWORD dwCount = 0;
	for (int i = 0; i < c_Special_ItemSlot_Count; ++i)
	{
		const TItemData & c_rItemData = m_playerStatus.aSSCItem[i];
		if (c_rItemData.vnum == dwVnum)
		{
			dwCount += c_rItemData.count;
		}
	}

	return dwCount;
}
#endif