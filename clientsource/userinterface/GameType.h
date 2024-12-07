// ara

const DWORD c_DragonSoul_Inventory_End = c_DragonSoul_Inventory_Start + c_DragonSoul_Inventory_Count;

// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
const DWORD c_Special_Inventory_Page_Size = 5*9;
const DWORD c_Special_Inventory_Page_Count = 4;
const DWORD c_Special_ItemSlot_Count = c_Special_Inventory_Page_Size * c_Special_Inventory_Page_Count;
#endif

// enum ESlotType içinde ara

	SLOT_TYPE_MALL,
	SLOT_TYPE_DRAGON_SOUL_INVENTORY,

// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	SLOT_TYPE_UPGRADE_INVENTORY,
	SLOT_TYPE_BOOK_INVENTORY,
	SLOT_TYPE_STONE_INVENTORY,
	SLOT_TYPE_CHEST_INVENTORY,
#endif

// enum EWindows içinde ara

	BELT_INVENTORY,
	GROUND,

// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	UPGRADE_INVENTORY,
	BOOK_INVENTORY,
	STONE_INVENTORY,
	CHEST_INVENTORY,
#endif

// ara

		case DRAGON_SOUL_INVENTORY:
			return cell < (DS_INVENTORY_MAX_NUM);
			break;

// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
		case UPGRADE_INVENTORY:
			return cell < c_Special_ItemSlot_Count;
			break;
		case BOOK_INVENTORY:
			return cell < c_Special_ItemSlot_Count;
			break;
		case STONE_INVENTORY:
			return cell < c_Special_ItemSlot_Count;
			break;
		case CHEST_INVENTORY:
			return cell < c_Special_ItemSlot_Count;
			break;
#endif


// ara

		case DRAGON_SOUL_INVENTORY:
			return false;

// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
		case UPGRADE_INVENTORY:
		case BOOK_INVENTORY:
		case STONE_INVENTORY:
		case CHEST_INVENTORY:
#endif