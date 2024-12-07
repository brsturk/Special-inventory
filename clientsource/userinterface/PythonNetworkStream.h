// ara
        bool SendShopSellPacketNew(BYTE bySlot, BYTE byCount);

// değiştir

#ifdef ENABLE_SPECIAL_STORAGE
		bool SendShopSellPacketNew(BYTE bySlot, BYTE byCount, BYTE byType);
#else
		bool SendShopSellPacketNew(BYTE bySlot, BYTE byCount);
#endif