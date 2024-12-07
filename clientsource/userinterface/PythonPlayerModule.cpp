// PyObject * playerGetItemCountByVnum(PyObject* poSelf, PyObject* poArgs)
// bul ve üstüne ekle

#ifdef ENABLE_SPECIAL_STORAGE
PyObject * playerGetItemCountByUpgradeVnum(PyObject* poSelf, PyObject* poArgs)
{
	int ivnum;
	if (!PyTuple_GetInteger(poArgs, 0, &ivnum))
		return Py_BuildException();

	int ItemNum = CPythonPlayer::Instance().GetItemCountByUpgradeVnum(ivnum);
	return Py_BuildValue("i", ItemNum);
}

PyObject * playerGetItemCountByBookVnum(PyObject* poSelf, PyObject* poArgs)
{
	int ivnum;
	if (!PyTuple_GetInteger(poArgs, 0, &ivnum))
		return Py_BuildException();

	int ItemNum = CPythonPlayer::Instance().GetItemCountByBookVnum(ivnum);
	return Py_BuildValue("i", ItemNum);
}

PyObject * playerGetItemCountByStoneVnum(PyObject* poSelf, PyObject* poArgs)
{
	int ivnum;
	if (!PyTuple_GetInteger(poArgs, 0, &ivnum))
		return Py_BuildException();

	int ItemNum = CPythonPlayer::Instance().GetItemCountByStoneVnum(ivnum);
	return Py_BuildValue("i", ItemNum);
}

PyObject * playerGetItemCountByChestVnum(PyObject* poSelf, PyObject* poArgs)
{
	int ivnum;
	if (!PyTuple_GetInteger(poArgs, 0, &ivnum))
		return Py_BuildException();

	int ItemNum = CPythonPlayer::Instance().GetItemCountByChestVnum(ivnum);
	return Py_BuildValue("i", ItemNum);
}
#endif

// ara

		{ "GetItemMetinSocket",					playerGetItemMetinSocket,					METH_VARARGS },
		{ "GetItemAttribute",					playerGetItemAttribute,						METH_VARARGS },
		
// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
		{ "GetItemCountByUpgradeVnum",			playerGetItemCountByUpgradeVnum,			METH_VARARGS },
		{ "GetItemCountByBookVnum",				playerGetItemCountByBookVnum,				METH_VARARGS },
		{ "GetItemCountByStoneVnum",			playerGetItemCountByStoneVnum,				METH_VARARGS },
		{ "GetItemCountByChestVnum",			playerGetItemCountByChestVnum,				METH_VARARGS },
#endif

// ara

	PyModule_AddIntConstant(poModule, "EQUIPMENT_SLOT_START",	c_Equipment_Start);
	PyModule_AddIntConstant(poModule, "EQUIPMENT_PAGE_COUNT",	c_Equipment_Count);
	
// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	PyModule_AddIntConstant(poModule, "SLOT_TYPE_UPGRADE_INVENTORY",	SLOT_TYPE_UPGRADE_INVENTORY);
	PyModule_AddIntConstant(poModule, "SLOT_TYPE_BOOK_INVENTORY",		SLOT_TYPE_BOOK_INVENTORY);
	PyModule_AddIntConstant(poModule, "SLOT_TYPE_STONE_INVENTORY",		SLOT_TYPE_STONE_INVENTORY);
	PyModule_AddIntConstant(poModule, "SLOT_TYPE_CHEST_INVENTORY",		SLOT_TYPE_CHEST_INVENTORY);
	PyModule_AddIntConstant(poModule, "UPGRADE_INVENTORY",				UPGRADE_INVENTORY);
	PyModule_AddIntConstant(poModule, "BOOK_INVENTORY",					BOOK_INVENTORY);
	PyModule_AddIntConstant(poModule, "STONE_INVENTORY",				STONE_INVENTORY);
	PyModule_AddIntConstant(poModule, "CHEST_INVENTORY",				CHEST_INVENTORY);
	PyModule_AddIntConstant(poModule, "SPECIAL_PAGE_SIZE",				c_Special_Inventory_Page_Size);
	PyModule_AddIntConstant(poModule, "SPECIAL_PAGE_COUNT",				c_Special_Inventory_Page_Count);
	PyModule_AddIntConstant(poModule, "SPECIAL_SLOT_COUNT",				c_Special_ItemSlot_Count);
#endif