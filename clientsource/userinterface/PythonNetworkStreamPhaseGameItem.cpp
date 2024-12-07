// ara

bool CPythonNetworkStream::SendShopSellPacketNew(BYTE bySlot, BYTE byCount)

// değiştir

#ifdef ENABLE_SPECIAL_STORAGE
bool CPythonNetworkStream::SendShopSellPacketNew(BYTE bySlot, BYTE byCount, BYTE byType)
#else
bool CPythonNetworkStream::SendShopSellPacketNew(BYTE bySlot, BYTE byCount)
#endif

// ara

	if (!Send(byCount))
	{
		Tracef("SendShopAddSellPacket Error\n");
		return false;
	}
	
// altına ekle

#ifdef ENABLE_SPECIAL_STORAGE
	if (!Send(sizeof(BYTE), &byType))
	{
		Tracef("SendShopAddSellPacket Error\n");
		return false;
	}
#endif

// hemen altında bul

Tracef(" SendShopSellPacketNew(bySlot=%d, byCount=%d)\n", bySlot, byCount);

// değiştir

#ifdef ENABLE_SPECIAL_STORAGE
	Tracef(" SendShopSellPacketNew(bySlot=%d, byCount=%d, byType=%d)\n", bySlot, byCount, byType);
#else
	Tracef(" SendShopSellPacketNew(bySlot=%d, byCount=%d)\n", bySlot, byCount);
#endif