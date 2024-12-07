// PyObject* netSendShopSellPacketNew(PyObject* poSelf, PyObject* poArgs) içinde ara

	if (!PyTuple_GetInteger(poArgs, 1, &iCount))
		return Py_BuildException();
	
// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	int iType;
	if (!PyTuple_GetInteger(poArgs, 2, &iType))
		return Py_BuildException();
#endif

// hemen altında bul

rkNetStream.SendShopSellPacketNew(iSlotNumber, iCount);

// değiştir

#ifdef ENABLE_SPECIAL_STORAGE
	rkNetStream.SendShopSellPacketNew(iSlotNumber, iCount, iType);
#else
	rkNetStream.SendShopSellPacketNew(iSlotNumber, iCount);
#endif